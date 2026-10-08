
bool FUN_100c96830(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  bool bVar6;
  
  iVar1 = FUN_100c97b50(param_1,param_3,0xffffffff);
  lVar3 = 0;
  if (-1 < iVar1) {
    iVar2 = FUN_100c97b50(param_1,param_3,iVar1);
    if (iVar2 != -1) {
      return false;
    }
    uVar4 = FUN_100c97bb0(param_1,iVar1);
    lVar3 = FUN_100c97af0(uVar4);
  }
  iVar1 = FUN_100c97b50(param_2,param_3,0xffffffff);
  lVar5 = 0;
  if (-1 < iVar1) {
    iVar2 = FUN_100c97b50(param_2,param_3,iVar1);
    if (iVar2 != -1) {
      return false;
    }
    uVar4 = FUN_100c97bb0(param_2,iVar1);
    lVar5 = FUN_100c97af0(uVar4);
  }
  bVar6 = true;
  if (lVar3 != 0 || lVar5 != 0) {
    bVar6 = false;
    if ((lVar3 != 0) && (bVar6 = false, lVar5 != 0)) {
      iVar1 = FUN_100c76bb0(lVar3,lVar5);
      bVar6 = iVar1 == 0;
    }
  }
  return bVar6;
}

