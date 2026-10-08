
undefined8 FUN_1002ac310(undefined8 param_1)

{
  CTaskGenericId *pCVar1;
  CSlotInfo *pCVar2;
  QArrayData *local_88;
  Data_conflict local_80;
  undefined4 local_78;
  QArrayData *local_70;
  int *local_68 [4];
  QVariant local_48 [2];
  undefined1 local_29;
  
  CAbstractTask::setWaitForSubTaskCompletion();
  local_70 = (QArrayData *)
             QString::fromAscii_helper("1onProxyDetectionFinished(PRL_RESULT, CAbstractTask*)",0x35)
  ;
  local_78 = 0x80000000;
  local_80.field7 = 0;
  FUN_100a1c600(local_68,param_1,&local_70,&local_80);
  QVariant::~QVariant((QVariant *)&local_80);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_29 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002ac398;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1002ac398:
  pCVar1 = (CTaskGenericId *)CTaskManager::instance();
  pCVar2 = operator_new(0x18);
  local_88 = (QArrayData *)QString::fromAscii_helper("https://ka.parallels.com",0x18);
  FUN_10019ce20(pCVar2,&local_88,1);
  CTaskManager::runTask(pCVar1,pCVar2,SUB81(local_68,0));
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_29 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002ac41d;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1002ac41d:
  QVariant::~QVariant(local_48);
  if (local_68[0] != (int *)0x0) {
    LOCK();
    *local_68[0] = *local_68[0] + -1;
    local_29 = *local_68[0] != 0;
    UNLOCK();
    if ((!(bool)local_29) && (local_68[0] != (int *)0x0)) {
      operator_delete(local_68[0]);
    }
  }
  return 0;
}

