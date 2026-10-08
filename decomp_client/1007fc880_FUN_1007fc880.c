
void FUN_1007fc880(QWidget *param_1)

{
  code *pcVar1;
  _func_void_Node_ptr *p_Var2;
  
  *(undefined ***)param_1 = &PTR_FUN_1021fbc68;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_1021fbe18;
  p_Var2 = *(_func_void_Node_ptr **)(param_1 + 0x38);
  if (*(int *)(p_Var2 + 0x10) != -1) {
    if (*(int *)(p_Var2 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var2 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_1007fc8d2;
      p_Var2 = *(_func_void_Node_ptr **)(param_1 + 0x38);
    }
    QHashData::free_helper(p_Var2);
  }
LAB_1007fc8d2:
  QWidget::~QWidget(param_1);
  return;
}

