
long FUN_100c901e0(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = FUN_100c91810(param_1,0);
  lVar3 = 0;
  if (lVar1 != 0) {
    lVar2 = FUN_100c6d680(lVar1);
    FUN_100c6d8c0(lVar1);
    lVar3 = 0;
    if ((lVar2 != 0) && (lVar3 = lVar2, param_2 != (long *)0x0)) {
      FUN_100c4d5f0(*param_2);
      *param_2 = lVar2;
    }
  }
  return lVar3;
}

