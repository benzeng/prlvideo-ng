
void * FUN_1006894e0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  void *pvVar3;
  long local_38;
  uint *local_30;
  undefined1 local_21;
  
  CTaskManager::instance();
  CTaskManager::getRunningTasks((uint)&local_30);
  uVar2 = local_30[2];
  if (local_30[3] == uVar2) {
    pvVar3 = operator_new(0x48);
    FUN_1002ca010(pvVar3,param_2);
    QObject::connect(&local_38,pvVar3,"2taskFinished(PRL_RESULT)",param_1,
                     "1onDownloadKeysFinished(PRL_RESULT)",0);
    if (local_38 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    CAbstractTask::execute();
  }
  else {
    if (1 < *local_30) {
      FUN_10068d030(&local_30,local_30[1]);
      uVar2 = local_30[2];
    }
    lVar1 = **(long **)(local_30 + (long)(int)uVar2 * 2 + 4);
    pvVar3 = (void *)0x0;
    if ((lVar1 != 0) && (pvVar3 = (void *)0x0, *(int *)(lVar1 + 4) != 0)) {
      pvVar3 = (void *)(*(long **)(local_30 + (long)(int)uVar2 * 2 + 4))[1];
    }
  }
  if (*local_30 != 0xffffffff) {
    if (*local_30 != 0) {
      LOCK();
      *local_30 = *local_30 - 1;
      UNLOCK();
      if (*local_30 != 0) {
        return pvVar3;
      }
      local_21 = 0;
    }
    FUN_100034010(&local_30,local_30);
  }
  return pvVar3;
}

