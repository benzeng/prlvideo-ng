
void FUN_100a92a30(QThread *param_1)

{
  long *plVar1;
  code *pcVar2;
  long *plVar3;
  long lVar4;
  int *piVar5;
  _func_void_Node_ptr *p_Var6;
  QArrayData *pQVar7;
  
  *(undefined **)param_1 = &DAT_102239540;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_1022395e0;
  *(undefined ***)(param_1 + 0x18) = &PTR_FUN_102239648;
  FUN_100a92f70();
  plVar3 = *(long **)(param_1 + 0xe8);
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  p_Var6 = *(_func_void_Node_ptr **)(param_1 + 0xd8);
  if (*(int *)(p_Var6 + 0x10) != -1) {
    if (*(int *)(p_Var6 + 0x10) != 0) {
      LOCK();
      pcVar2 = p_Var6 + 0x10;
      *(int *)pcVar2 = *(int *)pcVar2 + -1;
      UNLOCK();
      if (*(int *)pcVar2 != 0) goto LAB_100a92abc;
      p_Var6 = *(_func_void_Node_ptr **)(param_1 + 0xd8);
    }
    QHashData::free_helper(p_Var6);
  }
LAB_100a92abc:
  piVar5 = *(int **)(param_1 + 0xd0);
  if (*piVar5 != -1) {
    if (*piVar5 != 0) {
      LOCK();
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (*piVar5 != 0) goto LAB_100a92aeb;
      piVar5 = *(int **)(param_1 + 0xd0);
    }
    FUN_100a9eba0(param_1 + 0xd0,piVar5);
  }
LAB_100a92aeb:
  QWaitCondition::~QWaitCondition((QWaitCondition *)(param_1 + 200));
  FUN_10003f090(param_1 + 0xa8);
  p_Var6 = *(_func_void_Node_ptr **)(param_1 + 0xa0);
  if (*(int *)(p_Var6 + 0x10) != -1) {
    if (*(int *)(p_Var6 + 0x10) != 0) {
      LOCK();
      pcVar2 = p_Var6 + 0x10;
      *(int *)pcVar2 = *(int *)pcVar2 + -1;
      UNLOCK();
      if (*(int *)pcVar2 != 0) goto LAB_100a92b38;
      p_Var6 = *(_func_void_Node_ptr **)(param_1 + 0xa0);
    }
    QHashData::free_helper(p_Var6);
  }
LAB_100a92b38:
  piVar5 = *(int **)(param_1 + 0x98);
  if (*piVar5 != -1) {
    if (*piVar5 != 0) {
      LOCK();
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (*piVar5 != 0) goto LAB_100a92b67;
      piVar5 = *(int **)(param_1 + 0x98);
    }
    FUN_100a9ea50(param_1 + 0x98,piVar5);
  }
LAB_100a92b67:
  p_Var6 = *(_func_void_Node_ptr **)(param_1 + 0x90);
  if (*(int *)(p_Var6 + 0x10) != -1) {
    if (*(int *)(p_Var6 + 0x10) != 0) {
      LOCK();
      pcVar2 = p_Var6 + 0x10;
      *(int *)pcVar2 = *(int *)pcVar2 + -1;
      UNLOCK();
      if (*(int *)pcVar2 != 0) goto LAB_100a92b9c;
      p_Var6 = *(_func_void_Node_ptr **)(param_1 + 0x90);
    }
    QHashData::free_helper(p_Var6);
  }
LAB_100a92b9c:
  p_Var6 = *(_func_void_Node_ptr **)(param_1 + 0x88);
  if (*(int *)(p_Var6 + 0x10) != -1) {
    if (*(int *)(p_Var6 + 0x10) != 0) {
      LOCK();
      pcVar2 = p_Var6 + 0x10;
      *(int *)pcVar2 = *(int *)pcVar2 + -1;
      UNLOCK();
      if (*(int *)pcVar2 != 0) goto LAB_100a92bd1;
      p_Var6 = *(_func_void_Node_ptr **)(param_1 + 0x88);
    }
    QHashData::free_helper(p_Var6);
  }
LAB_100a92bd1:
  plVar3 = *(long **)(param_1 + 0x80);
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  QWaitCondition::~QWaitCondition((QWaitCondition *)(param_1 + 0x60));
  QMutex::~QMutex((QMutex *)(param_1 + 0x58));
  QMutex::~QMutex((QMutex *)(param_1 + 0x50));
  pQVar7 = *(QArrayData **)(param_1 + 0x48);
  if (*(int *)pQVar7 != -1) {
    if (*(int *)pQVar7 != 0) {
      LOCK();
      *(int *)pQVar7 = *(int *)pQVar7 + -1;
      UNLOCK();
      if (*(int *)pQVar7 != 0) goto LAB_100a92c40;
      pQVar7 = *(QArrayData **)(param_1 + 0x48);
    }
    QArrayData::deallocate(pQVar7,2,8);
  }
LAB_100a92c40:
  plVar3 = *(long **)(param_1 + 0x38);
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  pQVar7 = *(QArrayData **)(param_1 + 0x20);
  if (*(int *)pQVar7 != -1) {
    if (*(int *)pQVar7 != 0) {
      LOCK();
      *(int *)pQVar7 = *(int *)pQVar7 + -1;
      UNLOCK();
      if (*(int *)pQVar7 != 0) goto LAB_100a92c91;
      pQVar7 = *(QArrayData **)(param_1 + 0x20);
    }
    QArrayData::deallocate(pQVar7,2,8);
  }
LAB_100a92c91:
  QThread::~QThread(param_1);
  return;
}

