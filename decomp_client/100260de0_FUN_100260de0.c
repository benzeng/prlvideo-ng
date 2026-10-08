
undefined8 FUN_100260de0(long *param_1)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  undefined *puVar7;
  QHash *pQVar8;
  int *local_60;
  int *local_58;
  long *local_50;
  long *local_48;
  int local_40;
  _func_void_Node_ptr *local_38;
  int *local_30;
  undefined1 local_21;
  
  pQVar8 = (QHash *)CTaskManager::instance();
  puVar7 = PTR_shared_null_1021e15d0;
  local_38 = (_func_void_Node_ptr *)PTR_shared_null_1021e15d0;
  CTaskManager::getTasksByType((uint)&local_30,pQVar8);
  iVar3 = local_30[3];
  iVar4 = local_30[2];
  if (*local_30 != -1) {
    if (*local_30 != 0) {
      LOCK();
      *local_30 = *local_30 + -1;
      local_21 = *local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100260e45;
    }
    FUN_100034010(&local_30,local_30);
  }
LAB_100260e45:
  if (*(int *)(local_38 + 0x10) != -1) {
    if (*(int *)(local_38 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_38 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_21 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100260e74;
    }
    QHashData::free_helper(local_38);
  }
LAB_100260e74:
  if (iVar3 - iVar4 < 2) {
    return 0;
  }
  pQVar8 = (QHash *)CTaskManager::instance();
  CTaskManager::getTasksByType((uint)&local_60,pQVar8);
  FUN_100033e80(&local_58,&local_60);
  local_50 = (long *)(local_58 + (long)local_58[2] * 2 + 4);
  local_48 = (long *)(local_58 + (long)local_58[3] * 2 + 4);
  local_40 = 1;
  if (*local_60 != -1) {
    if (*local_60 != 0) {
      LOCK();
      *local_60 = *local_60 + -1;
      local_21 = *local_60 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100260ef7;
    }
    FUN_100034010(&local_60,local_60);
  }
LAB_100260ef7:
  if (*(int *)(puVar7 + 0x10) != -1) {
    if (*(int *)(puVar7 + 0x10) != 0) {
      LOCK();
      piVar2 = (int *)(puVar7 + 0x10);
      *piVar2 = *piVar2 + -1;
      local_21 = *piVar2 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100260f26;
    }
    QHashData::free_helper((_func_void_Node_ptr *)puVar7);
  }
LAB_100260f26:
  if (local_40 != 0) {
    for (; local_50 != local_48; local_50 = local_50 + 1) {
      lVar5 = *(long *)*local_50;
      if ((((lVar5 != 0) && (*(int *)(lVar5 + 4) != 0)) &&
          (plVar6 = (long *)((long *)*local_50)[1], plVar6 != (long *)0x0)) && (plVar6 != param_1))
      {
        (**(code **)(*plVar6 + 0x80))();
      }
      local_40 = 1;
    }
  }
  if (*local_58 != -1) {
    if (*local_58 != 0) {
      LOCK();
      *local_58 = *local_58 + -1;
      local_21 = *local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100260fb0;
    }
    FUN_100034010(&local_58,local_58);
  }
LAB_100260fb0:
  (**(code **)(*param_1 + 0x78))(param_1,0x80000275);
  return 0;
}

