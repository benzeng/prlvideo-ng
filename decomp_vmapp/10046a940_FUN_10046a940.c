
bool FUN_10046a940(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  code *pcVar2;
  _func_void_Node_ptr_void_ptr *p_Var3;
  _func_void_Node_ptr_void_ptr *p_Var4;
  undefined4 *puVar5;
  _func_void_Node_ptr *p_Var6;
  undefined4 local_38;
  undefined1 local_31;
  
  plVar1 = (long *)(param_1 + 8);
  local_38 = param_2;
  p_Var3 = (_func_void_Node_ptr_void_ptr *)FUN_10046aba0(plVar1,&local_38);
  p_Var4 = *(_func_void_Node_ptr_void_ptr **)(param_1 + 8);
  if (*(uint *)(p_Var4 + 0x10) < 2) goto LAB_10046a9d5;
  p_Var4 = (_func_void_Node_ptr_void_ptr *)
           QHashData::detach_helper(p_Var4,FUN_10046af70,0x46af60,0x28);
  p_Var6 = (_func_void_Node_ptr *)*plVar1;
  if (*(int *)(p_Var6 + 0x10) != -1) {
    if (*(int *)(p_Var6 + 0x10) != 0) {
      LOCK();
      pcVar2 = p_Var6 + 0x10;
      *(int *)pcVar2 = *(int *)pcVar2 + -1;
      local_31 = *(int *)pcVar2 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10046a9d2;
      p_Var6 = (_func_void_Node_ptr *)*plVar1;
    }
    QHashData::free_helper(p_Var6);
  }
LAB_10046a9d2:
  *plVar1 = (long)p_Var4;
LAB_10046a9d5:
  if (p_Var4 == p_Var3) {
    puVar5 = (undefined4 *)FUN_10046ac70(plVar1,&local_38);
    *puVar5 = param_2;
    *(undefined8 *)(puVar5 + 2) = param_3;
    *(undefined8 *)(puVar5 + 4) = param_4;
  }
  return p_Var4 == p_Var3;
}

