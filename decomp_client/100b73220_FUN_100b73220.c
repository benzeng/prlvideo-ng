
undefined8 FUN_100b73220(undefined8 param_1,undefined8 param_2,char *param_3)

{
  int iVar1;
  char *in_RAX;
  char *pcVar2;
  ulong uVar3;
  char *local_28;
  
  local_28 = in_RAX;
  pcVar2 = _strchr(param_3,0x3a);
  iVar1 = DAT_101da2120;
  if (pcVar2 != (char *)0x0) {
    local_28 = (char *)0x0;
    uVar3 = _strtoul(pcVar2 + 1,&local_28,10);
    if (0xfffe < (int)uVar3 - 1U) {
      pcVar2 = "Bad server port";
      goto LAB_100b732d6;
    }
    *pcVar2 = '\0';
    iVar1 = (int)uVar3;
  }
  if (*param_3 == '\0') {
    pcVar2 = "Bad server name";
  }
  else {
    iVar1 = FUN_100b94e40(param_2,param_3,iVar1);
    if (iVar1 == 0) {
      return 0;
    }
    pcVar2 = "Not enough memory for operation.";
  }
LAB_100b732d6:
  FUN_100df99c0("","License",0,pcVar2);
  return 0xfffffff3;
}

