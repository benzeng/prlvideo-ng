
void FUN_100daffd0(undefined8 *param_1,long *param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  
  FUN_100dacf40();
  *param_1 = &PTR_FUN_10225c0b0;
  lVar1 = *param_2;
  param_1[3] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  param_1[4] = param_3;
  *(undefined4 *)(param_1 + 5) = param_4;
  param_1[6] = PTR_shared_null_1021e1288;
  return;
}

