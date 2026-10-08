
void FUN_1003485c0(long param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  CTaskGenericId *pCVar2;
  CVmConfiguration *pCVar3;
  undefined8 uVar4;
  void *pvVar5;
  undefined4 local_150;
  undefined4 local_14c;
  Data *local_148;
  CVmConfiguration local_140 [248];
  QArrayData *local_48;
  CTaskGenericId local_40 [31];
  undefined1 local_21;
  
  if (param_3 != 1) {
    return;
  }
  if (*(long *)(param_1 + 0x18) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x18) + 4) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x20) == 0) {
    return;
  }
  pCVar2 = (CTaskGenericId *)CTaskManager::instance();
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100188480(&local_48,uVar4);
  FUN_1002126f0(local_40,&local_48);
  cVar1 = CTaskManager::isTaskRunning(pCVar2);
  CTaskGenericId::~CTaskGenericId(local_40);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10034867d;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10034867d:
  if (cVar1 != '\0') {
    return;
  }
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  pCVar3 = (CVmConfiguration *)FUN_10018c2b0(uVar4);
  CVmConfiguration::CVmConfiguration(local_140,pCVar3);
  local_148 = (Data *)PTR_shared_null_1021e15e8;
  local_14c = 4;
  FUN_100129840(&local_148,&local_14c);
  local_150 = 5;
  FUN_100129840(&local_148,&local_150);
  CVmConfiguration::getVmSettings();
  uVar4 = CVmSettings::getVmRuntimeOptions();
  CVmRunTimeOptions::setOptimizePowerConsumptionMode(uVar4,0);
  pvVar5 = operator_new(600);
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100210650(pvVar5,local_140,uVar4,&local_148,0);
  CAbstractTask::execute();
  if (*(int *)local_148 != -1) {
    if (*(int *)local_148 != 0) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + -1;
      local_21 = *(int *)local_148 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100348788;
    }
    QListData::dispose(local_148);
  }
LAB_100348788:
  CVmConfiguration::~CVmConfiguration(local_140);
  return;
}

