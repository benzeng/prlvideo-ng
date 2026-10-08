
void FUN_1002150c0(CAbstractTask *param_1,QObject *param_2,undefined8 param_3)

{
  CAbstractTask *pCVar1;
  CAbstractTask CVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  QObject *pQVar5;
  int *piVar6;
  int *piVar7;
  void *pvVar8;
  QArrayData *local_70;
  QVariant local_68;
  QVariant local_58;
  QArrayData *local_48;
  Data *local_40;
  undefined1 local_31;
  
  local_40 = (Data *)PTR_shared_null_1021e15e8;
  CAbstractTask::CAbstractTask(param_1,(QList *)&local_40,(CTaskGenericId *)0x0);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100215116;
    }
    QListData::dispose(local_40);
  }
LAB_100215116:
  *(undefined ***)param_1 = &PTR_FUN_102201300;
  uVar4 = 0;
  if (param_2 != (QObject *)0x0) {
    uVar4 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  }
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  *(QObject **)(param_1 + 0x20) = param_2;
  pCVar1 = param_1 + 0x28;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  uVar4 = FUN_100794960();
  CAppliance::getApplianceId();
  pQVar5 = (QObject *)FUN_100795470(uVar4,param_2,&local_48);
  piVar6 = (int *)0x0;
  if (pQVar5 != (QObject *)0x0) {
    piVar6 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar5);
  }
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
    *(int **)(param_1 + 0x28) = piVar6;
    *(QObject **)(param_1 + 0x30) = pQVar5;
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
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100215233;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100215233:
  if (((*(long *)pCVar1 == 0) || (*(int *)(*(long *)pCVar1 + 4) == 0)) ||
     (*(long *)(param_1 + 0x30) == 0)) {
    uVar4 = FUN_100794960();
    pQVar5 = (QObject *)FUN_100795720(uVar4,param_2,param_3);
    piVar6 = (int *)0x0;
    if (pQVar5 != (QObject *)0x0) {
      piVar6 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar5);
    }
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
      *(int **)(param_1 + 0x28) = piVar6;
      *(QObject **)(param_1 + 0x30) = pQVar5;
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
  }
  QObject::property((char *)&local_58);
  uVar3 = 0xffffffff;
  if ((local_58.field0_0x0.field1_0x8.bitField0_30 & 0x3fffffff) != 0) {
    uVar3 = QVariant::toInt((bool *)&local_58);
  }
  *(undefined4 *)(param_1 + 0x40) = uVar3;
  QObject::property((char *)&local_68);
  CVar2 = (CAbstractTask)QVariant::toBool();
  param_1[0x44] = CVar2;
  QVariant::~QVariant(&local_68);
  pvVar8 = operator_new(0x18);
  CAppliance::getApplianceId();
  FUN_10007eec0(pvVar8,&local_70);
  CAbstractTask::setId((CTaskGenericId *)param_1);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002153a9;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1002153a9:
  QVariant::~QVariant(&local_58);
  return;
}

