
void FUN_1002a2d30(undefined8 *param_1)

{
  param_1[-2] = &PTR_FUN_100bb27f8;
  param_1[-1] = &PTR_FUN_100bb28b0;
  *param_1 = &PTR_FUN_100bb28e0;
  QMutex::~QMutex((QMutex *)(param_1 + 5));
  FUN_10025b110(param_1);
  operator_delete(param_1 + -2);
  return;
}

