
long FUN_10089fed0(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 local_38;
  
  local_38 = *param_2;
  lVar1 = FUN_1008a5f10(0,&local_38,param_3,&DAT_100be10c8);
  lVar3 = 0;
  if (lVar1 != 0) {
    lVar2 = FUN_10089fd00(lVar1);
    FUN_1008a4c40(lVar1,&DAT_100be10c8);
    lVar3 = 0;
    if ((lVar2 != 0) && (*param_2 = local_38, lVar3 = lVar2, param_1 != (long *)0x0)) {
      FUN_1008924e0(*param_1);
      *param_1 = lVar2;
    }
  }
  return lVar3;
}

