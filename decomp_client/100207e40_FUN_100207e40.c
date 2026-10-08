
void FUN_100207e40(CAbstractTask *param_1,QObject *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,QObject *param_6,QList *param_7)

{
  CAbstractTask *pCVar1;
  CTaskGenericId *pCVar2;
  undefined8 uVar3;
  long lVar4;
  QObject *pQVar5;
  int *piVar6;
  int *piVar7;
  Connection local_48 [8];
  QArrayData *local_40;
  undefined1 local_31;
  
  pCVar2 = operator_new(0x18);
  FUN_100188480(&local_40,param_2);
  FUN_1002095f0(pCVar2,&local_40);
  CAbstractTask::CAbstractTask(param_1,param_7,pCVar2);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100207ece;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100207ece:
  *(undefined ***)param_1 = &PTR_FUN_102200810;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  uVar3 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  *(QObject **)(param_1 + 0x30) = param_2;
  lVar4 = 0;
  if (param_6 != (QObject *)0x0) {
    lVar4 = QtSharedPointer::ExternalRefCountData::getAndRef(param_6);
  }
  *(long *)(param_1 + 0x38) = lVar4;
  *(QObject **)(param_1 + 0x40) = param_6;
  pCVar1 = param_1 + 0x48;
  param_1[0x58] = (CAbstractTask)0x0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  pQVar5 = operator_new(0xd8);
  if (param_4 == 0) {
    uVar3 = 0;
    if ((*(long *)(param_1 + 0x28) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x30);
    }
    param_4 = FUN_10018c2b0(uVar3);
    lVar4 = *(long *)(param_1 + 0x38);
  }
  uVar3 = 0;
  if ((lVar4 != 0) && (uVar3 = 0, *(int *)(lVar4 + 4) != 0)) {
    uVar3 = *(undefined8 *)(param_1 + 0x40);
  }
  FUN_100421cc0(pQVar5,param_3,param_5,param_4,uVar3);
  piVar6 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar5);
  piVar7 = *(int **)pCVar1;
  if (piVar7 != piVar6) {
    if (piVar6 != (int *)0x0) {
      LOCK();
      *piVar6 = *piVar6 + 1;
      local_31 = *piVar6 != 0;
      UNLOCK();
      piVar7 = *(int **)pCVar1;
    }
    if (piVar7 != (int *)0x0) {
      LOCK();
      *piVar7 = *piVar7 + -1;
      local_31 = *piVar7 != 0;
      UNLOCK();
      if ((!(bool)local_31) && (*(void **)pCVar1 != (void *)0x0)) {
        operator_delete(*(void **)pCVar1);
      }
    }
    *(int **)(param_1 + 0x48) = piVar6;
    *(QObject **)(param_1 + 0x50) = pQVar5;
  }
  if (piVar6 != (int *)0x0) {
    LOCK();
    *piVar6 = *piVar6 + -1;
    local_31 = *piVar6 != 0;
    UNLOCK();
    if (!(bool)local_31) {
      operator_delete(piVar6);
    }
  }
  uVar3 = 0;
  if ((*(long *)pCVar1 != 0) && (uVar3 = 0, *(int *)(*(long *)pCVar1 + 4) != 0)) {
    uVar3 = *(undefined8 *)(param_1 + 0x50);
  }
  QWidget::setAttribute(uVar3,0x37,1);
  uVar3 = 0;
  if ((*(long *)pCVar1 != 0) && (uVar3 = 0, *(int *)(*(long *)pCVar1 + 4) != 0)) {
    uVar3 = *(undefined8 *)(param_1 + 0x50);
  }
  QObject::connect(local_48,uVar3,"2buttonPressed(PRL_RESULT)",param_1,
                   "1onDialogButtonPressed(PRL_RESULT)",0);
  QMetaObject::Connection::~Connection(local_48);
  (**(code **)(**(long **)(param_1 + 0x50) + 0x1a0))();
  return;
}

