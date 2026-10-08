
void FUN_100acaa00(QObject *param_1)

{
  int iVar1;
  QArrayData *pQVar2;
  
  *(undefined ***)param_1 = &PTR_FUN_10223a320;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_10223a4c0;
  QMutex::lock();
  iVar1 = *(int *)(param_1 + 0x58);
  if (iVar1 == 1) {
    (**(code **)(**(long **)(param_1 + 0x78) + 0x68))();
    *(undefined4 *)(param_1 + 0x58) = 0;
    QMutex::unlock();
  }
  if (*(long **)(param_1 + 0x78) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x78) + 0x20))();
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  FUN_100adb160(0);
  if (iVar1 != 1) {
    QMutex::unlock();
  }
  QTimer::~QTimer((QTimer *)(param_1 + 0xc0));
  QTimer::~QTimer((QTimer *)(param_1 + 0xa0));
  QMutex::~QMutex((QMutex *)(param_1 + 0x60));
  pQVar2 = *(QArrayData **)(param_1 + 0x50);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_100acaaee;
      pQVar2 = *(QArrayData **)(param_1 + 0x50);
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100acaaee:
  FUN_100ace520(param_1 + 0x20);
  FUN_100a4a040(param_1 + 0x10);
  QObject::~QObject(param_1);
  return;
}

