
void FUN_10077f130(QObject *param_1)

{
  code *pcVar1;
  _func_void_Node_ptr *p_Var2;
  
  *(undefined ***)param_1 = &PTR_FUN_10222a520;
  if (-1 < *(int *)(*(long *)(param_1 + 0x10) + 0x10)) {
    QTimer::stop();
  }
  if (-1 < *(int *)(*(long *)(param_1 + 0x18) + 0x10)) {
    QTimer::stop();
  }
  if (-1 < *(int *)(*(long *)(param_1 + 0x20) + 0x10)) {
    QTimer::stop();
  }
  p_Var2 = *(_func_void_Node_ptr **)(param_1 + 0x38);
  if (*(int *)(p_Var2 + 0x10) != -1) {
    if (*(int *)(p_Var2 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var2 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_10077f1a8;
      p_Var2 = *(_func_void_Node_ptr **)(param_1 + 0x38);
    }
    QHashData::free_helper(p_Var2);
  }
LAB_10077f1a8:
  QObject::~QObject(param_1);
  return;
}

