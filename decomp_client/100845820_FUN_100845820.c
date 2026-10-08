
void FUN_100845820(QObject *param_1)

{
  code *pcVar1;
  int *piVar2;
  _func_void_Node_ptr *p_Var3;
  
  *(undefined ***)param_1 = &PTR_FUN_1022213b0;
  if (*(long *)(param_1 + 0x28) != 0) {
    _PrlHandle_Free();
  }
  p_Var3 = *(_func_void_Node_ptr **)(param_1 + 0x20);
  if (*(int *)(p_Var3 + 0x10) != -1) {
    if (*(int *)(p_Var3 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var3 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_100845875;
      p_Var3 = *(_func_void_Node_ptr **)(param_1 + 0x20);
    }
    QHashData::free_helper(p_Var3);
  }
LAB_100845875:
  piVar2 = *(int **)(param_1 + 0x10);
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((*piVar2 == 0) && (*(void **)(param_1 + 0x10) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x10));
    }
  }
  QObject::~QObject(param_1);
  return;
}

