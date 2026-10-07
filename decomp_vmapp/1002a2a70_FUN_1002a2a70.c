
void FUN_1002a2a70(undefined8 *param_1)

{
  param_1[-1] = &PTR_FUN_100bb2720;
  *param_1 = &PTR_FUN_100bb27c8;
  QMutex::~QMutex((QMutex *)(param_1 + 8));
  FUN_10025b110(param_1);
  operator_delete(param_1 + -1);
  return;
}

