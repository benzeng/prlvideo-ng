
undefined8 *
FUN_100d07960(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  
  lVar2 = FUN_100d07820(param_2,param_3);
  lVar3 = 0;
  if (lVar2 != 0) {
    lVar3 = FUN_100d13320(lVar2,param_4);
  }
  puVar4 = (undefined8 *)(lVar3 + 8);
  if (lVar3 == 0) {
    puVar4 = param_5;
  }
  piVar1 = (int *)*puVar4;
  *param_1 = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  return param_1;
}

