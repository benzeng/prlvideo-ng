
void FUN_100471f00(undefined8 *param_1)

{
  code *pcVar1;
  _func_void_Node_ptr *p_Var2;
  
  *param_1 = &PTR_FUN_100bc1f90;
  p_Var2 = (_func_void_Node_ptr *)param_1[5];
  if (*(int *)(p_Var2 + 0x10) != -1) {
    if (*(int *)(p_Var2 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var2 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_100471f4b;
      p_Var2 = (_func_void_Node_ptr *)param_1[5];
    }
    QHashData::free_helper(p_Var2);
  }
LAB_100471f4b:
  p_Var2 = (_func_void_Node_ptr *)param_1[4];
  if (*(int *)(p_Var2 + 0x10) != -1) {
    if (*(int *)(p_Var2 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var2 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_100471f7a;
      p_Var2 = (_func_void_Node_ptr *)param_1[4];
    }
    QHashData::free_helper(p_Var2);
  }
LAB_100471f7a:
  p_Var2 = (_func_void_Node_ptr *)param_1[3];
  if (*(int *)(p_Var2 + 0x10) != -1) {
    if (*(int *)(p_Var2 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var2 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_100471fa9;
      p_Var2 = (_func_void_Node_ptr *)param_1[3];
    }
    QHashData::free_helper(p_Var2);
  }
LAB_100471fa9:
  QMutex::~QMutex((QMutex *)(param_1 + 2));
  FUN_100472b30(param_1);
  return;
}

