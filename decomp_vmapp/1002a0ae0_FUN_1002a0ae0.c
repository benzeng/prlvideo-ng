
void FUN_1002a0ae0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101116168;
  param_1[1] = &PTR_FUN_101116200;
  FUN_10025ae40(param_1 + 2);
  *param_1 = &PTR_FUN_100bb27f8;
  param_1[1] = &PTR_FUN_100bb28b0;
  param_1[2] = &PTR_FUN_100bb28e0;
  QMutex::QMutex((QMutex *)(param_1 + 7),0);
  return;
}

