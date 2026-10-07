
void FUN_100502db0(long *param_1)

{
  code *pcVar1;
  _func_void_Node_ptr *p_Var2;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  p_Var2 = (_func_void_Node_ptr *)*param_1;
  if (*(int *)(p_Var2 + 0x10) != -1) {
    if (*(int *)(p_Var2 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var2 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_100502deb;
      p_Var2 = (_func_void_Node_ptr *)*param_1;
    }
    QHashData::free_helper(p_Var2);
  }
LAB_100502deb:
  operator_delete(param_1);
  return;
}

