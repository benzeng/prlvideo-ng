
void FUN_1003280e0(undefined8 *param_1)

{
  FUN_100327cd0();
  *param_1 = &PTR_FUN_10220bab0;
  param_1[9] = 0;
  QMutex::QMutex((QMutex *)(param_1 + 10),1);
  param_1[0xb] = 0;
  FUN_100328170(param_1);
  FUN_100328400(param_1);
  return;
}

