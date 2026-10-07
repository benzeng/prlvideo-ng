
void FUN_100539a20(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  QSemaphore::QSemaphore((QSemaphore *)(param_1 + 4),0);
  return;
}

