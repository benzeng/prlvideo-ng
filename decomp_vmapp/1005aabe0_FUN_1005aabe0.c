
void FUN_1005aabe0(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  QMutex::QMutex((QMutex *)(param_1 + 1),0);
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)((long)param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  FUN_1005adfb0(param_1 + 9,param_1);
  param_1[4] = param_1 + 4;
  param_1[5] = param_1 + 4;
  return;
}

