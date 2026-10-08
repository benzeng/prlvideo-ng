
undefined1 FUN_1001b7ee0(undefined8 param_1)

{
  code *pcVar1;
  char cVar2;
  undefined1 uVar3;
  CTaskGenericId *pCVar4;
  undefined1 local_98 [48];
  undefined1 local_68 [16];
  CTaskGenericId local_58 [24];
  QString local_40;
  undefined *local_38 [2];
  QArrayData *local_28;
  _func_void_Node_ptr *local_20;
  undefined1 local_11;
  
  FUN_100188480(&local_40,param_1);
  COsInstallationInfo::COsInstallationInfo((COsInstallationInfo *)local_38,&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_11 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1001b7f3a;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1001b7f3a:
  cVar2 = COsInstallationInfo::load();
  if (cVar2 == '\0') {
    uVar3 = 0;
  }
  else {
    cVar2 = COsInstallationInfo::isNeedToDownloadOsImage();
    if (cVar2 == '\0') {
      uVar3 = 0;
    }
    else {
      pCVar4 = (CTaskGenericId *)CTaskManager::instance();
      COsInstallationInfo::osImageDownloadInfo();
      FUN_1001b8b80(local_58,local_68,1);
      uVar3 = CTaskManager::isTaskRunning(pCVar4);
      CTaskGenericId::~CTaskGenericId(local_58);
      FUN_1001b8c60(local_98);
    }
  }
  local_38[0] = PTR_vtable_1021e17e0 + 0x10;
  if (*(int *)(local_20 + 0x10) != -1) {
    if (*(int *)(local_20 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_20 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_11 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1001b8071;
    }
    QHashData::free_helper(local_20);
  }
LAB_1001b8071:
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_11 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1001b80a1;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1001b80a1:
  QObject::~QObject((QObject *)local_38);
  return uVar3;
}

