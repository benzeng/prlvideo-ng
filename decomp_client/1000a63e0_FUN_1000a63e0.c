
bool FUN_1000a63e0(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_10018f860();
  if (iVar1 == 8) {
    uVar2 = FUN_10018f890(param_1);
    if (0x805 < uVar2) {
      return true;
    }
  }
  iVar1 = FUN_10018f860(param_1);
  return iVar1 == 9;
}

