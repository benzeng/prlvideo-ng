
bool FUN_1007196a0(long param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  
  if (param_1 == 0) {
    bVar1 = false;
  }
  else {
    iVar2 = FUN_10018f860(param_1);
    if (iVar2 == 8) {
      uVar3 = FUN_10018f890(param_1);
      bVar1 = 0x805 < uVar3;
    }
    else {
      bVar1 = false;
    }
  }
  return bVar1;
}

