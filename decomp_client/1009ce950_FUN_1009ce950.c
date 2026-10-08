
undefined8 FUN_1009ce950(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  char *pcVar1;
  int iVar2;
  undefined4 extraout_var;
  undefined8 uVar3;
  
  pcVar1 = DAT_102313778;
  if (param_4 == '\0') {
    uVar3 = 0;
  }
  else {
    _snprintf(DAT_102313778,(ulong)DAT_102313770 << 0xb,"%s/%s.desc",param_1,param_2);
    iVar2 = _open(pcVar1,0x201,0x180);
    iVar2 = _close(iVar2);
    uVar3 = CONCAT71((int7)(CONCAT44(extraout_var,iVar2) >> 8),1);
  }
  return uVar3;
}

