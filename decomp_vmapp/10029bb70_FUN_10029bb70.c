
void FUN_10029bb70(undefined8 *param_1)

{
  param_1[-1] = &PTR_FUN_100bb1e90;
  *param_1 = &PTR_FUN_100bb1f08;
  QMutex::~QMutex((QMutex *)(param_1 + 8));
  operator_delete(param_1 + -1);
  return;
}

