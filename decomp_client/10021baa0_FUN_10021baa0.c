
void FUN_10021baa0(long *param_1)

{
  CTaskGenericId *pCVar1;
  long *plVar2;
  long lVar3;
  QArrayData *local_48;
  CTaskGenericId local_40 [31];
  undefined1 local_21;
  
  if (((param_1[3] == 0) || (*(int *)(param_1[3] + 4) == 0)) || (param_1[4] == 0))
  goto LAB_10021bb64;
  pCVar1 = (CTaskGenericId *)CTaskManager::instance();
  lVar3 = 0;
  if ((param_1[3] != 0) && (lVar3 = 0, *(int *)(param_1[3] + 4) != 0)) {
    lVar3 = param_1[4];
  }
  FUN_100188480(&local_48,lVar3);
  FUN_100191030(local_40,&local_48);
  plVar2 = (long *)CTaskManager::getTaskById(pCVar1);
  CTaskGenericId::~CTaskGenericId(local_40);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10021bb51;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10021bb51:
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x78))(plVar2,0x80000275);
  }
LAB_10021bb64:
  (**(code **)(*param_1 + 0xb0))(param_1,0x80000275);
  return;
}

