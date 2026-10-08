
bool FUN_100192f40(undefined4 param_1,undefined8 param_2)

{
  CTaskGenericId *pCVar1;
  long lVar2;
  QArrayData *local_50;
  QArrayData *local_48;
  CTaskGenericId local_40 [31];
  undefined1 local_21;
  
  pCVar1 = (CTaskGenericId *)CTaskManager::instance();
  FUN_100188480(&local_48,param_2);
  FUN_1001884b0(&local_50,param_2);
  FUN_1001910e0(local_40,&local_48,&local_50,param_1);
  lVar2 = CTaskManager::getTaskById(pCVar1);
  CTaskGenericId::~CTaskGenericId(local_40);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100192fcf;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100192fcf:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) goto LAB_100192fff;
      local_21 = 0;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100192fff:
  return lVar2 != 0;
}

