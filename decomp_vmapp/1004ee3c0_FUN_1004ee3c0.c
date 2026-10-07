
void FUN_1004ee3c0(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4)

{
  *param_1 = 0;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  *(undefined1 *)((long)param_1 + 0x14) = param_4;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = param_1 + 4;
  QMutex::QMutex((QMutex *)(param_1 + 6),0);
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)((long)param_1 + 0x39) = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 0;
  param_1[8] = param_1 + 8;
  param_1[9] = param_1 + 8;
  param_1[10] = 0;
  param_1[0xb] = param_1 + 0xb;
  param_1[0xc] = param_1 + 0xb;
  param_1[0xd] = 0;
  return;
}

