
void FUN_10036fa80(long param_1)

{
  CTaskGenericId *pCVar1;
  undefined8 uVar2;
  CTaskGenericId local_28 [24];
  
  FUN_1002450f0(local_28,param_1 + 0x40);
  pCVar1 = (CTaskGenericId *)CTaskManager::instance();
  uVar2 = CTaskManager::getTaskById(pCVar1);
  FUN_10036f040(param_1,uVar2);
  CAbstractProgressOperation::setState(param_1,1);
  if (*(int *)(param_1 + 0x14) == 0) {
    CAbstractProgressOperation::setProgress((int)param_1);
  }
  CTaskGenericId::~CTaskGenericId(local_28);
  return;
}

