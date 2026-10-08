
long FUN_100bf0480(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = FUN_100c5b5e0();
  lVar2 = FUN_100c58530(uVar1);
  if (lVar2 != 0) {
    lVar3 = FUN_100bf04e0(param_1);
    if (lVar3 != 0) {
      lVar4 = FUN_100c591b0(lVar2,lVar3);
      if (lVar4 != 0) {
        return lVar4;
      }
      FUN_100c586e0(lVar2);
      lVar2 = lVar3;
    }
    FUN_100c586e0(lVar2);
  }
  return 0;
}

