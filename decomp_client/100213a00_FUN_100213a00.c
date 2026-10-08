
void FUN_100213a00(long *param_1,int param_2)

{
  QArrayData *local_38;
  QArrayData *local_30;
  
  if (param_2 == 0) {
    CAbstractTask::clearSubTaskList();
    CAbstractTask::appendSubTask((int)param_1);
    goto LAB_100213ad2;
  }
  CVmDevice::getSystemName();
  QString::toLatin1();
  FUN_100df99c0("","prl_client_app",0,"(!)Error: failed to convert hdd image %s.",
                local_30 + *(long *)(local_30 + 0x10));
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) goto LAB_100213a8e;
    }
    QArrayData::deallocate(local_30,1,8);
  }
LAB_100213a8e:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) goto LAB_100213ad2;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100213ad2:
  (**(code **)(*param_1 + 0xb0))(param_1,param_2);
  return;
}

