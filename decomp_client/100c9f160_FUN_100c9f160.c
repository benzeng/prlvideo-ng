
long FUN_100c9f160(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_2 != 0) {
    lVar1 = FUN_100c78220(param_2,0);
    if ((lVar1 == 0) || (lVar2 = FUN_100c2a1a0(lVar1), lVar2 == 0)) {
      FUN_100c62ee0(0x22,0x79,0x41,"v3_utl.c",0x9d);
      lVar2 = 0;
    }
    FUN_100c266b0(lVar1);
    return lVar2;
  }
  return 0;
}

