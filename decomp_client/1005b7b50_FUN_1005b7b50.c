
void FUN_1005b7b50(QObject *param_1)

{
  code *pcVar1;
  int *piVar2;
  _func_void_Node_ptr *p_Var3;
  QArrayData *pQVar4;
  
  *(undefined ***)param_1 = &PTR_FUN_10221e2e0;
  if (((*(long *)(param_1 + 0x40) != 0) && (*(int *)(*(long *)(param_1 + 0x40) + 4) != 0)) &&
     (*(long **)(param_1 + 0x48) != (long *)0x0)) {
    (**(code **)(**(long **)(param_1 + 0x48) + 0x20))();
  }
  if (*(long **)(param_1 + 0xb0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xb0) + 0x20))();
  }
  if (*(long **)(param_1 + 0xa0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xa0) + 0x88))();
  }
  piVar2 = *(int **)(param_1 + 400);
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((*piVar2 == 0) && (*(void **)(param_1 + 400) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 400));
    }
  }
  pQVar4 = *(QArrayData **)(param_1 + 0x180);
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_1005b7c28;
      pQVar4 = *(QArrayData **)(param_1 + 0x180);
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_1005b7c28:
  pQVar4 = *(QArrayData **)(param_1 + 0x178);
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_1005b7c60;
      pQVar4 = *(QArrayData **)(param_1 + 0x178);
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_1005b7c60:
  pQVar4 = *(QArrayData **)(param_1 + 0x170);
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_1005b7c98;
      pQVar4 = *(QArrayData **)(param_1 + 0x170);
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_1005b7c98:
  pQVar4 = *(QArrayData **)(param_1 + 0x150);
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_1005b7cd0;
      pQVar4 = *(QArrayData **)(param_1 + 0x150);
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_1005b7cd0:
  p_Var3 = *(_func_void_Node_ptr **)(param_1 + 0x140);
  if (*(int *)(p_Var3 + 0x10) != -1) {
    if (*(int *)(p_Var3 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var3 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_1005b7d07;
      p_Var3 = *(_func_void_Node_ptr **)(param_1 + 0x140);
    }
    QHashData::free_helper(p_Var3);
  }
LAB_1005b7d07:
  FUN_100252c80(param_1 + 0x110);
  FUN_100252e70(param_1 + 0xb8);
  piVar2 = *(int **)(param_1 + 0xa8);
  if (*piVar2 != -1) {
    if (*piVar2 != 0) {
      LOCK();
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 != 0) goto LAB_1005b7d55;
      piVar2 = *(int **)(param_1 + 0xa8);
    }
    FUN_1005bfdc0(param_1 + 0xa8,piVar2);
  }
LAB_1005b7d55:
  pQVar4 = *(QArrayData **)(param_1 + 0x98);
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_1005b7d8d;
      pQVar4 = *(QArrayData **)(param_1 + 0x98);
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_1005b7d8d:
  *(undefined **)(param_1 + 0x78) = PTR_vtable_1021e17e0 + 0x10;
  p_Var3 = *(_func_void_Node_ptr **)(param_1 + 0x90);
  if (*(int *)(p_Var3 + 0x10) != -1) {
    if (*(int *)(p_Var3 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var3 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_1005b7dd9;
      p_Var3 = *(_func_void_Node_ptr **)(param_1 + 0x90);
    }
    QHashData::free_helper(p_Var3);
  }
LAB_1005b7dd9:
  pQVar4 = *(QArrayData **)(param_1 + 0x88);
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_1005b7e11;
      pQVar4 = *(QArrayData **)(param_1 + 0x88);
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_1005b7e11:
  QObject::~QObject(param_1 + 0x78);
  piVar2 = *(int **)(param_1 + 0x40);
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((*piVar2 == 0) && (*(void **)(param_1 + 0x40) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x40));
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

