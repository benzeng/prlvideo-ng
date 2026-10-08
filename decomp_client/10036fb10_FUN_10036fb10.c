
void FUN_10036fb10(QString *param_1,int param_2)

{
  CTaskGenericId *pCVar1;
  long lVar2;
  QArrayData *local_50;
  CTaskGenericId local_48 [31];
  undefined1 local_29;
  
  CAbstractProgressOperation::setState(param_1,1);
  FUN_1002450f0(local_48,param_1 + 8);
  pCVar1 = (CTaskGenericId *)CTaskManager::instance();
  lVar2 = CTaskManager::getTaskById(pCVar1);
  if (lVar2 == 0) goto LAB_10036fbc4;
  FUN_1002450e0(lVar2);
  CAbstractProgressOperation::setProgress((int)param_1);
  FUN_10036ec60(&local_50,param_1);
  CAbstractProgressOperation::setDescription(param_1);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10036fbb2;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10036fbb2:
  if (*(int *)&param_1[0xb].field0_0x0 != param_2) {
    FUN_100833870(param_1);
  }
  *(int *)&param_1[0xb].field0_0x0 = param_2;
LAB_10036fbc4:
  CTaskGenericId::~CTaskGenericId(local_48);
  return;
}

