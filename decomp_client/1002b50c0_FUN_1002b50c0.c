
void FUN_1002b50c0(long param_1)

{
  code *pcVar1;
  _func_void_Node_ptr_void_ptr *p_Var2;
  uint *puVar3;
  undefined8 *puVar4;
  undefined1 local_58 [8];
  _func_void_Node_ptr *local_50;
  _func_void_Node_ptr_void_ptr *local_48;
  _func_void_Node_ptr_void_ptr *local_40;
  undefined1 local_38 [8];
  uint *local_30;
  uint *local_28;
  
  FUN_1000627a0(&local_48);
  FUN_1002b5da0(local_58,param_1 + 0x48);
  FUN_1000627a0(&local_50,local_58);
  local_40 = local_48;
  if (1 < *(int *)(local_48 + 0x10) + 1U) {
    LOCK();
    pcVar1 = local_48 + 0x10;
    *(int *)pcVar1 = *(int *)pcVar1 + 1;
    UNLOCK();
    local_28 = (uint *)CONCAT71(local_28._1_7_,*(int *)pcVar1 != 0);
  }
  p_Var2 = local_40;
  if ((((byte)local_48[0x28] & 1) == 0) && (1 < *(uint *)(local_48 + 0x10))) {
    p_Var2 = (_func_void_Node_ptr_void_ptr *)
             QHashData::detach_helper(local_48,FUN_100062bb0,0x62be0,0x18);
    if (*(int *)(local_40 + 0x10) != -1) {
      if (*(int *)(local_40 + 0x10) != 0) {
        LOCK();
        pcVar1 = local_40 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        UNLOCK();
        local_28 = (uint *)CONCAT71(local_28._1_7_,*(int *)pcVar1 != 0);
        if (*(int *)pcVar1 != 0) goto LAB_1002b5177;
      }
      QHashData::free_helper((_func_void_Node_ptr *)local_40);
    }
  }
LAB_1002b5177:
  local_40 = p_Var2;
  FUN_1002b6530(&local_40,&local_50);
  FUN_1000625e0(local_38,&local_40);
  puVar4 = (undefined8 *)(param_1 + 0x30);
  FUN_1000e5fc0(puVar4,local_38);
  FUN_100039a80(local_38);
  if (*(int *)(local_40 + 0x10) != -1) {
    if (*(int *)(local_40 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_40 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      local_28 = (uint *)CONCAT71(local_28._1_7_,*(int *)pcVar1 != 0);
      if (*(int *)pcVar1 != 0) goto LAB_1002b51d9;
    }
    QHashData::free_helper((_func_void_Node_ptr *)local_40);
  }
LAB_1002b51d9:
  if (*(int *)(local_50 + 0x10) != -1) {
    if (*(int *)(local_50 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_50 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      local_28 = (uint *)CONCAT71(local_28._1_7_,*(int *)pcVar1 != 0);
      if (*(int *)pcVar1 != 0) goto LAB_1002b5204;
    }
    QHashData::free_helper(local_50);
  }
LAB_1002b5204:
  FUN_100039a80(local_58);
  if (*(int *)(local_48 + 0x10) != -1) {
    if (*(int *)(local_48 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_48 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      local_28 = (uint *)CONCAT71(local_28._1_7_,*(int *)pcVar1 != 0);
      if (*(int *)pcVar1 != 0) goto LAB_1002b5239;
    }
    QHashData::free_helper((_func_void_Node_ptr *)local_48);
  }
LAB_1002b5239:
  local_30 = (uint *)*puVar4;
  if (*local_30 < 2) {
    puVar3 = local_30 + (long)(int)local_30[2] * 2 + 4;
  }
  else {
    FUN_100036c40(puVar4,local_30[1]);
    local_30 = (uint *)*puVar4;
    puVar3 = local_30 + (long)(int)local_30[2] * 2 + 4;
    if (1 < *local_30) {
      FUN_100036c40(puVar4,local_30[1]);
      local_30 = (uint *)*puVar4;
    }
  }
  local_30 = local_30 + (long)(int)local_30[3] * 2 + 4;
  if (puVar3 != local_30) {
    local_28 = puVar3;
    FUN_1002b6800(&local_28,&local_30,puVar3,FUN_1002b4e10);
  }
  return;
}

