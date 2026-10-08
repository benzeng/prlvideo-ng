
void FUN_100691cb0(QObject *param_1)

{
  code *pcVar1;
  _func_void_Node_ptr *p_Var2;
  
  *(undefined ***)param_1 = &PTR_FUN_1021f5420;
  p_Var2 = *(_func_void_Node_ptr **)(param_1 + 0x28);
  if (*(int *)(p_Var2 + 0x10) != -1) {
    if (*(int *)(p_Var2 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var2 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_100691cf7;
      p_Var2 = *(_func_void_Node_ptr **)(param_1 + 0x28);
    }
    QHashData::free_helper(p_Var2);
  }
LAB_100691cf7:
  QObject::~QObject(param_1);
  return;
}

