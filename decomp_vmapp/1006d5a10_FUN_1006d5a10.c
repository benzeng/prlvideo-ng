
void FUN_1006d5a10(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10116d780;
  QMutex::~QMutex((QMutex *)(param_1 + 1));
  operator_delete(param_1);
  return;
}

