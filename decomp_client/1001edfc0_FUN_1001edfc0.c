
void FUN_1001edfc0(long param_1)

{
  CTaskGenericId *pCVar1;
  undefined8 uVar2;
  QString *pQVar3;
  QArrayData *local_50;
  CTaskGenericId local_48 [31];
  undefined1 local_29;
  
  FUN_1001b8b80(local_48,param_1 + 0x58,1);
  pCVar1 = (CTaskGenericId *)CTaskManager::instance();
  uVar2 = CTaskManager::getTaskById(pCVar1);
  FUN_1001edd70(param_1,uVar2);
  CAbstractProgressOperation::setState(*(undefined8 *)(param_1 + 0x10),1);
  pQVar3 = *(QString **)(param_1 + 0x10);
  if (*(int *)((long)&pQVar3[2].field0_0x0 + 4) == 0) {
    CAbstractProgressOperation::setProgress((int)pQVar3);
    pQVar3 = *(QString **)(param_1 + 0x10);
  }
  FUN_1001ecaa0(&local_50,param_1);
  CAbstractProgressOperation::setDescription(pQVar3);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001ee07b;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1001ee07b:
  CTaskGenericId::~CTaskGenericId(local_48);
  return;
}

