
long FUN_10081ad70(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = FUN_10087f740();
  lVar2 = FUN_10087d330(uVar1);
  if (lVar2 != 0) {
    lVar3 = FUN_10087d330(&DAT_1011a9418);
    if (lVar3 != 0) {
      lVar4 = FUN_10080d7c0(param_1);
      if (lVar4 == 0) {
        FUN_10087d4e0(lVar3);
      }
      else {
        FUN_10080eca0(lVar4);
        FUN_10087db60(lVar3,0x6d,1,lVar4);
        lVar3 = FUN_10087dfb0(lVar3,lVar2);
        if (lVar3 != 0) {
          return lVar3;
        }
      }
    }
    FUN_10087d4e0(lVar2);
  }
  return 0;
}

