
undefined1 FUN_10027edf0(undefined8 param_1)

{
  long lVar1;
  undefined1 uVar2;
  long lVar3;
  long local_28;
  uint *local_20;
  undefined1 local_11;
  
  CTaskManager::instance();
  CTaskManager::getRunningTasks((uint)&local_20);
  if (local_20[3] == local_20[2]) {
    uVar2 = 0;
  }
  else {
    lVar1 = **(long **)(local_20 + (long)(int)local_20[2] * 2 + 4);
    lVar3 = 0;
    if ((lVar1 != 0) && (lVar3 = 0, *(int *)(lVar1 + 4) != 0)) {
      lVar3 = (*(long **)(local_20 + (long)(int)local_20[2] * 2 + 4))[1];
    }
    QObject::connect(&local_28,lVar3,"2taskFinished(PRL_RESULT)",param_1,
                     "1onSuspendedScreenTaskFinished()",0);
    if (local_28 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_28);
    uVar2 = 1;
  }
  if (*local_20 != 0xffffffff) {
    if (*local_20 != 0) {
      LOCK();
      *local_20 = *local_20 - 1;
      UNLOCK();
      if (*local_20 != 0) {
        return uVar2;
      }
      local_11 = 0;
    }
    FUN_100034010(&local_20,local_20);
  }
  return uVar2;
}

