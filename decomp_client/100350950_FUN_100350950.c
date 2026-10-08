
void FUN_100350950(long param_1,undefined4 param_2)

{
  CVmConfiguration *pCVar1;
  void *pvVar2;
  long local_130;
  undefined4 local_128;
  undefined4 local_124;
  Data *local_120;
  CVmConfiguration local_118 [255];
  undefined1 local_19;
  
  *(undefined4 *)(param_1 + 0x50) = param_2;
  *(undefined4 *)(param_1 + 0x2c) = 1;
  pCVar1 = (CVmConfiguration *)FUN_10018c2b0(*(undefined8 *)(param_1 + 0x10));
  CVmConfiguration::CVmConfiguration(local_118,pCVar1);
  local_120 = (Data *)PTR_shared_null_1021e15e8;
  local_124 = 4;
  FUN_100129840(&local_120,&local_124);
  local_128 = 5;
  FUN_100129840(&local_120,&local_128);
  FUN_10034fc90(param_1,local_118);
  pvVar2 = operator_new(600);
  FUN_100210650(pvVar2,local_118,*(undefined8 *)(param_1 + 0x10),&local_120,0);
  QObject::connect(&local_130,pvVar2,"2taskFinished(PRL_RESULT)",param_1,
                   "1onConfigApplyDisable(PRL_RESULT)",0);
  if (local_130 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_130);
  CAbstractTask::execute();
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      local_19 = *(int *)local_120 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100350a7d;
    }
    QListData::dispose(local_120);
  }
LAB_100350a7d:
  CVmConfiguration::~CVmConfiguration(local_118);
  return;
}

