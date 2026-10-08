
undefined8 FUN_100da9fd0(long param_1,char *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  int *piVar4;
  char *pcVar5;
  undefined1 local_38 [16];
  
  if (*(char *)(param_1 + 0xbc) == '1') {
    if (param_2 == (char *)0x0) {
      param_2 = (char *)FUN_100daafc0(param_1);
    }
    uVar2 = FUN_100dac940(param_2);
    iVar1 = FUN_100da91b0(uVar2);
    uVar2 = 0xffffffff;
    if (iVar1 != -1) {
      FUN_100dac480(local_38);
      pcVar5 = *(char **)(param_1 + 0x228);
      if (*(char **)(param_1 + 0x228) == (char *)0x0) {
        pcVar5 = (char *)(param_1 + 0xbd);
      }
      iVar1 = FUN_100dac770(*(undefined8 *)(param_1 + 0x230),local_38,pcVar5,FUN_100dac1f0);
      if (iVar1 == 0) {
        pcVar5 = (char *)(param_1 + 0xbd);
        if (*(char **)(param_1 + 0x228) != (char *)0x0) {
          pcVar5 = *(char **)(param_1 + 0x228);
        }
      }
      else {
        lVar3 = FUN_100dac4a0(local_38);
        pcVar5 = (char *)(lVar3 + 0x400);
      }
      iVar1 = _link(pcVar5,param_2);
      uVar2 = 0;
      if (iVar1 == -1) {
        uVar2 = 0xffffffff;
      }
    }
  }
  else {
    piVar4 = ___error();
    *piVar4 = 0x16;
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

