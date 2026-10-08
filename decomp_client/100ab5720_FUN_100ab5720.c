
undefined1 FUN_100ab5720(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = FUN_100c59870(&DAT_101cd6000,0xacc);
  if (lVar3 != 0) {
    lVar1 = FUN_100c90ae0(lVar3,0,0,0);
    FUN_100c586e0(lVar3);
    if (lVar1 == 0) {
      return 0;
    }
    lVar3 = FUN_100be7030(param_1);
    if ((lVar3 != 0) && (iVar2 = FUN_100c99440(lVar3,lVar1), iVar2 != 0)) {
      FUN_100be5a50(param_1,1,0);
      FUN_100c7cd70(lVar1);
      return 1;
    }
    FUN_100c7cd70(lVar1);
  }
  return 0;
}

