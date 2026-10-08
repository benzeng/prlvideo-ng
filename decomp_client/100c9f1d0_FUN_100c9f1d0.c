
long FUN_100c9f1d0(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_2 != 0) {
    lVar1 = FUN_100c76b30(param_2,0);
    if ((lVar1 == 0) || (lVar2 = FUN_100c2a1a0(lVar1), lVar2 == 0)) {
      FUN_100c62ee0(0x22,0x78,0x41,"v3_utl.c",0xaa);
      lVar2 = 0;
    }
    FUN_100c266b0(lVar1);
    return lVar2;
  }
  return 0;
}

