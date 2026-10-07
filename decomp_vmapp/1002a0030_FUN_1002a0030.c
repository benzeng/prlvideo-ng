
void FUN_1002a0030(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101116168;
  FUN_10025ae40(param_1 + 1);
  *param_1 = &PTR_FUN_100bb2720;
  param_1[1] = &PTR_FUN_100bb27c8;
  param_1[7] = 0;
  param_1[6] = 0;
  QMutex::QMutex((QMutex *)(param_1 + 9),0);
  *(undefined1 *)(param_1 + 10) = 0;
  return;
}

