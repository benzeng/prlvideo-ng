
void FUN_1004c1f40(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_1004c0650();
  *param_1 = &PTR_FUN_100bc2e90;
  param_1[5] = PTR_shared_null_100ba2188;
  *(undefined1 *)(param_1 + 6) = 1;
  param_1[7] = PTR_shared_null_100ba20d8;
  QMutex::QMutex((QMutex *)(param_1 + 8),0);
  FUN_1004c0790(param_1,param_3,param_4);
  return;
}

