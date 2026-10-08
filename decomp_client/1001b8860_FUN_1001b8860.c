
undefined1 FUN_1001b8860(undefined8 param_1)

{
  code *pcVar1;
  char cVar2;
  CTaskGenericId *pCVar3;
  long *plVar4;
  undefined1 uVar5;
  undefined1 local_a0 [48];
  undefined1 local_70 [16];
  CTaskGenericId local_60 [24];
  QString local_48;
  undefined *local_40 [2];
  QArrayData *local_30;
  _func_void_Node_ptr *local_28;
  undefined1 local_19;
  
  FUN_100188480(&local_48,param_1);
  COsInstallationInfo::COsInstallationInfo((COsInstallationInfo *)local_40,&local_48);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_19 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1001b88bc;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_1001b88bc:
  cVar2 = COsInstallationInfo::load();
  if (cVar2 == '\0') {
    uVar5 = 0;
  }
  else {
    cVar2 = COsInstallationInfo::isNeedToDownloadOsImage();
    if (cVar2 == '\0') {
      uVar5 = 0;
    }
    else {
      pCVar3 = (CTaskGenericId *)CTaskManager::instance();
      COsInstallationInfo::osImageDownloadInfo();
      FUN_1001b8b80(local_60,local_70,1);
      plVar4 = (long *)CTaskManager::getTaskById(pCVar3);
      CTaskGenericId::~CTaskGenericId(local_60);
      FUN_1001b8c60(local_a0);
      if (plVar4 == (long *)0x0) {
        uVar5 = 0;
      }
      else {
        cVar2 = CAbstractTask::isFinished();
        if (cVar2 == '\0') {
          uVar5 = 1;
          (**(code **)(*plVar4 + 0x78))(plVar4,0x80000275);
        }
        else {
          uVar5 = 0;
        }
      }
    }
  }
  local_40[0] = PTR_vtable_1021e17e0 + 0x10;
  if (*(int *)(local_28 + 0x10) != -1) {
    if (*(int *)(local_28 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_28 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_19 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1001b8996;
    }
    QHashData::free_helper(local_28);
  }
LAB_1001b8996:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1001b89c6;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1001b89c6:
  QObject::~QObject((QObject *)local_40);
  return uVar5;
}

