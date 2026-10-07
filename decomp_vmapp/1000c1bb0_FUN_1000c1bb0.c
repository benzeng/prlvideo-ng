
void FUN_1000c1bb0(undefined8 param_1,long param_2)

{
  int iVar1;
  
  LOCK();
  iVar1 = *(int *)(param_2 + 4);
  if (iVar1 == 0) {
    *(int *)(param_2 + 4) = 1;
    iVar1 = 0;
  }
  UNLOCK();
  while (iVar1 == 1) {
    QThread::msleep(0x14);
    LOCK();
    iVar1 = *(int *)(param_2 + 4);
    if (iVar1 == 0) {
      *(int *)(param_2 + 4) = 1;
      iVar1 = 0;
    }
    UNLOCK();
  }
  return;
}

