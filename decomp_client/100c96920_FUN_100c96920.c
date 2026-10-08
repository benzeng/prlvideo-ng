
undefined8 FUN_100c96920(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    return 0;
  }
  lVar1 = *(long *)*param_1;
  if (lVar1 == 0) {
    lVar1 = FUN_100c8b370(2);
    *(long *)*param_1 = lVar1;
    if (lVar1 == 0) {
      return 0;
    }
  }
  uVar2 = FUN_100c76820(lVar1,param_2);
  return uVar2;
}

