
long FUN_100bf04e0(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = FUN_100c5a940();
  lVar2 = FUN_100c58530(uVar1);
  if (lVar2 != 0) {
    lVar3 = FUN_100c58530(&DAT_1023031e8);
    if (lVar3 != 0) {
      lVar4 = FUN_100be2f30(param_1);
      if (lVar4 == 0) {
        FUN_100c586e0(lVar3);
      }
      else {
        FUN_100be4410(lVar4);
        FUN_100c58d60(lVar3,0x6d,1,lVar4);
        lVar3 = FUN_100c591b0(lVar3,lVar2);
        if (lVar3 != 0) {
          return lVar3;
        }
      }
    }
    FUN_100c586e0(lVar2);
  }
  return 0;
}

