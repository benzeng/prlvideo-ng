
void FUN_100539a60(int *param_1)

{
  int iVar1;
  
  LOCK();
  iVar1 = *param_1;
  *param_1 = 0;
  UNLOCK();
  if (iVar1 != 0) {
    QSemaphore::release((int)(QSemaphore *)(param_1 + 4));
  }
  QSemaphore::~QSemaphore((QSemaphore *)(param_1 + 4));
  return;
}

