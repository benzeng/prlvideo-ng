
void FUN_100b5a7c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1022cf410;
  QMutex::~QMutex((QMutex *)(param_1 + 1));
  operator_delete(param_1);
  return;
}

