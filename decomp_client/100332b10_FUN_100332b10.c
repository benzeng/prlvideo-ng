
void FUN_100332b10(long param_1)

{
  long *plVar1;
  int iVar2;
  CTaskGenericId *pCVar3;
  undefined8 uVar4;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  CTaskGenericId local_40 [31];
  undefined1 local_21;
  
  pCVar3 = (CTaskGenericId *)CTaskManager::instance();
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x18);
  }
  uVar4 = FUN_100319390(uVar4);
  FUN_100188480(&local_48,uVar4);
  FUN_100033dd0(local_40,&local_48);
  uVar4 = CTaskManager::getTaskById(pCVar3);
  CTaskGenericId::~CTaskGenericId(local_40);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100332ba7;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100332ba7:
  iVar2 = FUN_1002308e0(uVar4);
  if (iVar2 != 3) {
    return;
  }
  plVar1 = *(long **)(*(long *)(param_1 + 0x20) + 0x48);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x150))();
  }
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x18);
  }
  uVar4 = FUN_100319390(uVar4);
  FUN_10018c650(&local_58,uVar4);
  FUN_10082daa0(param_1,&local_58);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100332c34;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100332c34:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_58,2,8);
  }
  return;
}

