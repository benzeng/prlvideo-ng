
void FUN_10036e990(QString *param_1)

{
  char cVar1;
  undefined8 uVar2;
  CTaskGenericId *pCVar3;
  Data_conflict local_90;
  undefined4 local_88;
  QArrayData *local_80;
  int *local_78 [4];
  QVariant local_58 [2];
  CTaskGenericId local_40 [24];
  QArrayData *local_28;
  undefined1 local_19;
  
  CAbstractProgressOperation::setProgress((int)param_1);
  FUN_10036ec60(&local_28,param_1);
  CAbstractProgressOperation::setDescription(param_1);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10036e9f5;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_10036e9f5:
  FUN_1002450f0(local_40,param_1 + 8);
  local_80 = (QArrayData *)QString::fromAscii_helper("1onUpgradeStarted()",0x13);
  local_88 = 0x80000000;
  local_90.field7 = 0;
  FUN_100a1c600(local_78,param_1,&local_80,&local_90);
  QVariant::~QVariant((QVariant *)&local_90);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_19 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10036ea7c;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_10036ea7c:
  uVar2 = CTaskManager::instance();
  CTaskManager::addTaskWatcher(uVar2,local_78,local_40,0x22);
  pCVar3 = (CTaskGenericId *)CTaskManager::instance();
  cVar1 = CTaskManager::isTaskRunning(pCVar3);
  if (cVar1 != '\0') {
    pCVar3 = (CTaskGenericId *)CTaskManager::instance();
    uVar2 = CTaskManager::getTaskById(pCVar3);
    FUN_10036f040(param_1,uVar2);
    CAbstractProgressOperation::setState(param_1,1);
  }
  QVariant::~QVariant(local_58);
  if (local_78[0] != (int *)0x0) {
    LOCK();
    *local_78[0] = *local_78[0] + -1;
    local_19 = *local_78[0] != 0;
    UNLOCK();
    if ((!(bool)local_19) && (local_78[0] != (int *)0x0)) {
      operator_delete(local_78[0]);
    }
  }
  CTaskGenericId::~CTaskGenericId(local_40);
  return;
}

