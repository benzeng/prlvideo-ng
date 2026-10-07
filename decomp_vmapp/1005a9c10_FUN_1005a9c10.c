
void FUN_1005a9c10(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10111deb8;
  FUN_1005a8180();
  QSemaphore::~QSemaphore((QSemaphore *)(param_1 + 9));
  operator_delete(param_1);
  return;
}

