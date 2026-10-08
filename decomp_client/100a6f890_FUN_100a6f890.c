
void FUN_100a6f890(long param_1)

{
  long lVar1;
  int *piVar2;
  QString local_58;
  int *local_50;
  int *local_48;
  undefined1 local_39;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  *(undefined4 *)(param_1 + 4) = 6;
  local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_50 = (int *)PTR_shared_null_1021e15e8;
  *(undefined4 *)(param_1 + 8) = 10;
  local_28 = lVar1;
  QString::operator=((QString *)(param_1 + 0x10),&local_58);
  if (*(int **)(param_1 + 0x18) != local_50) {
    FUN_100a718b0(&local_48,&local_50);
    piVar2 = *(int **)(param_1 + 0x18);
    *(int **)(param_1 + 0x18) = local_48;
    local_48 = piVar2;
    if (*piVar2 != -1) {
      if (*piVar2 != 0) {
        LOCK();
        *piVar2 = *piVar2 + -1;
        local_39 = *piVar2 != 0;
        UNLOCK();
        if ((bool)local_39) goto LAB_100a6f936;
      }
      FUN_100a71820(&local_48,piVar2);
    }
  }
LAB_100a6f936:
  if (*local_50 != -1) {
    if (*local_50 != 0) {
      LOCK();
      *local_50 = *local_50 + -1;
      local_39 = *local_50 != 0;
      UNLOCK();
      if ((bool)local_39) goto LAB_100a6f95f;
    }
    FUN_100a71820(&local_50,local_50);
  }
LAB_100a6f95f:
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_39 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_39) goto LAB_100a6f98f;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_100a6f98f:
  FUN_100dda060(&local_38);
  *(undefined8 *)(param_1 + 0x48) = local_30;
  *(undefined8 *)(param_1 + 0x40) = local_38;
  if (lVar1 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

