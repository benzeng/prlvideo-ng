
void FUN_100022d90(long *param_1)

{
  code *pcVar1;
  _func_void_Node_ptr_void_ptr *p_Var2;
  _func_void_Node_ptr *p_Var3;
  
  p_Var2 = (_func_void_Node_ptr_void_ptr *)*param_1;
  if (*(uint *)(p_Var2 + 0x10) < 2) goto LAB_100022dfd;
  p_Var2 = (_func_void_Node_ptr_void_ptr *)
           QHashData::detach_helper(p_Var2,FUN_100022e20,0x22550,0x18);
  p_Var3 = (_func_void_Node_ptr *)*param_1;
  if (*(int *)(p_Var3 + 0x10) != -1) {
    if (*(int *)(p_Var3 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var3 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_100022dfa;
      p_Var3 = (_func_void_Node_ptr *)*param_1;
    }
    QHashData::free_helper(p_Var3);
  }
LAB_100022dfa:
  *param_1 = (long)p_Var2;
LAB_100022dfd:
  QHashData::rehash((int)p_Var2);
  return;
}

