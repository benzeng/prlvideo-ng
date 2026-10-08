
void FUN_10027ef30(long *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  QHash *pQVar5;
  int *local_28;
  undefined1 local_19;
  
  pQVar5 = (QHash *)CTaskManager::instance();
  puVar4 = PTR_shared_null_1021e15d0;
  CTaskManager::getTasksByType((uint)&local_28,pQVar5);
  iVar2 = local_28[3];
  iVar3 = local_28[2];
  if (*local_28 != -1) {
    if (*local_28 != 0) {
      LOCK();
      *local_28 = *local_28 + -1;
      local_19 = *local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10027ef93;
    }
    FUN_100034010(&local_28,local_28);
  }
LAB_10027ef93:
  if (*(int *)(puVar4 + 0x10) != -1) {
    if (*(int *)(puVar4 + 0x10) != 0) {
      LOCK();
      piVar1 = (int *)(puVar4 + 0x10);
      *piVar1 = *piVar1 + -1;
      local_19 = *piVar1 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10027efc2;
    }
    QHashData::free_helper((_func_void_Node_ptr *)puVar4);
  }
LAB_10027efc2:
  if (iVar2 - iVar3 < 2) {
    (**(code **)(*param_1 + 0xb0))(param_1,0);
  }
  return;
}

