
undefined8 FUN_1002d43c0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  CVmConfiguration *pCVar3;
  void *pvVar4;
  undefined4 *puVar5;
  long lVar6;
  long lVar7;
  Connection local_160 [8];
  undefined4 local_158;
  undefined4 local_154;
  Data *local_150;
  Data *local_148;
  CVmConfiguration local_140 [248];
  undefined8 local_48;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined1 local_21;
  
  uVar1 = FUN_100152280();
  lVar2 = FUN_1001548f0(uVar1,param_1 + 0x58);
  if (lVar2 == 0) {
    FUN_100df99c0("","prl_client_app",0,"VM instance is 0");
    return 0x80000009;
  }
  CAbstractTask::setWaitForSubTaskCompletion();
  pCVar3 = (CVmConfiguration *)FUN_10018c2b0(lVar2);
  CVmConfiguration::CVmConfiguration(local_140,pCVar3);
  FUN_1001bbd50(local_140);
  local_150 = (Data *)PTR_shared_null_1021e15e8;
  local_154 = 4;
  FUN_100129840(&local_150,&local_154);
  local_158 = 5;
  FUN_100129840(&local_150,&local_158);
  local_148 = local_150;
  if (*(int *)local_150 != -1) {
    if (*(int *)local_150 == 0) {
      QListData::detach((int)&local_148);
      lVar6 = (long)*(int *)(local_148 + 8);
      if ((local_150 + (long)*(int *)(local_150 + 8) * 8 != local_148 + lVar6 * 8) &&
         (lVar7 = *(int *)(local_148 + 0xc) - lVar6,
         lVar7 != 0 && lVar6 <= *(int *)(local_148 + 0xc))) {
        _memcpy(local_148 + lVar6 * 8 + 0x10,local_150 + (long)*(int *)(local_150 + 8) * 8 + 0x10,
                lVar7 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + 1;
      local_21 = *(int *)local_150 != 0;
      UNLOCK();
    }
  }
  if (*(int *)local_150 != -1) {
    if (*(int *)local_150 != 0) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + -1;
      local_21 = *(int *)local_150 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002d452b;
    }
    QListData::dispose(local_150);
  }
LAB_1002d452b:
  pvVar4 = operator_new(600);
  uVar1 = 0;
  if ((*(long *)(param_1 + 0x38) != 0) && (uVar1 = 0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0))
  {
    uVar1 = *(undefined8 *)(param_1 + 0x40);
  }
  FUN_100210650(pvVar4,local_140,lVar2,&local_148,uVar1);
  local_38 = PTR_taskFinished_1021e1300;
  local_30 = 0;
  local_48 = 0xb1;
  local_40 = 0;
  puVar5 = operator_new(0x20);
  *puVar5 = 1;
  *(code **)(puVar5 + 2) = FUN_1002d5450;
  *(undefined8 *)(puVar5 + 6) = 0;
  *(undefined8 *)(puVar5 + 4) = 0xb1;
  QObject::connectImpl
            (local_160,pvVar4,&local_38,param_1,&local_48,puVar5,0,0,PTR_staticMetaObject_1021e1308)
  ;
  QMetaObject::Connection::~Connection(local_160);
  CAbstractTask::execute();
  if (*(int *)local_148 != -1) {
    if (*(int *)local_148 != 0) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + -1;
      local_21 = *(int *)local_148 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002d4631;
    }
    QListData::dispose(local_148);
  }
LAB_1002d4631:
  CVmConfiguration::~CVmConfiguration(local_140);
  return 0;
}

