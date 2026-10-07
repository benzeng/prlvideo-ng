
void FUN_100539ab0(int *param_1)

{
  int iVar1;
  
  LOCK();
  iVar1 = *param_1;
  *param_1 = 0;
  UNLOCK();
  if (iVar1 != 0) {
    QSemaphore::release((int)param_1 + 0x10);
    return;
  }
  return;
}

