
void FUN_100866ca0(QObject *param_1)

{
  code *pcVar1;
  _func_void_Node_ptr *p_Var2;
  
  *(undefined ***)param_1 = &PTR_FUN_10222f2c0;
  p_Var2 = *(_func_void_Node_ptr **)(param_1 + 0x30);
  if (*(int *)(p_Var2 + 0x10) != -1) {
    if (*(int *)(p_Var2 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var2 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_100866ce7;
      p_Var2 = *(_func_void_Node_ptr **)(param_1 + 0x30);
    }
    QHashData::free_helper(p_Var2);
  }
LAB_100866ce7:
  p_Var2 = *(_func_void_Node_ptr **)(param_1 + 0x18);
  if (*(int *)(p_Var2 + 0x10) != -1) {
    if (*(int *)(p_Var2 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var2 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_100866d16;
      p_Var2 = *(_func_void_Node_ptr **)(param_1 + 0x18);
    }
    QHashData::free_helper(p_Var2);
  }
LAB_100866d16:
  QObject::~QObject(param_1);
  operator_delete(param_1);
  return;
}

