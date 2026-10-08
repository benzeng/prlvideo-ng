
undefined1 FUN_1001b7c80(undefined8 param_1)

{
  code *pcVar1;
  char cVar2;
  undefined1 uVar3;
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
      if ((bool)local_11) goto LAB_1001b7cd7;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1001b7cd7:
  cVar2 = COsInstallationInfo::load();
  if (cVar2 == '\0') {
    uVar3 = 0;
  }
  else {
    uVar3 = COsInstallationInfo::isNeedToDownloadOsImage();
  }
  local_38[0] = PTR_vtable_1021e17e0 + 0x10;
  if (*(int *)(local_20 + 0x10) != -1) {
    if (*(int *)(local_20 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_20 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_11 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1001b7db7;
    }
    QHashData::free_helper(local_20);
  }
LAB_1001b7db7:
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_11 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1001b7de7;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1001b7de7:
  QObject::~QObject((QObject *)local_38);
  return uVar3;
}

