
void FUN_1005aff70(long param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  undefined8 uVar4;
  long local_40;
  QArrayData *local_38;
  int *local_30;
  undefined1 local_21;
  
  CTaskManager::instance();
  CTaskManager::getRunningTasks((uint)&local_30);
  iVar1 = local_30[3];
  iVar2 = local_30[2];
  if (*local_30 != -1) {
    if (*local_30 != 0) {
      LOCK();
      *local_30 = *local_30 + -1;
      local_21 = *local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005affc7;
    }
    FUN_100034010(&local_30,local_30);
  }
LAB_1005affc7:
  if (iVar1 != iVar2) {
    return;
  }
  pvVar3 = operator_new(0x38);
  uVar4 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
  uVar4 = FUN_1005b86c0(uVar4);
  local_38 = (QArrayData *)
             QString::fromAscii_helper
                       ("http://download.parallels.com/desktop/v12/appliances.xml",0x38);
  FUN_1002754d0(pvVar3,uVar4,&local_38);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005b0045;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1005b0045:
  QObject::connect(&local_40,pvVar3,"2taskFinished(PRL_RESULT)",param_1,
                   "1onDownloadAppliancesDescriptorFinished(PRL_RESULT)",0);
  if (local_40 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_40);
  CAbstractTask::execute();
  return;
}

