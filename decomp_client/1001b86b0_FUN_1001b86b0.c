
undefined1 FUN_1001b86b0(long param_1,long *param_2)

{
  char cVar1;
  CTaskGenericId *pCVar2;
  long lVar3;
  QString local_58;
  QString local_50;
  CTaskGenericId local_48 [31];
  undefined1 local_29;
  
  if (param_1 == 0) {
    return 0;
  }
  pCVar2 = (CTaskGenericId *)CTaskManager::instance();
  CTaskGenericId::CTaskGenericId(local_48,0x58);
  lVar3 = CTaskManager::getTaskById(pCVar2);
  CTaskGenericId::~CTaskGenericId(local_48);
  if (lVar3 == 0) {
    return 0;
  }
  local_50.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(lVar3 + 0x68);
  if (1 < *(int *)local_50.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + 1;
    local_29 = *(int *)local_50.field0_0x0 != 0;
    UNLOCK();
  }
  FUN_100188480(&local_58,param_1);
  cVar1 = operator==(&local_50,&local_58);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_29 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001b876d;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_1001b876d:
  if (*(int *)local_50.field0_0x0 == -1) {
LAB_1001b878a:
    if (cVar1 == '\0') {
      return 0;
    }
  }
  else {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_50.field0_0x0 != 0) goto LAB_1001b878a;
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
    if (cVar1 == '\0') {
      return 0;
    }
  }
  if (param_2 != (long *)0x0) {
    *param_2 = lVar3;
  }
  return 1;
}

