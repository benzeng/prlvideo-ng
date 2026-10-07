
void FUN_100533d30(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  QMutex::QMutex((QMutex *)(param_1 + 1),0);
  *(undefined2 *)(param_1 + 2) = 0;
  *(undefined1 *)((long)param_1 + 0x12) = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  return;
}

