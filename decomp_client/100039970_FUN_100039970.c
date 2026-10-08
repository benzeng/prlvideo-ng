
void FUN_100039970(QObject *param_1)

{
  code *pcVar1;
  _func_void_Node_ptr *p_Var2;
  
  *(undefined **)param_1 = &DAT_10226c150;
  p_Var2 = *(_func_void_Node_ptr **)(param_1 + 0x18);
  if (*(int *)(p_Var2 + 0x10) != -1) {
    if (*(int *)(p_Var2 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var2 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_1000399b7;
      p_Var2 = *(_func_void_Node_ptr **)(param_1 + 0x18);
    }
    QHashData::free_helper(p_Var2);
  }
LAB_1000399b7:
  QObject::~QObject(param_1);
  return;
}

