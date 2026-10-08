
void FUN_1002d3a90(CAbstractTask *param_1,undefined8 *param_2,QObject *param_3,QObject *param_4)

{
  CAbstractTask *pCVar1;
  CTaskGenericId *this;
  undefined8 uVar2;
  long lVar3;
  QObject *pQVar4;
  int *piVar5;
  int *piVar6;
  Data *local_40;
  undefined1 local_31;
  
  local_40 = (Data *)PTR_shared_null_1021e15e8;
  this = operator_new(0x18);
  CTaskGenericId::CTaskGenericId(this,0x98);
  CAbstractTask::CAbstractTask(param_1,(QList *)&local_40,this);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002d3b07;
    }
    QListData::dispose(local_40);
  }
LAB_1002d3b07:
  *(undefined ***)param_1 = &PTR_FUN_10220a100;
  uVar2 = QtSharedPointer::ExternalRefCountData::getAndRef(param_3);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  *(QObject **)(param_1 + 0x20) = param_3;
  piVar5 = (int *)*param_2;
  *(int **)(param_1 + 0x28) = piVar5;
  if (1 < *piVar5 + 1U) {
    LOCK();
    *piVar5 = *piVar5 + 1;
    local_31 = *piVar5 != 0;
    UNLOCK();
  }
  pCVar1 = param_1 + 0x38;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  lVar3 = 0;
  if (param_4 != (QObject *)0x0) {
    lVar3 = QtSharedPointer::ExternalRefCountData::getAndRef(param_4);
  }
  *(long *)(param_1 + 0x48) = lVar3;
  *(QObject **)(param_1 + 0x50) = param_4;
  *(undefined **)(param_1 + 0x58) = PTR_shared_null_1021e1288;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  if (((lVar3 != 0) && (*(int *)(lVar3 + 4) != 0)) && (param_4 != (QObject *)0x0)) {
    CContentArea::window();
    pQVar4 = (QObject *)QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e1330);
    piVar5 = (int *)0x0;
    if (pQVar4 != (QObject *)0x0) {
      piVar5 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar4);
    }
    piVar6 = *(int **)pCVar1;
    if (piVar6 != piVar5) {
      if (piVar5 != (int *)0x0) {
        LOCK();
        *piVar5 = *piVar5 + 1;
        UNLOCK();
        piVar6 = *(int **)pCVar1;
      }
      if (piVar6 != (int *)0x0) {
        LOCK();
        *piVar6 = *piVar6 + -1;
        local_31 = *piVar6 != 0;
        UNLOCK();
        if ((!(bool)local_31) && (*(void **)pCVar1 != (void *)0x0)) {
          operator_delete(*(void **)pCVar1);
        }
      }
      *(int **)(param_1 + 0x38) = piVar5;
      *(QObject **)(param_1 + 0x40) = pQVar4;
    }
    if (piVar5 != (int *)0x0) {
      LOCK();
      *piVar5 = *piVar5 + -1;
      local_31 = *piVar5 != 0;
      UNLOCK();
      if (!(bool)local_31) {
        operator_delete(piVar5);
      }
    }
  }
  return;
}

