
void FUN_1002609d0(CAbstractTask *param_1,QObject *param_2,QObject *param_3)

{
  CAbstractTask *pCVar1;
  CTaskGenericId *this;
  undefined8 uVar2;
  long lVar3;
  QObject *pQVar4;
  int *piVar5;
  int *piVar6;
  undefined1 auVar7 [16];
  Data *local_38;
  undefined1 local_29;
  
  local_38 = (Data *)PTR_shared_null_1021e15e8;
  this = operator_new(0x18);
  CTaskGenericId::CTaskGenericId(this,0x58);
  CAbstractTask::CAbstractTask(param_1,(QList *)&local_38,this);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100260a42;
    }
    QListData::dispose(local_38);
  }
LAB_100260a42:
  *(undefined ***)param_1 = &PTR_FUN_102204e30;
  uVar2 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  *(QObject **)(param_1 + 0x20) = param_2;
  pCVar1 = param_1 + 0x40;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  lVar3 = 0;
  param_1[0x38] = (CAbstractTask)0x0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (param_3 != (QObject *)0x0) {
    lVar3 = QtSharedPointer::ExternalRefCountData::getAndRef(param_3);
  }
  *(long *)(param_1 + 0x50) = lVar3;
  *(QObject **)(param_1 + 0x58) = param_3;
  auVar7._8_4_ = (int)PTR_shared_null_1021e1288;
  auVar7._0_8_ = PTR_shared_null_1021e1288;
  auVar7._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x60) = auVar7;
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (((lVar3 != 0) && (*(int *)(lVar3 + 4) != 0)) && (param_3 != (QObject *)0x0)) {
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
        local_29 = *piVar6 != 0;
        UNLOCK();
        if ((!(bool)local_29) && (*(void **)pCVar1 != (void *)0x0)) {
          operator_delete(*(void **)pCVar1);
        }
      }
      *(int **)(param_1 + 0x40) = piVar5;
      *(QObject **)(param_1 + 0x48) = pQVar4;
    }
    if (piVar5 != (int *)0x0) {
      LOCK();
      *piVar5 = *piVar5 + -1;
      local_29 = *piVar5 != 0;
      UNLOCK();
      if (!(bool)local_29) {
        operator_delete(piVar5);
      }
    }
  }
  return;
}

