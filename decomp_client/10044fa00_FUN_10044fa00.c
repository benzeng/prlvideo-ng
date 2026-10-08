
void FUN_10044fa00(long param_1)

{
  code *pcVar1;
  _func_void_Node_ptr *p_Var2;
  
  p_Var2 = *(_func_void_Node_ptr **)(param_1 + 0x20);
  if (*(int *)(p_Var2 + 0x10) != -1) {
    if (*(int *)(p_Var2 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var2 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_10044fa38;
      p_Var2 = *(_func_void_Node_ptr **)(param_1 + 0x20);
    }
    QHashData::free_helper(p_Var2);
  }
LAB_10044fa38:
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10044fa00();
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_10044fa00();
  }
  return;
}

