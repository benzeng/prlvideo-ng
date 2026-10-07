
long FUN_1008c3c50(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_2 != 0) {
    lVar1 = FUN_10089b5b0(param_2,0);
    if ((lVar1 == 0) || (lVar2 = FUN_10084efa0(lVar1), lVar2 == 0)) {
      FUN_100887ce0(0x22,0x78,0x41,"v3_utl.c",0xaa);
      lVar2 = 0;
    }
    FUN_10084b4b0(lVar1);
    return lVar2;
  }
  return 0;
}

