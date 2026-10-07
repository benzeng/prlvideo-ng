
long FUN_10085f4d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  uVar3 = FUN_10085eff0();
  lVar4 = FUN_10085ae60(uVar3);
  lVar5 = 0;
  if ((lVar4 != 0) &&
     (iVar1 = FUN_10085bb50(lVar4,param_1,param_2,param_3,param_4), lVar5 = lVar4, iVar1 == 0)) {
    uVar2 = FUN_1008885f0();
    if (((uVar2 & 0xff000000) == 0x10000000) && ((uVar2 & 0xfff) - 0x87 < 2)) {
      FUN_100888070();
      FUN_10085b0c0(lVar4);
      uVar3 = FUN_10085eff0();
      lVar4 = FUN_10085ae60(uVar3);
      if (lVar4 == 0) {
        return 0;
      }
      iVar1 = FUN_10085bb50(lVar4,param_1,param_2,param_3,param_4);
      if (iVar1 != 0) {
        return lVar4;
      }
    }
    FUN_10085b0c0(lVar4);
    lVar5 = 0;
  }
  return lVar5;
}

