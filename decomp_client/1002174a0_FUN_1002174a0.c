
void FUN_1002174a0(CAbstractTask *param_1)

{
  code *pcVar1;
  int *piVar2;
  _func_void_Node_ptr *p_Var3;
  QArrayData *pQVar4;
  
  *(undefined ***)param_1 = &PTR_FUN_102201420;
  if (*(long **)(param_1 + 0x170) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x170) + 0x68))();
    if (*(long **)(param_1 + 0x170) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x170) + 0x20))();
    }
  }
  *(undefined **)(param_1 + 0x148) = PTR_vtable_1021e17e0 + 0x10;
  p_Var3 = *(_func_void_Node_ptr **)(param_1 + 0x160);
  if (*(int *)(p_Var3 + 0x10) != -1) {
    if (*(int *)(p_Var3 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var3 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_100217536;
      p_Var3 = *(_func_void_Node_ptr **)(param_1 + 0x160);
    }
    QHashData::free_helper(p_Var3);
  }
LAB_100217536:
  pQVar4 = *(QArrayData **)(param_1 + 0x158);
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_10021756c;
      pQVar4 = *(QArrayData **)(param_1 + 0x158);
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_10021756c:
  QObject::~QObject((QObject *)(param_1 + 0x148));
  piVar2 = *(int **)(param_1 + 0x138);
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((*piVar2 == 0) && (*(void **)(param_1 + 0x138) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x138));
    }
  }
  CVmConfiguration::~CVmConfiguration((CVmConfiguration *)(param_1 + 0x38));
  piVar2 = *(int **)(param_1 + 0x28);
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((*piVar2 == 0) && (*(void **)(param_1 + 0x28) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x28));
    }
  }
  piVar2 = *(int **)(param_1 + 0x18);
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((*piVar2 == 0) && (*(void **)(param_1 + 0x18) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x18));
    }
  }
  CAbstractTask::~CAbstractTask(param_1);
  return;
}

