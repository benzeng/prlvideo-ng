
bool FUN_1001b8440(undefined8 param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
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
      if ((bool)local_19) goto LAB_1001b8499;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_1001b8499:
  cVar2 = COsInstallationInfo::load();
  bVar4 = true;
  if (cVar2 != '\0') {
    cVar2 = COsInstallationInfo::isUnattanded();
    if (cVar2 == '\0') {
      iVar3 = FUN_10018a9d0(param_1);
      bVar4 = iVar3 != 0x30000001;
    }
    else {
      bVar4 = false;
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
      if ((bool)local_19) goto LAB_1001b8507;
    }
    QHashData::free_helper(local_28);
  }
LAB_1001b8507:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1001b8537;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1001b8537:
  QObject::~QObject((QObject *)local_40);
  return bVar4;
}

