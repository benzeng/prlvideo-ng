
undefined8 FUN_100251670(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  void *pvVar4;
  Connection local_78 [12];
  undefined4 local_6c;
  Data *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  uVar2 = FUN_100152280();
  lVar3 = FUN_1001554a0(uVar2);
  if (lVar3 != 0) goto LAB_1002518ae;
  uVar2 = FUN_100152280();
  local_30 = (QArrayData *)QString::fromAscii_helper("localhost",9);
  local_38 = (QArrayData *)QString::fromAscii_helper("127.0.0.1",9);
  local_40 = (QArrayData *)PTR_shared_null_1021e1288;
  local_48 = (QArrayData *)PTR_shared_null_1021e1288;
  local_50 = (QArrayData *)PTR_shared_null_1021e1288;
  local_58 = (QArrayData *)PTR_shared_null_1021e1288;
  lVar3 = FUN_100152380(uVar2,&local_30,&local_38,&local_40,&local_48,&local_50,&local_58,1);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100251741;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100251741:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100251771;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100251771:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002517a1;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1002517a1:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002517d1;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1002517d1:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100251801;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100251801:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100251831;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100251831:
  FUN_100174630(lVar3,1);
  FUN_100173ff0(lVar3,0);
  FUN_1001747e0(lVar3,1);
  uVar2 = FUN_100152280();
  local_60 = (QArrayData *)QString::fromAscii_helper("localhost",9);
  FUN_1001551f0(uVar2,&local_60);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_21 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002518ae;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1002518ae:
  uVar2 = FUN_10016f500(lVar3);
  cVar1 = FUN_10061b500(uVar2,2);
  if (cVar1 != '\0') {
    CAbstractTask::setWaitForSubTaskCompletion();
    local_68 = (Data *)PTR_shared_null_1021e15e8;
    local_6c = 0;
    FUN_100129840(&local_68,&local_6c);
    pvVar4 = operator_new(0x40);
    FUN_1001fa280(pvVar4,lVar3,&local_68);
    QObject::connect(local_78,pvVar4,"2taskFinished(PRL_RESULT)",param_1,
                     "1onConnectLocalServerFinished(PRL_RESULT)",0);
    QMetaObject::Connection::~Connection(local_78);
    CAbstractTask::execute();
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        UNLOCK();
        if (*(int *)local_68 != 0) {
          return 0;
        }
        local_21 = 0;
      }
      QListData::dispose(local_68);
    }
  }
  return 0;
}

