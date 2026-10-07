
void FUN_100556800(long param_1)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  
  QMutex::lock();
  *(undefined8 *)(param_1 + 0x10) = 0;
  QWaitCondition::wakeAll();
  QWaitCondition::wakeAll();
  QMutex::unlock();
  QThread::wait(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x88) = 0xfffffffefffffffe;
  lVar1 = *(long *)(param_1 + 0x60);
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + -8) != 0) {
      lVar3 = *(long *)(lVar1 + -8) << 4;
      do {
        pvVar2 = *(void **)(lVar1 + -8 + lVar3);
        if (pvVar2 != (void *)0x0) {
          _free(pvVar2);
        }
        lVar3 = lVar3 + -0x10;
      } while (lVar3 != 0);
    }
    operator_delete__((void *)(lVar1 + -8));
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  lVar1 = *(long *)(param_1 + 0x98);
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + -8) != 0) {
      lVar3 = *(long *)(lVar1 + -8) << 4;
      do {
        pvVar2 = *(void **)(lVar1 + -0x10 + lVar3);
        if (pvVar2 != (void *)0x0) {
          _free(pvVar2);
        }
        lVar3 = lVar3 + -0x10;
      } while (lVar3 != 0);
    }
    operator_delete__((void *)(lVar1 + -8));
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  return;
}

