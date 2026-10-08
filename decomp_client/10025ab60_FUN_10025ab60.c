
void FUN_10025ab60(CAbstractTask *param_1,QObject *param_2,QObject *param_3,undefined8 *param_4)

{
  CTaskGenericId *pCVar1;
  undefined8 uVar2;
  QObject *pQVar3;
  int *piVar4;
  int *piVar5;
  QArrayData *local_48;
  Data *local_40;
  undefined1 local_31;
  
  local_40 = (Data *)PTR_shared_null_1021e15e8;
  pCVar1 = operator_new(0x18);
  FUN_10015aab0(&local_48,param_2);
  FUN_1001e3540(pCVar1,&local_48);
  CAbstractTask::CAbstractTask(param_1,(QList *)&local_40,pCVar1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10025abf1;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10025abf1:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10025ac17;
    }
    QListData::dispose(local_40);
  }
LAB_10025ac17:
  *(undefined ***)param_1 = &PTR_FUN_102204d10;
  uVar2 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  *(QObject **)(param_1 + 0x20) = param_2;
  uVar2 = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (param_3 != (QObject *)0x0) {
    uVar2 = QtSharedPointer::ExternalRefCountData::getAndRef(param_3);
  }
  *(undefined8 *)(param_1 + 0x68) = uVar2;
  *(QObject **)(param_1 + 0x70) = param_3;
  piVar4 = (int *)*param_4;
  *(int **)(param_1 + 0x78) = piVar4;
  if (1 < *piVar4 + 1U) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    local_31 = *piVar4 != 0;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_4 + 1);
  FUN_100260700(param_1 + 0x88,param_4 + 2);
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  if (((*(long *)(param_1 + 0x68) != 0) && (*(int *)(*(long *)(param_1 + 0x68) + 4) != 0)) &&
     (*(long *)(param_1 + 0x70) != 0)) {
    CContentArea::window();
    pQVar3 = (QObject *)QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e1330);
    piVar4 = (int *)0x0;
    if (pQVar3 != (QObject *)0x0) {
      piVar4 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar3);
    }
    piVar5 = *(int **)(param_1 + 0x38);
    if (piVar5 != piVar4) {
      if (piVar4 != (int *)0x0) {
        LOCK();
        *piVar4 = *piVar4 + 1;
        UNLOCK();
        piVar5 = *(int **)(param_1 + 0x38);
      }
      if (piVar5 != (int *)0x0) {
        LOCK();
        *piVar5 = *piVar5 + -1;
        local_31 = *piVar5 != 0;
        UNLOCK();
        if ((!(bool)local_31) && (*(void **)(param_1 + 0x38) != (void *)0x0)) {
          operator_delete(*(void **)(param_1 + 0x38));
        }
      }
      *(int **)(param_1 + 0x38) = piVar4;
      *(QObject **)(param_1 + 0x40) = pQVar3;
    }
    if (piVar4 != (int *)0x0) {
      LOCK();
      *piVar4 = *piVar4 + -1;
      local_31 = *piVar4 != 0;
      UNLOCK();
      if (!(bool)local_31) {
        operator_delete(piVar4);
      }
    }
  }
  return;
}

