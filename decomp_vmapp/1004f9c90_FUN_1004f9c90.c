
void FUN_1004f9c90(long *param_1)

{
  long *plVar1;
  int *piVar2;
  long *plVar3;
  long lVar4;
  undefined *puVar5;
  uint uVar6;
  bool bVar7;
  QArrayData *local_60;
  int *local_58;
  int *local_50;
  int *local_48;
  uint local_40;
  undefined1 local_31;
  
  QMutex::lock();
  piVar2 = *(int **)(param_1[1] + 8);
  *(undefined **)(param_1[1] + 8) = PTR_shared_null_100ba2188;
  local_58 = piVar2;
  if (*piVar2 != -1) {
    if (*piVar2 == 0) {
      QListData::detach((int)&local_58);
      FUN_1004fa180(local_58 + (long)local_58[2] * 2 + 4,local_58 + (long)local_58[3] * 2 + 4,
                    piVar2 + (long)piVar2[2] * 2 + 4);
    }
    else {
      LOCK();
      *piVar2 = *piVar2 + 1;
      local_31 = *piVar2 != 0;
      UNLOCK();
    }
  }
  puVar5 = PTR_shared_null_100ba20d0;
  local_50 = local_58 + (long)local_58[2] * 2 + 4;
  local_48 = local_58 + (long)local_58[3] * 2 + 4;
  local_40 = 1;
  if (local_58[2] != local_58[3]) {
    do {
      plVar3 = (long *)**(long **)local_50;
      if (plVar3 != (long *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
      }
      if (local_40 != 0) {
        local_60 = (QArrayData *)plVar3[3];
        plVar3[3] = (long)puVar5;
        if (*(int *)(local_60 + 4) != 0) {
          FUN_1004d0a00(*param_1 + 0x48,&local_60);
        }
        if (*(int *)local_60 != -1) {
          if (*(int *)local_60 != 0) {
            LOCK();
            *(int *)local_60 = *(int *)local_60 + -1;
            local_31 = *(int *)local_60 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1004f9df6;
          }
          QArrayData::deallocate(local_60,2,8);
        }
LAB_1004f9df6:
        local_40 = 0;
      }
      if (plVar3 != (long *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
      local_50 = local_50 + 2;
      uVar6 = local_40 ^ 1;
      bVar7 = local_40 != 1;
      local_40 = uVar6;
    } while ((bVar7) && (local_50 != local_48));
  }
  if (*local_58 != -1) {
    if (*local_58 != 0) {
      LOCK();
      *local_58 = *local_58 + -1;
      local_31 = *local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004f9e69;
    }
    FUN_1004fa0f0(local_58);
  }
LAB_1004f9e69:
  if (*piVar2 != -1) {
    if (*piVar2 != 0) {
      LOCK();
      *piVar2 = *piVar2 + -1;
      local_31 = *piVar2 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004f9e8c;
    }
    FUN_1004fa0f0(piVar2);
  }
LAB_1004f9e8c:
  QMutex::unlock();
  return;
}

