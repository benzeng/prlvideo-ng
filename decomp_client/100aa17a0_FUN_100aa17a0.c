
void FUN_100aa17a0(QThread *param_1)

{
  long *plVar1;
  code *pcVar2;
  long *plVar3;
  long lVar4;
  _func_void_Node_ptr *p_Var5;
  QArrayData *pQVar6;
  
  *(undefined ***)param_1 = &PTR_FUN_102239b50;
  FUN_100aa1c00();
  plVar3 = *(long **)(param_1 + 0x120);
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
  QMutex::~QMutex((QMutex *)(param_1 + 0x118));
  QMutex::~QMutex((QMutex *)(param_1 + 0x110));
  QWaitCondition::~QWaitCondition((QWaitCondition *)(param_1 + 0x108));
  QWaitCondition::~QWaitCondition((QWaitCondition *)(param_1 + 0x100));
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
  plVar3 = *(long **)(param_1 + 0xe0);
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
  plVar3 = *(long **)(param_1 + 200);
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
  p_Var5 = *(_func_void_Node_ptr **)(param_1 + 0xc0);
  if (*(int *)(p_Var5 + 0x10) != -1) {
    if (*(int *)(p_Var5 + 0x10) != 0) {
      LOCK();
      pcVar2 = p_Var5 + 0x10;
      *(int *)pcVar2 = *(int *)pcVar2 + -1;
      UNLOCK();
      if (*(int *)pcVar2 != 0) goto LAB_100aa18bc;
      p_Var5 = *(_func_void_Node_ptr **)(param_1 + 0xc0);
    }
    QHashData::free_helper(p_Var5);
  }
LAB_100aa18bc:
  p_Var5 = *(_func_void_Node_ptr **)(param_1 + 0xb8);
  if (*(int *)(p_Var5 + 0x10) != -1) {
    if (*(int *)(p_Var5 + 0x10) != 0) {
      LOCK();
      pcVar2 = p_Var5 + 0x10;
      *(int *)pcVar2 = *(int *)pcVar2 + -1;
      UNLOCK();
      if (*(int *)pcVar2 != 0) goto LAB_100aa18f1;
      p_Var5 = *(_func_void_Node_ptr **)(param_1 + 0xb8);
    }
    QHashData::free_helper(p_Var5);
  }
LAB_100aa18f1:
  QReadWriteLock::~QReadWriteLock((QReadWriteLock *)(param_1 + 0xa0));
  plVar3 = *(long **)(param_1 + 0x18);
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
  pQVar6 = *(QArrayData **)(param_1 + 0x10);
  if (*(int *)pQVar6 != -1) {
    if (*(int *)pQVar6 != 0) {
      LOCK();
      *(int *)pQVar6 = *(int *)pQVar6 + -1;
      UNLOCK();
      if (*(int *)pQVar6 != 0) goto LAB_100aa194a;
      pQVar6 = *(QArrayData **)(param_1 + 0x10);
    }
    QArrayData::deallocate(pQVar6,2,8);
  }
LAB_100aa194a:
  QThread::~QThread(param_1);
  return;
}

