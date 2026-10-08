
void FUN_1003e4650(long param_1,undefined1 param_2)

{
  int *piVar1;
  QObject *pQVar2;
  char cVar3;
  CTaskGenericId *pCVar4;
  QObject *pQVar5;
  int *piVar6;
  void *pvVar7;
  long local_c0;
  int *local_b8;
  QObject *pQStack_b0;
  int *local_a8;
  int *local_a0;
  undefined4 local_98;
  undefined1 local_94;
  undefined1 local_90 [8];
  int *local_88;
  QObject *pQStack_80;
  undefined1 local_78 [8];
  QString QStack_70;
  undefined4 local_68;
  undefined1 local_64;
  undefined *local_60 [2];
  QArrayData *local_50;
  CTaskGenericId local_48 [24];
  QString local_30;
  undefined1 local_21;
  
  CVmConfiguration::getVmIdentification();
  CVmIdentification::getVmUuid();
  pCVar4 = (CTaskGenericId *)CTaskManager::instance();
  local_50 = (QArrayData *)PTR_shared_null_1021e1288;
  FUN_100291a00(local_48,&local_50,&local_30,1);
  cVar3 = CTaskManager::isTaskRunning(pCVar4);
  CTaskGenericId::~CTaskGenericId(local_48);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003e46eb;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1003e46eb:
  if (cVar3 == '\0') {
    local_88 = (int *)0x0;
    pQStack_80 = (QObject *)0x0;
    register0x00001208 = (int)PTR_shared_null_1021e1288;
    local_78 = (undefined1  [8])PTR_shared_null_1021e1288;
    register0x0000120c = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
    local_60[0] = PTR_shared_null_1021e15e8;
    local_64 = param_2;
    QString::operator=((QString *)(local_78 + 8),&local_30);
    local_68 = 1;
    pQVar5 = (QObject *)FUN_1003b0b20(*(undefined8 *)(param_1 + 0x18));
    piVar6 = (int *)0x0;
    if (pQVar5 != (QObject *)0x0) {
      piVar6 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar5);
    }
    piVar1 = local_88;
    pQVar2 = pQStack_80;
    if (local_88 != piVar6) {
      if (piVar6 != (int *)0x0) {
        LOCK();
        *piVar6 = *piVar6 + 1;
        local_21 = *piVar6 != 0;
        UNLOCK();
      }
      piVar1 = piVar6;
      pQVar2 = pQVar5;
      if (local_88 != (int *)0x0) {
        LOCK();
        *local_88 = *local_88 + -1;
        local_21 = *local_88 != 0;
        UNLOCK();
        if ((!(bool)local_21) && (local_88 != (int *)0x0)) {
          operator_delete(local_88);
        }
      }
    }
    pQStack_80 = pQVar2;
    local_88 = piVar1;
    if (piVar6 != (int *)0x0) {
      LOCK();
      *piVar6 = *piVar6 + -1;
      local_21 = *piVar6 != 0;
      UNLOCK();
      if (!(bool)local_21) {
        operator_delete(piVar6);
      }
    }
    pvVar7 = operator_new(0x68);
    local_b8 = local_88;
    pQStack_b0 = pQStack_80;
    if (local_88 != (int *)0x0) {
      LOCK();
      *local_88 = *local_88 + 1;
      local_21 = *local_88 != 0;
      UNLOCK();
    }
    local_a8 = (int *)local_78;
    if (1 < *(int *)local_78 + 1U) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + 1;
      local_21 = *(int *)local_78 != 0;
      UNLOCK();
    }
    local_a0 = (int *)QStack_70.field0_0x0;
    if (1 < *(int *)QStack_70.field0_0x0 + 1U) {
      LOCK();
      *(int *)QStack_70.field0_0x0 = *(int *)QStack_70.field0_0x0 + 1;
      local_21 = *(int *)QStack_70.field0_0x0 != 0;
      UNLOCK();
    }
    local_94 = local_64;
    local_98 = local_68;
    FUN_100036740(local_90,local_60);
    FUN_100291650(pvVar7,&local_b8);
    FUN_100291b30(&local_b8);
    CAbstractTask::execute();
    QObject::connect(&local_c0,pvVar7,"2taskFinished(PRL_RESULT)",param_1,
                     "1onChangeLockStateTaskFinished(PRL_RESULT)",0);
    if (local_c0 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_c0);
    FUN_100291b30(&local_88);
  }
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_30.field0_0x0 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
  return;
}

