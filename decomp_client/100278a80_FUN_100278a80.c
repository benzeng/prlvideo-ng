
/* WARNING: Type propagation algorithm not settling */

void FUN_100278a80(long param_1,uint param_2)

{
  code *pcVar1;
  uint uVar2;
  undefined8 *puVar3;
  _func_void_Node_ptr *p_Var4;
  uint uVar5;
  _func_void_Node_ptr *local_a8;
  _func_void_Node_ptr *local_a0;
  uint local_94 [21];
  _func_void_Node_ptr *local_40;
  uint local_38;
  undefined1 local_31;
  
  uVar2 = *(uint *)(param_1 + 0x18);
  local_94[0] = param_2;
  if (*(uint *)(DAT_1023121c0 + 4) != 0) {
    uVar5 = *(uint *)((long)DAT_1023121c0 + 0x24) ^ uVar2;
    for (puVar3 = *(undefined8 **)
                   (DAT_1023121c0[1] + ((ulong)uVar5 % (ulong)*(uint *)(DAT_1023121c0 + 4)) * 8);
        puVar3 != DAT_1023121c0; puVar3 = (undefined8 *)*puVar3) {
      if ((*(uint *)(puVar3 + 1) == uVar5) && (*(uint *)((long)puVar3 + 0xc) == uVar2)) {
        if (puVar3 != DAT_1023121c0) goto LAB_100278c9e;
        break;
      }
    }
  }
  local_40 = (_func_void_Node_ptr *)PTR_shared_null_1021e15d0;
  local_38 = uVar2;
  if (uVar2 == 2) {
    local_94[10] = 0x80015413;
    local_94[9] = 0x80015420;
    FUN_10027d1b0(&local_40,local_94 + 10,local_94 + 9);
    local_94[8] = 0x80015414;
    local_94[7] = 0x80015421;
    FUN_10027d1b0(&local_40,local_94 + 8,local_94 + 7);
    local_94[6] = 0x80015415;
    local_94[5] = 0x80015422;
    FUN_10027d1b0(&local_40,local_94 + 6,local_94 + 5);
    local_94[4] = 0x80015417;
    local_94[3] = 0x80015424;
    FUN_10027d1b0(&local_40,local_94 + 4,local_94 + 3);
    local_94[2] = 0x80015418;
    local_94[1] = 0x80015425;
    FUN_10027d1b0(&local_40,local_94 + 2,local_94 + 1);
  }
  else if (uVar2 == 1) {
    local_94[0x14] = 0x80015413;
    local_94[0x13] = 0x80015325;
    FUN_10027d1b0(&local_40,local_94 + 0x14,local_94 + 0x13);
    local_94[0x12] = 0x80015414;
    local_94[0x11] = 0x80015326;
    FUN_10027d1b0(&local_40,local_94 + 0x12,local_94 + 0x11);
    local_94[0x10] = 0x80015415;
    local_94[0xf] = 0x80015327;
    FUN_10027d1b0(&local_40,local_94 + 0x10,local_94 + 0xf);
    local_94[0xe] = 0x80015417;
    local_94[0xd] = 0x80015329;
    FUN_10027d1b0(&local_40,local_94 + 0xe,local_94 + 0xd);
    local_94[0xc] = 0x80015418;
    local_94[0xb] = 0x80015330;
    FUN_10027d1b0(&local_40,local_94 + 0xc,local_94 + 0xb);
  }
  p_Var4 = local_40;
  if (*(int *)(local_40 + 0x14) != 0) {
    FUN_10027d350(&DAT_1023121c0,&local_38,&local_40);
  }
  if (*(int *)(p_Var4 + 0x10) != -1) {
    if (*(int *)(p_Var4 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var4 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100278c9e;
    }
    QHashData::free_helper(p_Var4);
  }
LAB_100278c9e:
  local_a0 = (_func_void_Node_ptr *)PTR_shared_null_1021e15d0;
  FUN_10027d1b0(&local_a0,local_94,local_94);
  if ((*(int *)((long)DAT_1023121c0 + 0x14) != 0) && (*(uint *)(DAT_1023121c0 + 4) != 0)) {
    uVar5 = *(uint *)((long)DAT_1023121c0 + 0x24) ^ uVar2;
    for (puVar3 = *(undefined8 **)
                   (DAT_1023121c0[1] + ((ulong)uVar5 % (ulong)*(uint *)(DAT_1023121c0 + 4)) * 8);
        puVar3 != DAT_1023121c0; puVar3 = (undefined8 *)*puVar3) {
      if ((*(uint *)(puVar3 + 1) == uVar5) && (*(uint *)((long)puVar3 + 0xc) == uVar2)) {
        if (puVar3 != DAT_1023121c0) {
          FUN_10027d640(&local_a8,puVar3 + 2);
          goto LAB_100278d2d;
        }
        break;
      }
    }
  }
  FUN_10027d640(&local_a8,&local_a0);
LAB_100278d2d:
  if ((*(int *)(local_a8 + 0x14) != 0) && (*(uint *)(local_a8 + 0x20) != 0)) {
    for (p_Var4 = *(_func_void_Node_ptr **)
                   (*(long *)(local_a8 + 8) +
                   ((ulong)(*(uint *)(local_a8 + 0x24) ^ param_2) %
                   (ulong)*(uint *)(local_a8 + 0x20)) * 8);
        (p_Var4 != local_a8 &&
        ((*(uint *)(p_Var4 + 8) != (*(uint *)(local_a8 + 0x24) ^ param_2) ||
         (*(uint *)(p_Var4 + 0xc) != param_2)))); p_Var4 = *(_func_void_Node_ptr **)p_Var4) {
    }
  }
  if (*(int *)(local_a8 + 0x10) != -1) {
    if (*(int *)(local_a8 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_a8 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100278dae;
    }
    QHashData::free_helper(local_a8);
  }
LAB_100278dae:
  if (*(int *)(local_a0 + 0x10) != -1) {
    if (*(int *)(local_a0 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_a0 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100278ddc;
    }
    QHashData::free_helper(local_a0);
  }
LAB_100278ddc:
  CAbstractTask::finish((int)param_1);
  return;
}

