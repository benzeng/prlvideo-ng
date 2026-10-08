
undefined8 * FUN_10009f2e0(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    param_1[1] = 0;
  }
  else {
    *param_1 = *param_2;
    lVar1 = param_2[1];
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    param_1[2] = param_2[2];
  }
  return param_1;
}

