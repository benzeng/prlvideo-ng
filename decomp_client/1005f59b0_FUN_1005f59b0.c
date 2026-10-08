
void FUN_1005f59b0(long param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  QHash *pQVar5;
  undefined8 uVar6;
  int *local_30;
  undefined1 local_21;
  
  pQVar5 = (QHash *)CTaskManager::instance();
  puVar4 = PTR_shared_null_1021e15d0;
  CTaskManager::getTasksByType((uint)&local_30,pQVar5);
  iVar2 = local_30[3];
  iVar3 = local_30[2];
  if (*local_30 != -1) {
    if (*local_30 != 0) {
      LOCK();
      *local_30 = *local_30 + -1;
      local_21 = *local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005f5a16;
    }
    FUN_100034010(&local_30,local_30);
  }
LAB_1005f5a16:
  if (*(int *)(puVar4 + 0x10) != -1) {
    if (*(int *)(puVar4 + 0x10) != 0) {
      LOCK();
      piVar1 = (int *)(puVar4 + 0x10);
      *piVar1 = *piVar1 + -1;
      local_21 = *piVar1 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005f5a45;
    }
    QHashData::free_helper((_func_void_Node_ptr *)puVar4);
  }
LAB_1005f5a45:
  if (iVar2 == iVar3) {
    uVar6 = FUN_1005ec980(*(long *)(param_1 + 0x10) + 0x38);
    FUN_1005af890(uVar6);
  }
  return;
}

