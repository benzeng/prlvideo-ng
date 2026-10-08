
bool FUN_1000a6380(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  bool bVar5;
  
  uVar3 = FUN_100152280();
  lVar4 = FUN_1001548f0(uVar3,param_1);
  if (lVar4 == 0) {
    bVar5 = false;
  }
  else {
    iVar1 = FUN_10018f860(lVar4);
    if (iVar1 == 8) {
      uVar2 = FUN_10018f890(lVar4);
      if (0x805 < uVar2) {
        return true;
      }
    }
    iVar1 = FUN_10018f860(lVar4);
    bVar5 = iVar1 == 9;
  }
  return bVar5;
}

