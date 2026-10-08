
void FUN_10018b9a0(long param_1,int param_2)

{
  code *pcVar1;
  char cVar2;
  long lVar3;
  QString local_58;
  undefined *local_50 [2];
  QArrayData *local_40;
  _func_void_Node_ptr *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  CVmConfiguration::getVmIdentification();
  CVmIdentification::getVmUuid();
  lVar3 = FUN_10025b4b0(&local_30);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10018ba09;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10018ba09:
  if (lVar3 != 0) {
    return;
  }
  CVmConfiguration::getVmIdentification();
  CVmIdentification::getVmUuid();
  COsInstallationInfo::COsInstallationInfo((COsInstallationInfo *)local_50,&local_58);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_21 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10018ba69;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_10018ba69:
  cVar2 = COsInstallationInfo::load();
  if (cVar2 != '\0') {
    if ((*(int *)(param_1 + 100) == 0) &&
       ((cVar2 = COsInstallationInfo::isNeedToDownloadOsImage(), cVar2 != '\0' ||
        ((param_2 + 0xcffffffcU < 0xd && ((0x1025U >> (param_2 + 0xcffffffcU & 0x1f) & 1) != 0))))))
    {
      FUN_10018bcf0(param_1,1);
    }
    else {
      COsInstallationInfo::remove();
    }
  }
  local_50[0] = PTR_vtable_1021e17e0 + 0x10;
  if (*(int *)(local_38 + 0x10) != -1) {
    if (*(int *)(local_38 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_38 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_21 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10018baf8;
    }
    QHashData::free_helper(local_38);
  }
LAB_10018baf8:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10018bb28;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10018bb28:
  QObject::~QObject((QObject *)local_50);
  return;
}

