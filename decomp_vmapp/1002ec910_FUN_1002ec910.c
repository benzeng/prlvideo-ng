
void FUN_1002ec910(long param_1)

{
  code *pcVar1;
  _func_void_Node_ptr *p_Var2;
  
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1002ec9c0(param_1);
  }
  QMutex::~QMutex((QMutex *)(param_1 + 0x28));
  p_Var2 = *(_func_void_Node_ptr **)(param_1 + 0x20);
  if (*(int *)(p_Var2 + 0x10) != -1) {
    if (*(int *)(p_Var2 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var2 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) {
        return;
      }
      p_Var2 = *(_func_void_Node_ptr **)(param_1 + 0x20);
    }
    QHashData::free_helper(p_Var2);
  }
  return;
}

