
undefined8 FUN_100202d30(long param_1)

{
  CVmConfiguration *pCVar1;
  QString QVar2;
  void *pvVar3;
  undefined8 uVar4;
  long local_138;
  Data *local_130;
  QArrayData *local_128;
  CVmConfiguration local_120 [255];
  undefined1 local_21;
  
  CAbstractTask::setWaitForSubTaskCompletion();
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x50) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x50) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x58);
  }
  pCVar1 = (CVmConfiguration *)FUN_10018c2b0(uVar4);
  CVmConfiguration::CVmConfiguration(local_120,pCVar1);
  QVar2.field0_0x0 = (QTypedArrayData<unsigned_short> *)CVmConfiguration::getVmIdentification();
  local_128 = *(QArrayData **)(param_1 + 0x38);
  if (1 < *(int *)local_128 + 1U) {
    LOCK();
    *(int *)local_128 = *(int *)local_128 + 1;
    local_21 = *(int *)local_128 != 0;
    UNLOCK();
  }
  CVmIdentification::setVmName(QVar2);
  if (*(int *)local_128 != -1) {
    if (*(int *)local_128 != 0) {
      LOCK();
      *(int *)local_128 = *(int *)local_128 + -1;
      local_21 = *(int *)local_128 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100202ddf;
    }
    QArrayData::deallocate(local_128,2,8);
  }
LAB_100202ddf:
  pvVar3 = operator_new(600);
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x50) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x50) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x58);
  }
  local_130 = (Data *)PTR_shared_null_1021e15e8;
  FUN_100210650(pvVar3,local_120,uVar4,&local_130,0);
  if (*(int *)local_130 != -1) {
    if (*(int *)local_130 != 0) {
      LOCK();
      *(int *)local_130 = *(int *)local_130 + -1;
      local_21 = *(int *)local_130 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100202e56;
    }
    QListData::dispose(local_130);
  }
LAB_100202e56:
  QObject::connect(&local_138,pvVar3,"2taskFinished(PRL_RESULT)",param_1,
                   "1subTaskCompleted(PRL_RESULT)",0);
  if (local_138 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_138);
  CAbstractTask::execute();
  CVmConfiguration::~CVmConfiguration(local_120);
  return 0;
}

