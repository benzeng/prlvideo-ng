
undefined8 FUN_100662200(char *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined1 local_24 [4];
  
  pcVar3 = *(char **)(param_2 + 8);
  if (param_1 != (char *)0x0) {
    if (pcVar3 != (char *)0x0) {
      iVar1 = _strcmp(pcVar3,param_1);
      if (iVar1 == 0) goto LAB_100662271;
      if (DAT_1011b55f8 < 3) {
        return 0xffffffff;
      }
      pcVar3 = "PCSC Error: Can\'t connect to another reader.";
      goto LAB_100662314;
    }
    pcVar3 = _strdup(param_1);
    *(char **)(param_2 + 8) = pcVar3;
  }
  if (pcVar3 != (char *)0x0) {
LAB_100662271:
    if (*(int *)(param_2 + 4) != 1) {
      return 0;
    }
    iVar1 = _SCardConnect(*(undefined4 *)(param_2 + 0x10),pcVar3,2,3,param_2 + 0x14,local_24);
    if (iVar1 != 0) {
      if (2 < DAT_1011b55f8) {
        uVar2 = _pcsc_stringify_error(iVar1);
        FUN_1008e3970("","PrlPCSC",3,"PCSC: SCardConnect 0x%x %s",iVar1,uVar2);
      }
      *(undefined4 *)(param_2 + 4) = 0;
      return 0xffffffff;
    }
    *(undefined4 *)(param_2 + 4) = 2;
    return 0;
  }
  if (DAT_1011b55f8 < 3) {
    return 0xffffffff;
  }
  pcVar3 = "PCSC Error: Empty reader name.";
LAB_100662314:
  FUN_1008e3970("","PrlPCSC",3,pcVar3);
  return 0xffffffff;
}

