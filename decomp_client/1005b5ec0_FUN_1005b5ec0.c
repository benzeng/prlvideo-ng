
void FUN_1005b5ec0(long param_1,undefined8 *param_2)

{
  code *pcVar1;
  uint uVar2;
  ulong uVar3;
  char cVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  _func_void_Node_ptr *p_Var8;
  _func_void_Node_ptr *p_Var9;
  QArrayData *local_70;
  uint local_68;
  QArrayData *local_60;
  uint local_58;
  _func_void_Node_ptr *local_50;
  QString local_48;
  uint local_40;
  undefined1 local_31;
  
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)*param_2;
  if (1 < *(int *)local_48.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + 1;
    local_31 = *(int *)local_48.field0_0x0 != 0;
    UNLOCK();
  }
  local_40 = 2;
  lVar6 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
  FUN_1005b6a80(&local_50,lVar6 + 0x140);
  uVar2 = *(uint *)(local_50 + 0x20);
  p_Var8 = local_50;
  if (uVar2 != 0) {
    uVar5 = qHash(&local_48,*(uint *)(local_50 + 0x24));
    uVar5 = (uVar5 << 0x10 | uVar5 >> 0x10) ^ local_40;
    uVar3 = (ulong)uVar5 % (ulong)uVar2;
    p_Var9 = *(_func_void_Node_ptr **)(*(long *)(local_50 + 8) + uVar3 * 8);
    if (p_Var9 != local_50) {
      plVar7 = (long *)(*(long *)(local_50 + 8) + uVar3 * 8);
      do {
        if (((*(uint *)(p_Var9 + 8) == uVar5) &&
            (cVar4 = operator==(&local_48,(QString *)(p_Var9 + 0x10)), cVar4 != '\0')) &&
           (local_40 == *(uint *)(p_Var9 + 0x18))) {
          p_Var8 = (_func_void_Node_ptr *)*plVar7;
          break;
        }
        plVar7 = (long *)*plVar7;
        p_Var9 = (_func_void_Node_ptr *)*plVar7;
      } while (p_Var9 != local_50);
    }
  }
  if (*(int *)(local_50 + 0x10) != -1) {
    if (*(int *)(local_50 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_50 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005b5fc5;
    }
    QHashData::free_helper(local_50);
  }
LAB_1005b5fc5:
  if (p_Var8 == local_50) goto LAB_1005b6093;
  lVar6 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
  local_60 = (QArrayData *)local_48.field0_0x0;
  if (1 < *(int *)local_48.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + 1;
    local_31 = *(int *)local_48.field0_0x0 != 0;
    UNLOCK();
  }
  local_58 = local_40;
  FUN_1005b6b10(lVar6 + 0x140,&local_60);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005b6038;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1005b6038:
  local_70 = (QArrayData *)local_48.field0_0x0;
  if (1 < *(int *)local_48.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + 1;
    local_31 = *(int *)local_48.field0_0x0 != 0;
    UNLOCK();
  }
  local_68 = local_40;
  FUN_100840070(param_1,&local_70);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005b6093;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1005b6093:
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_48.field0_0x0 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
  return;
}

