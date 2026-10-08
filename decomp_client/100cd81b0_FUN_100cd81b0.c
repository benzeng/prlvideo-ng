
void FUN_100cd81b0(QObject *param_1)

{
  QObject *pQVar1;
  int *piVar2;
  undefined8 uVar3;
  QArrayData *pQVar4;
  
  *(undefined ***)param_1 = &PTR_FUN_10225a230;
  uVar3 = _CFNotificationCenterGetDistributedCenter();
  _CFNotificationCenterRemoveEveryObserver(uVar3,param_1);
  FUN_100cd8310(param_1,0);
  pQVar1 = param_1 + 0x18;
  piVar2 = *(int **)(param_1 + 0x18);
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((*piVar2 == 0) && (*(void **)pQVar1 != (void *)0x0)) {
      operator_delete(*(void **)pQVar1);
    }
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)pQVar1 = 0;
  }
  pQVar4 = *(QArrayData **)(param_1 + 0x60);
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_100cd824c;
      pQVar4 = *(QArrayData **)(param_1 + 0x60);
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_100cd824c:
  QTimer::~QTimer((QTimer *)(param_1 + 0x38));
  piVar2 = *(int **)pQVar1;
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((*piVar2 == 0) && (*(void **)pQVar1 != (void *)0x0)) {
      operator_delete(*(void **)pQVar1);
    }
  }
  QObject::~QObject(param_1);
  return;
}

