
long FUN_100bf0580(undefined8 param_1,int param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_100c58530(&DAT_1023031e8);
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = FUN_100be2f30(param_1);
    if (lVar2 == 0) {
      FUN_100c586e0(lVar1);
      lVar2 = 0;
    }
    else {
      if (param_2 == 0) {
        FUN_100be4310(lVar2);
      }
      else {
        FUN_100be4410();
      }
      FUN_100c58d60(lVar1,0x6d,1,lVar2);
      lVar2 = lVar1;
    }
  }
  return lVar2;
}

