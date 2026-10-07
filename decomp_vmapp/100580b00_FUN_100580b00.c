
void FUN_100580b00(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10111dbe8;
  FUN_100583b70();
  QSemaphore::~QSemaphore((QSemaphore *)(param_1 + 9));
  operator_delete(param_1);
  return;
}

