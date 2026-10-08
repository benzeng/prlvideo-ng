
void FUN_100675e20(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  char cVar2;
  CTaskGenericId *pCVar3;
  undefined *local_d0;
  undefined1 local_c8 [88];
  undefined1 local_70 [40];
  undefined **local_48 [3];
  undefined1 local_29;
  
  pCVar3 = (CTaskGenericId *)CTaskManager::instance();
  CTaskGenericId::CTaskGenericId((CTaskGenericId *)local_48,0x53);
  local_48[0] = &PTR_FUN_10226c710;
  cVar2 = CTaskManager::isTaskRunning(pCVar3);
  CTaskGenericId::~CTaskGenericId((CTaskGenericId *)local_48);
  if (cVar2 != '\0') {
    return;
  }
  *(undefined4 *)(param_1 + 0x78) = param_2;
  puVar1 = PTR_shared_null_1021e1288;
  local_d0 = PTR_shared_null_1021e1288;
  FUN_1002f6080(local_c8,&local_d0);
  FUN_100675fb0(param_1,local_c8);
  FUN_100252c80(local_70);
  FUN_100252e70(local_c8);
  if (*(int *)puVar1 != -1) {
    if (*(int *)puVar1 != 0) {
      LOCK();
      *(int *)puVar1 = *(int *)puVar1 + -1;
      local_29 = *(int *)puVar1 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100675ef2;
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
  }
LAB_100675ef2:
  CAbstractWizardModel::restart();
  return;
}

