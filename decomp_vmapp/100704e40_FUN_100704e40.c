
void FUN_100704e40(undefined8 *param_1,long *param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  
  FUN_100701e10();
  *param_1 = &PTR_FUN_100bcdc40;
  lVar1 = *param_2;
  param_1[3] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  param_1[4] = param_3;
  *(undefined4 *)(param_1 + 5) = param_4;
  param_1[6] = PTR_shared_null_100ba20d0;
  return;
}

