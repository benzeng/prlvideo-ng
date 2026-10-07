
void FUN_10046a7b0(long *param_1)

{
  code *pcVar1;
  _func_void_Node_ptr *p_Var2;
  
  *param_1 = (long)&PTR_FUN_100bc1450;
  FUN_10046aa10(param_1,3,FUN_10046a560,0);
  (**(code **)(*param_1 + 0x28))(param_1,4,FUN_10046a710,0);
  (**(code **)(*param_1 + 0x28))(param_1,0x11,FUN_10046a770,0);
  p_Var2 = (_func_void_Node_ptr *)param_1[1];
  if (*(int *)(p_Var2 + 0x10) != -1) {
    if (*(int *)(p_Var2 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var2 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) {
        return;
      }
      p_Var2 = (_func_void_Node_ptr *)param_1[1];
    }
    QHashData::free_helper(p_Var2);
  }
  return;
}

