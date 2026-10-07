
void FUN_1002ec370(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  *param_1 = param_2;
  param_1[1] = 0;
  *(undefined2 *)((long)param_1 + 0x16) = param_3;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = 1;
  param_1[4] = PTR_shared_null_100ba2180;
  QMutex::QMutex((QMutex *)(param_1 + 5),0);
  return;
}

