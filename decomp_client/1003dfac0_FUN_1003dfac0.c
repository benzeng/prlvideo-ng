
void FUN_1003dfac0(long *param_1)

{
  code *pcVar1;
  _func_void_Node_ptr *p_Var2;
  
  p_Var2 = (_func_void_Node_ptr *)*param_1;
  if (*(int *)(p_Var2 + 0x10) != -1) {
    if (*(int *)(p_Var2 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var2 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) {
        return;
      }
      p_Var2 = (_func_void_Node_ptr *)*param_1;
    }
    QHashData::free_helper(p_Var2);
  }
  return;
}

