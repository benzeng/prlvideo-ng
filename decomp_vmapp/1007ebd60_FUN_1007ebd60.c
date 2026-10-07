
undefined1 FUN_1007ebd60(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = FUN_10087e670(&DAT_100b4d000,0xacc);
  if (lVar3 != 0) {
    lVar1 = FUN_1008b5560(lVar3,0,0,0);
    FUN_10087d4e0(lVar3);
    if (lVar1 == 0) {
      return 0;
    }
    lVar3 = FUN_1008118c0(param_1);
    if ((lVar3 != 0) && (iVar2 = FUN_1008bdec0(lVar3,lVar1), iVar2 != 0)) {
      FUN_1008102e0(param_1,1,0);
      FUN_1008a17f0(lVar1);
      return 1;
    }
    FUN_1008a17f0(lVar1);
  }
  return 0;
}

