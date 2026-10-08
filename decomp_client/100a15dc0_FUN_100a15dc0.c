
void FUN_100a15dc0(long param_1)

{
  code *pcVar1;
  _func_void_Node_ptr_void_ptr *p_Var2;
  _func_void_Node_ptr_void_ptr *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  local_28 = (QArrayData *)QString::fromAscii_helper("register",8);
  local_30 = *(_func_void_Node_ptr_void_ptr **)(param_1 + 0x18);
  if (1 < *(int *)(local_30 + 0x10) + 1U) {
    LOCK();
    pcVar1 = local_30 + 0x10;
    *(int *)pcVar1 = *(int *)pcVar1 + 1;
    local_19 = *(int *)pcVar1 != 0;
    UNLOCK();
  }
  p_Var2 = local_30;
  if ((((byte)local_30[0x28] & 1) == 0) && (1 < *(uint *)(local_30 + 0x10))) {
    p_Var2 = (_func_void_Node_ptr_void_ptr *)
             QHashData::detach_helper(local_30,FUN_100076890,0x76530,0x28);
    if (*(int *)(local_30 + 0x10) != -1) {
      if (*(int *)(local_30 + 0x10) != 0) {
        LOCK();
        pcVar1 = local_30 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        local_19 = *(int *)pcVar1 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_100a15e62;
      }
      QHashData::free_helper((_func_void_Node_ptr *)local_30);
    }
  }
LAB_100a15e62:
  local_30 = p_Var2;
  FUN_100a0d330(param_1,0,&local_28,&local_30);
  if (*(int *)(local_30 + 0x10) != -1) {
    if (*(int *)(local_30 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_30 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_19 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100a15ea3;
    }
    QHashData::free_helper((_func_void_Node_ptr *)local_30);
  }
LAB_100a15ea3:
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return;
}

