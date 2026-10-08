
void FUN_10052f460(QObject *param_1)

{
  code *pcVar1;
  _func_void_Node_ptr *p_Var2;
  
  *(undefined ***)param_1 = &PTR_FUN_1021f29f0;
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x18));
  }
  p_Var2 = *(_func_void_Node_ptr **)(param_1 + 0x20);
  if (*(int *)(p_Var2 + 0x10) != -1) {
    if (*(int *)(p_Var2 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var2 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_10052f4b5;
      p_Var2 = *(_func_void_Node_ptr **)(param_1 + 0x20);
    }
    QHashData::free_helper(p_Var2);
  }
LAB_10052f4b5:
  QObject::~QObject(param_1);
  return;
}

