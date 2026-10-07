
void FUN_1007b8870(QThread *param_1)

{
  long *plVar1;
  code *pcVar2;
  long *plVar3;
  long lVar4;
  int *piVar5;
  _func_void_Node_ptr *p_Var6;
  QArrayData *pQVar7;
  
  *(undefined ***)param_1 = &PTR_metaObject_100bcf430;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_100bcf4d0;
  *(undefined ***)(param_1 + 0x18) = &PTR_FUN_100bcf538;
  FUN_1007b8db0();
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
      if (*(int *)pcVar2 != 0) goto LAB_1007b88fc;
      p_Var6 = *(_func_void_Node_ptr **)(param_1 + 0xd8);
    }
    QHashData::free_helper(p_Var6);
  }
LAB_1007b88fc:
  piVar5 = *(int **)(param_1 + 0xd0);
  if (*piVar5 != -1) {
    if (*piVar5 != 0) {
      LOCK();
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (*piVar5 != 0) goto LAB_1007b892b;
      piVar5 = *(int **)(param_1 + 0xd0);
    }
    FUN_1007c45a0(param_1 + 0xd0,piVar5);
  }
LAB_1007b892b:
  QWaitCondition::~QWaitCondition((QWaitCondition *)(param_1 + 200));
  FUN_1000697c0(param_1 + 0xa8);
  p_Var6 = *(_func_void_Node_ptr **)(param_1 + 0xa0);
  if (*(int *)(p_Var6 + 0x10) != -1) {
    if (*(int *)(p_Var6 + 0x10) != 0) {
      LOCK();
      pcVar2 = p_Var6 + 0x10;
      *(int *)pcVar2 = *(int *)pcVar2 + -1;
      UNLOCK();
      if (*(int *)pcVar2 != 0) goto LAB_1007b8978;
      p_Var6 = *(_func_void_Node_ptr **)(param_1 + 0xa0);
    }
    QHashData::free_helper(p_Var6);
  }
LAB_1007b8978:
  piVar5 = *(int **)(param_1 + 0x98);
  if (*piVar5 != -1) {
    if (*piVar5 != 0) {
      LOCK();
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (*piVar5 != 0) goto LAB_1007b89a7;
      piVar5 = *(int **)(param_1 + 0x98);
    }
    FUN_1007c4450(param_1 + 0x98,piVar5);
  }
LAB_1007b89a7:
  p_Var6 = *(_func_void_Node_ptr **)(param_1 + 0x90);
  if (*(int *)(p_Var6 + 0x10) != -1) {
    if (*(int *)(p_Var6 + 0x10) != 0) {
      LOCK();
      pcVar2 = p_Var6 + 0x10;
      *(int *)pcVar2 = *(int *)pcVar2 + -1;
      UNLOCK();
      if (*(int *)pcVar2 != 0) goto LAB_1007b89dc;
      p_Var6 = *(_func_void_Node_ptr **)(param_1 + 0x90);
    }
    QHashData::free_helper(p_Var6);
  }
LAB_1007b89dc:
  p_Var6 = *(_func_void_Node_ptr **)(param_1 + 0x88);
  if (*(int *)(p_Var6 + 0x10) != -1) {
    if (*(int *)(p_Var6 + 0x10) != 0) {
      LOCK();
      pcVar2 = p_Var6 + 0x10;
      *(int *)pcVar2 = *(int *)pcVar2 + -1;
      UNLOCK();
      if (*(int *)pcVar2 != 0) goto LAB_1007b8a11;
      p_Var6 = *(_func_void_Node_ptr **)(param_1 + 0x88);
    }
    QHashData::free_helper(p_Var6);
  }
LAB_1007b8a11:
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
      if (*(int *)pQVar7 != 0) goto LAB_1007b8a80;
      pQVar7 = *(QArrayData **)(param_1 + 0x48);
    }
    QArrayData::deallocate(pQVar7,2,8);
  }
LAB_1007b8a80:
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
      if (*(int *)pQVar7 != 0) goto LAB_1007b8ad1;
      pQVar7 = *(QArrayData **)(param_1 + 0x20);
    }
    QArrayData::deallocate(pQVar7,2,8);
  }
LAB_1007b8ad1:
  QThread::~QThread(param_1);
  return;
}

