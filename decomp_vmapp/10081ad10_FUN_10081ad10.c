
long FUN_10081ad10(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = FUN_1008803e0();
  lVar2 = FUN_10087d330(uVar1);
  if (lVar2 != 0) {
    lVar3 = FUN_10081ad70(param_1);
    if (lVar3 != 0) {
      lVar4 = FUN_10087dfb0(lVar2,lVar3);
      if (lVar4 != 0) {
        return lVar4;
      }
      FUN_10087d4e0(lVar2);
      lVar2 = lVar3;
    }
    FUN_10087d4e0(lVar2);
  }
  return 0;
}

