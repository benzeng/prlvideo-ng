
uint FUN_1001303b0(uint param_1,int param_2,undefined8 param_3)

{
  code *pcVar1;
  _func_void_Node_ptr_void_ptr *p_Var2;
  _func_void_Node_ptr_void_ptr *p_Var3;
  _func_void_Node_ptr_void_ptr *p_Var4;
  uint uVar5;
  uint local_44;
  _func_void_Node_ptr_void_ptr *local_40;
  undefined1 local_33;
  undefined1 local_31;
  
  FUN_100130190(&local_40,param_3);
  param_1 = param_1 & 0xff;
  if ((int)param_1 < param_2) {
    do {
      local_44 = param_1;
      p_Var3 = (_func_void_Node_ptr_void_ptr *)FUN_100132060(&local_40,&local_44);
      p_Var2 = local_40;
      p_Var4 = local_40;
      if (1 < *(uint *)(local_40 + 0x10)) {
        p_Var4 = (_func_void_Node_ptr_void_ptr *)
                 QHashData::detach_helper(local_40,FUN_100132040,0x131900,0x10);
        if (*(int *)(p_Var2 + 0x10) != -1) {
          if (*(int *)(p_Var2 + 0x10) != 0) {
            LOCK();
            pcVar1 = p_Var2 + 0x10;
            *(int *)pcVar1 = *(int *)pcVar1 + -1;
            local_33 = *(int *)pcVar1 != 0;
            UNLOCK();
            if ((bool)local_33) goto LAB_100130462;
          }
          QHashData::free_helper((_func_void_Node_ptr *)p_Var2);
        }
      }
LAB_100130462:
      local_40 = p_Var4;
      uVar5 = param_1;
      if (p_Var3 == local_40) break;
      param_1 = param_1 + 1;
      uVar5 = 0xffffffff;
      local_44 = param_1;
    } while ((int)param_1 < param_2);
  }
  else {
    local_44 = param_1;
    uVar5 = 0xffffffff;
  }
  if (*(int *)(local_40 + 0x10) != -1) {
    if (*(int *)(local_40 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_40 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) {
        return uVar5;
      }
    }
    QHashData::free_helper((_func_void_Node_ptr *)local_40);
  }
  return uVar5;
}

