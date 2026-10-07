
ulong FUN_100792f60(ulong param_1,ulong param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  _func_void_Node_ptr_void_ptr *p_Var5;
  _func_void_Node_ptr_void_ptr *p_Var6;
  _func_void_Node_ptr_void_ptr *p_Var7;
  ulong uVar8;
  ulong uVar9;
  _func_void_Node_ptr_void_ptr *local_48;
  _func_void_Node_ptr_void_ptr *local_40;
  undefined1 local_31;
  
  uVar9 = param_2;
  if ((param_2 & 1) == 0) {
    QReadWriteLock::lockForRead();
    uVar9 = param_2 | 1;
  }
  uVar3 = *(undefined4 *)(param_2 + 8);
  uVar4 = *(undefined4 *)(param_2 + 0xc);
  uVar2 = *(undefined1 *)(param_2 + 0x10);
  p_Var5 = *(_func_void_Node_ptr_void_ptr **)(param_2 + 0x18);
  if (1 < *(int *)(p_Var5 + 0x10) + 1U) {
    LOCK();
    pcVar1 = p_Var5 + 0x10;
    *(int *)pcVar1 = *(int *)pcVar1 + 1;
    local_31 = *(int *)pcVar1 != 0;
    UNLOCK();
  }
  p_Var6 = p_Var5;
  if ((((byte)p_Var5[0x28] & 1) == 0) && (1 < *(uint *)(p_Var5 + 0x10))) {
    local_40 = p_Var5;
    p_Var6 = (_func_void_Node_ptr_void_ptr *)
             QHashData::detach_helper(p_Var5,FUN_100794ef0,0x78eb50,0x20);
    if (*(int *)(p_Var5 + 0x10) != -1) {
      if (*(int *)(p_Var5 + 0x10) != 0) {
        LOCK();
        pcVar1 = p_Var5 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        local_31 = *(int *)pcVar1 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100793026;
      }
      QHashData::free_helper((_func_void_Node_ptr *)p_Var5);
    }
  }
LAB_100793026:
  local_40 = p_Var6;
  p_Var6 = local_40;
  p_Var5 = *(_func_void_Node_ptr_void_ptr **)(param_2 + 0x20);
  if (1 < *(int *)(p_Var5 + 0x10) + 1U) {
    LOCK();
    pcVar1 = p_Var5 + 0x10;
    *(int *)pcVar1 = *(int *)pcVar1 + 1;
    local_31 = *(int *)pcVar1 != 0;
    UNLOCK();
  }
  p_Var7 = p_Var5;
  if ((((byte)p_Var5[0x28] & 1) == 0) && (1 < *(uint *)(p_Var5 + 0x10))) {
    local_48 = p_Var5;
    p_Var7 = (_func_void_Node_ptr_void_ptr *)
             QHashData::detach_helper(p_Var5,FUN_100794e30,0x78eb40,0x18);
    if (*(int *)(p_Var5 + 0x10) != -1) {
      if (*(int *)(p_Var5 + 0x10) != 0) {
        LOCK();
        pcVar1 = p_Var5 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        local_31 = *(int *)pcVar1 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007930ae;
      }
      QHashData::free_helper((_func_void_Node_ptr *)p_Var5);
    }
  }
LAB_1007930ae:
  local_48 = p_Var7;
  p_Var5 = local_48;
  if ((uVar9 & 1) != 0) {
    uVar9 = 0;
    QReadWriteLock::unlock();
  }
  uVar8 = param_1;
  if ((param_1 != 0) && ((param_1 & 1) == 0)) {
    QReadWriteLock::lockForWrite();
    uVar8 = param_1 | 1;
  }
  *(undefined4 *)(param_1 + 8) = uVar3;
  *(undefined4 *)(param_1 + 0xc) = uVar4;
  *(undefined1 *)(param_1 + 0x10) = uVar2;
  FUN_1007949a0(param_1 + 0x18,&local_40);
  FUN_100794a70(param_1 + 0x20,&local_48);
  if ((uVar8 & 1) != 0) {
    QReadWriteLock::unlock();
  }
  if (*(int *)(p_Var5 + 0x10) != -1) {
    if (*(int *)(p_Var5 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var5 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100793157;
    }
    QHashData::free_helper((_func_void_Node_ptr *)p_Var5);
  }
LAB_100793157:
  if (*(int *)(p_Var6 + 0x10) != -1) {
    if (*(int *)(p_Var6 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var6 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100793183;
    }
    QHashData::free_helper((_func_void_Node_ptr *)p_Var6);
  }
LAB_100793183:
  if ((uVar9 & 1) != 0) {
    QReadWriteLock::unlock();
  }
  return param_1;
}

