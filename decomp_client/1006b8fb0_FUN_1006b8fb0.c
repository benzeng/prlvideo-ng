
void FUN_1006b8fb0(QObject *param_1)

{
  code *pcVar1;
  _func_void_Node_ptr *p_Var2;
  Data *pDVar3;
  
  *(undefined ***)param_1 = &PTR_FUN_1021f5730;
  if (*(long **)(param_1 + 0x20) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x20) + 0x20))();
  }
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x18));
  }
  p_Var2 = *(_func_void_Node_ptr **)(param_1 + 0x38);
  if (*(int *)(p_Var2 + 0x10) != -1) {
    if (*(int *)(p_Var2 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var2 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_1006b9017;
      p_Var2 = *(_func_void_Node_ptr **)(param_1 + 0x38);
    }
    QHashData::free_helper(p_Var2);
  }
LAB_1006b9017:
  p_Var2 = *(_func_void_Node_ptr **)(param_1 + 0x30);
  if (*(int *)(p_Var2 + 0x10) != -1) {
    if (*(int *)(p_Var2 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var2 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_1006b9046;
      p_Var2 = *(_func_void_Node_ptr **)(param_1 + 0x30);
    }
    QHashData::free_helper(p_Var2);
  }
LAB_1006b9046:
  pDVar3 = *(Data **)(param_1 + 0x28);
  if (*(int *)pDVar3 != -1) {
    if (*(int *)pDVar3 != 0) {
      LOCK();
      *(int *)pDVar3 = *(int *)pDVar3 + -1;
      UNLOCK();
      if (*(int *)pDVar3 != 0) goto LAB_1006b906c;
      pDVar3 = *(Data **)(param_1 + 0x28);
    }
    QListData::dispose(pDVar3);
  }
LAB_1006b906c:
  QObject::~QObject(param_1);
  return;
}

