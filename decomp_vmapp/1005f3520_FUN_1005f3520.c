
void FUN_1005f3520(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_100bc7110;
  param_1[1] = &PTR_metaObject_100bc7140;
  QMutex::lock();
  *(undefined1 *)(param_1 + 5) = 1;
  QWaitCondition::wakeOne();
  QMutex::unlock();
  QThread::wait((ulong)(param_1 + 1));
  FUN_1005f3aa0(param_1 + 6);
  puVar4 = (undefined8 *)param_1[7];
  puVar1 = (undefined8 *)param_1[8];
  if (puVar4 != puVar1) {
    do {
      operator_delete((void *)*puVar4);
      puVar4 = puVar4 + 1;
    } while (puVar1 != puVar4);
    lVar2 = param_1[8];
    if (lVar2 != param_1[7]) {
      param_1[8] = (~((lVar2 + -8) - param_1[7]) & 0xfffffffffffffff8U) + lVar2;
    }
  }
  pvVar3 = (void *)param_1[6];
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  QMutex::~QMutex((QMutex *)(param_1 + 4));
  QWaitCondition::~QWaitCondition((QWaitCondition *)(param_1 + 3));
  QThread::~QThread((QThread *)(param_1 + 1));
  return;
}

