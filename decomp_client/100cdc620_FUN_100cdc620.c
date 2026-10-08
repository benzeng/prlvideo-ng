
int FUN_100cdc620(long param_1,int param_2,undefined8 param_3)

{
  short sVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  
  sVar1 = _CGEventGetIntegerValueField(param_3,10);
  iVar2 = _KBGetLayoutType((int)sVar1);
  uVar3 = _CGEventGetFlags(param_3);
  iVar4 = param_2;
  if (((((*(uint *)(param_1 + 0x3b0) & 0xffffff00) == 0x700) && (iVar2 != 0x49534f20)) &&
      (iVar2 != 0x4a495320)) && ((iVar4 = 0x5e, param_2 != 0x31 && (iVar4 = 0x31, param_2 != 0x5e)))
     ) {
    iVar4 = param_2;
  }
  iVar2 = 0x6a;
  if (iVar4 != 0x6c) {
    iVar2 = iVar4;
  }
  if ((uVar3 & 0x800000) == 0) {
    iVar2 = iVar4;
  }
  return iVar2;
}

