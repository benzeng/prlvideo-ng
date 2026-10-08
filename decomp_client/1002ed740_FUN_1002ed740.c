
void FUN_1002ed740(long *param_1)

{
  int iVar1;
  long lVar2;
  QArrayData *local_48;
  QVariant local_40;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  iVar1 = CAbstractTask::getCurrentSubTask();
  if (1 < iVar1) {
    return;
  }
  FUN_100060bb0();
  lVar2 = FUN_100061a60(param_1 + 6);
  if (lVar2 != 0) {
    return;
  }
  local_48 = (QArrayData *)QString::fromAscii_helper("vmUuid",6);
  FUN_100036660(&local_40,param_1 + 6,&local_48);
  QVariant::toString();
  QString::toLatin1();
  FUN_100df99c0("[APP_RESUME]","prl_client_app",0,"Couldn\'t get VM to restore window: %s",
                local_28 + *(long *)(local_28 + 0x10));
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1002ed80b;
    }
    QArrayData::deallocate(local_28,1,8);
  }
LAB_1002ed80b:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1002ed83b;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1002ed83b:
  QVariant::~QVariant(&local_40);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_19 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1002ed874;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1002ed874:
  CAbstractTask::clearSubTaskList();
  (**(code **)(*param_1 + 0x98))(param_1,0x80015342);
  return;
}

