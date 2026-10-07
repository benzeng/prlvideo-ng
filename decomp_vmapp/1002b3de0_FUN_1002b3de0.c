
void FUN_1002b3de0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_100bb2db0;
  FUN_1002b2690(param_1,1);
  QMutex::~QMutex((QMutex *)(param_1 + 1));
  operator_delete(param_1);
  return;
}

