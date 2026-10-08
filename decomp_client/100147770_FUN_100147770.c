
void FUN_100147770(undefined8 param_1,long param_2)

{
  int iVar1;
  void *pvVar2;
  long local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  if (param_2 == 0) {
    return;
  }
  iVar1 = CVmDevice::getConnected();
  if (iVar1 != 1) {
    FUN_100146b90(&local_38,param_1);
    FUN_1001478b0(&local_38,param_2);
    if (local_38 != 0) {
      _PrlHandle_Free();
    }
    FUN_100147630(param_1);
    return;
  }
  pvVar2 = operator_new(0x30);
  CBaseNode::toString(SUB81(&local_30,0),(bool)((char)param_2 + '\x10'));
  FUN_10029f5e0(pvVar2,param_1,&local_30);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001477f5;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1001477f5:
  CAbstractTask::execute();
  return;
}

