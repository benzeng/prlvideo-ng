
byte FUN_1006aec80(undefined8 param_1,byte param_2)

{
  char cVar1;
  byte bVar2;
  CTaskGenericId *pCVar3;
  QArrayData *local_48;
  QArrayData *local_40;
  CTaskGenericId local_38 [31];
  undefined1 local_19;
  
  FUN_100188480(&local_40,param_1);
  FUN_1001884b0(&local_48,param_1);
  FUN_100276dd0(local_38,&local_40,&local_48,param_2 ^ 1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_19 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1006aecef;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1006aecef:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1006aed1f;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1006aed1f:
  pCVar3 = (CTaskGenericId *)CTaskManager::instance();
  cVar1 = CTaskManager::isTaskRunning(pCVar3);
  if (cVar1 == '\0') {
    bVar2 = FUN_10018ed10(param_1);
    bVar2 = bVar2 ^ 1;
  }
  else {
    bVar2 = 0;
  }
  CTaskGenericId::~CTaskGenericId(local_38);
  return bVar2;
}

