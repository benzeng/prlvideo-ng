
void FUN_10003fc90(QObject *param_1)

{
  QArrayData *pQVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_1021f9390;
  QTimer::stop();
  FUN_100039a80(param_1 + 0x70);
  FUN_100039a80(param_1 + 0x68);
  pQVar1 = *(QArrayData **)(param_1 + 0x60);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_10003fcfc;
      pQVar1 = *(QArrayData **)(param_1 + 0x60);
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10003fcfc:
  pQVar1 = *(QArrayData **)(param_1 + 0x58);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_10003fd2c;
      pQVar1 = *(QArrayData **)(param_1 + 0x58);
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10003fd2c:
  QMutex::~QMutex((QMutex *)(param_1 + 0x50));
  FUN_100039a80(param_1 + 0x48);
  QTimer::~QTimer((QTimer *)(param_1 + 0x28));
  pQVar1 = *(QArrayData **)(param_1 + 0x20);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_10003fd76;
      pQVar1 = *(QArrayData **)(param_1 + 0x20);
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10003fd76:
  pQVar1 = *(QArrayData **)(param_1 + 0x18);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_10003fda6;
      pQVar1 = *(QArrayData **)(param_1 + 0x18);
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10003fda6:
  pQVar1 = *(QArrayData **)(param_1 + 0x10);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_10003fdd6;
      pQVar1 = *(QArrayData **)(param_1 + 0x10);
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10003fdd6:
  QObject::~QObject(param_1);
  return;
}

