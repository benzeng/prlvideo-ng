
void FUN_100613b20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10111e628;
  FUN_1006139a0();
  QSemaphore::~QSemaphore((QSemaphore *)(param_1 + 9));
  operator_delete(param_1);
  return;
}

