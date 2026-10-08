
void FUN_1002127b0(CAbstractTask *param_1,QObject *param_2,QObject *param_3,CAbstractTask param_4,
                  QList *param_5)

{
  CAbstractTask *pCVar1;
  CTaskGenericId *pCVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  QObject *pQVar5;
  int *piVar6;
  int *piVar7;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  pCVar2 = operator_new(0x18);
  FUN_100188480(&local_40,param_2);
  CVmDevice::getUserFriendlyName();
  FUN_100213bb0(pCVar2,&local_40,&local_48);
  CAbstractTask::CAbstractTask(param_1,param_5,pCVar2);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100212859;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100212859:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10021288d;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10021288d:
  *(undefined ***)param_1 = &PTR_FUN_102200ed0;
  uVar3 = QtSharedPointer::ExternalRefCountData::getAndRef(param_3);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  *(QObject **)(param_1 + 0x20) = param_3;
  uVar3 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  *(QObject **)(param_1 + 0x30) = param_2;
  pCVar1 = param_1 + 0x38;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  CVmHardDisk::CVmHardDisk((CVmHardDisk *)(param_1 + 0x48));
  param_1[0x1a0] = param_4;
  uVar4 = FUN_100152280();
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x28) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  FUN_1001884b0(&local_50,uVar3);
  pQVar5 = (QObject *)FUN_100152a20(uVar4,&local_50);
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
    *(int **)(param_1 + 0x38) = piVar6;
    *(QObject **)(param_1 + 0x40) = pQVar5;
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
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (*(int *)local_50 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_50,2,8);
  }
  return;
}

