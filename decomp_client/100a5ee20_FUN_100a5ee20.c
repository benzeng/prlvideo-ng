
void FUN_100a5ee20(QMutex *param_1)

{
  undefined8 uVar1;
  Data *pDVar2;
  
  uVar1 = _CFNotificationCenterGetDistributedCenter();
  _CFNotificationCenterRemoveEveryObserver(uVar1,param_1);
  FUN_1000ee530(param_1 + 0x10);
  pDVar2 = *(Data **)(param_1 + 8);
  if (*(int *)pDVar2 != -1) {
    if (*(int *)pDVar2 != 0) {
      LOCK();
      *(int *)pDVar2 = *(int *)pDVar2 + -1;
      UNLOCK();
      if (*(int *)pDVar2 != 0) goto LAB_100a5ee6d;
      pDVar2 = *(Data **)(param_1 + 8);
    }
    QListData::dispose(pDVar2);
  }
LAB_100a5ee6d:
  QMutex::~QMutex(param_1);
  return;
}

