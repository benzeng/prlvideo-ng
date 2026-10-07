
long FUN_1008c3be0(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_2 != 0) {
    lVar1 = FUN_10089cca0(param_2,0);
    if ((lVar1 == 0) || (lVar2 = FUN_10084efa0(lVar1), lVar2 == 0)) {
      FUN_100887ce0(0x22,0x79,0x41,"v3_utl.c",0x9d);
      lVar2 = 0;
    }
    FUN_10084b4b0(lVar1);
    return lVar2;
  }
  return 0;
}

