
long FUN_100c3a6d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  uVar3 = FUN_100c3a1f0();
  lVar4 = FUN_100c36060(uVar3);
  lVar5 = 0;
  if ((lVar4 != 0) &&
     (iVar1 = FUN_100c36d50(lVar4,param_1,param_2,param_3,param_4), lVar5 = lVar4, iVar1 == 0)) {
    uVar2 = FUN_100c637f0();
    if (((uVar2 & 0xff000000) == 0x10000000) && ((uVar2 & 0xfff) - 0x87 < 2)) {
      FUN_100c63270();
      FUN_100c362c0(lVar4);
      uVar3 = FUN_100c3a1f0();
      lVar4 = FUN_100c36060(uVar3);
      if (lVar4 == 0) {
        return 0;
      }
      iVar1 = FUN_100c36d50(lVar4,param_1,param_2,param_3,param_4);
      if (iVar1 != 0) {
        return lVar4;
      }
    }
    FUN_100c362c0(lVar4);
    lVar5 = 0;
  }
  return lVar5;
}

