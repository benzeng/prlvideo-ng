
long FUN_1008b52c0(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = FUN_1008b67b0(param_1,0);
  lVar3 = 0;
  if (lVar1 != 0) {
    lVar2 = FUN_100892350(lVar1);
    FUN_1008924e0(lVar1);
    lVar3 = 0;
    if ((lVar2 != 0) && (lVar3 = lVar2, param_2 != (long *)0x0)) {
      FUN_100863f80(*param_2);
      *param_2 = lVar2;
    }
  }
  return lVar3;
}

