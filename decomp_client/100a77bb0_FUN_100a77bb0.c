
undefined4 FUN_100a77bb0(long param_1,int param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  QMutex::lock();
  lVar2 = QThread::currentThread();
  if ((lVar2 != param_1) &&
     (((*(int *)(param_1 + 0xa8) == 2 || (*(int *)(param_1 + 0xa8) == 3)) &&
      (*(int *)(param_1 + 0xa0) != 1)))) {
    if (param_2 == 0) {
      QWaitCondition::wait((QMutex *)(param_1 + 0x98),param_1 + 0x88U);
    }
    else {
      QWaitCondition::wait((QMutex *)(param_1 + 0x98),param_1 + 0x88U);
    }
  }
  uVar1 = *(undefined4 *)(param_1 + 0xa0);
  QMutex::unlock();
  return uVar1;
}

