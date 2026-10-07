
long FUN_10081ae10(undefined8 param_1,int param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_10087d330(&DAT_1011a9418);
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = FUN_10080d7c0(param_1);
    if (lVar2 == 0) {
      FUN_10087d4e0(lVar1);
      lVar2 = 0;
    }
    else {
      if (param_2 == 0) {
        FUN_10080eba0(lVar2);
      }
      else {
        FUN_10080eca0();
      }
      FUN_10087db60(lVar1,0x6d,1,lVar2);
      lVar2 = lVar1;
    }
  }
  return lVar2;
}

