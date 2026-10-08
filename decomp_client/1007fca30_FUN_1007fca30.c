
void FUN_1007fca30(undefined8 *param_1)

{
  code *pcVar1;
  _func_void_Node_ptr *p_Var2;
  
  param_1[-2] = &PTR_FUN_1021fbc68;
  *param_1 = &PTR_FUN_1021fbe18;
  p_Var2 = (_func_void_Node_ptr *)param_1[5];
  if (*(int *)(p_Var2 + 0x10) != -1) {
    if (*(int *)(p_Var2 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var2 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_1007fca86;
      p_Var2 = (_func_void_Node_ptr *)param_1[5];
    }
    QHashData::free_helper(p_Var2);
  }
LAB_1007fca86:
  QWidget::~QWidget((QWidget *)(param_1 + -2));
  operator_delete((QWidget *)(param_1 + -2));
  return;
}

