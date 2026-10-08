
void FUN_10081f520(CAbstractTask *param_1)

{
  code *pcVar1;
  int *piVar2;
  QArrayData *pQVar3;
  _func_void_Node_ptr *p_Var4;
  
  *(undefined ***)param_1 = &PTR_FUN_1022075c0;
  piVar2 = *(int **)(param_1 + 0x38);
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((*piVar2 == 0) && (*(void **)(param_1 + 0x38) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x38));
    }
  }
  piVar2 = *(int **)(param_1 + 0x28);
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((*piVar2 == 0) && (*(void **)(param_1 + 0x28) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x28));
    }
  }
  pQVar3 = *(QArrayData **)(param_1 + 0x20);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_10081f5b2;
      pQVar3 = *(QArrayData **)(param_1 + 0x20);
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_10081f5b2:
  p_Var4 = *(_func_void_Node_ptr **)(param_1 + 0x18);
  if (*(int *)(p_Var4 + 0x10) != -1) {
    if (*(int *)(p_Var4 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var4 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_10081f5e1;
      p_Var4 = *(_func_void_Node_ptr **)(param_1 + 0x18);
    }
    QHashData::free_helper(p_Var4);
  }
LAB_10081f5e1:
  CAbstractTask::~CAbstractTask(param_1);
  return;
}

