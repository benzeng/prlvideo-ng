
undefined8 FUN_1008bb3a0(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    return 0;
  }
  lVar1 = *(long *)*param_1;
  if (lVar1 == 0) {
    lVar1 = FUN_1008afdf0(2);
    *(long *)*param_1 = lVar1;
    if (lVar1 == 0) {
      return 0;
    }
  }
  uVar2 = FUN_10089b2a0(lVar1,param_2);
  return uVar2;
}

