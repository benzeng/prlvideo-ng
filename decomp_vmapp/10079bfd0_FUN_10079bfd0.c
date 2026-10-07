
void FUN_10079bfd0(QThread *param_1)

{
  long *plVar1;
  code *pcVar2;
  long *plVar3;
  long lVar4;
  _func_void_Node_ptr *p_Var5;
  QArrayData *pQVar6;
  
  *(undefined ***)param_1 = &PTR_metaObject_100bcf2b0;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_100bcf340;
  FUN_10079c8d0();
  pQVar6 = *(QArrayData **)(param_1 + 0x388);
  if (*(int *)pQVar6 != -1) {
    if (*(int *)pQVar6 != 0) {
      LOCK();
      *(int *)pQVar6 = *(int *)pQVar6 + -1;
      UNLOCK();
      if (*(int *)pQVar6 != 0) goto LAB_10079c02d;
      pQVar6 = *(QArrayData **)(param_1 + 0x388);
    }
    QArrayData::deallocate(pQVar6,1,8);
  }
LAB_10079c02d:
  FUN_1000697c0(param_1 + 0x350);
  plVar3 = *(long **)(param_1 + 800);
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
  plVar3 = *(long **)(param_1 + 0x318);
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
  plVar3 = *(long **)(param_1 + 0x308);
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
  plVar3 = *(long **)(param_1 + 0x300);
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
  plVar3 = *(long **)(param_1 + 0x2f8);
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
  p_Var5 = *(_func_void_Node_ptr **)(param_1 + 0x2e0);
  if (*(int *)(p_Var5 + 0x10) != -1) {
    if (*(int *)(p_Var5 + 0x10) != 0) {
      LOCK();
      pcVar2 = p_Var5 + 0x10;
      *(int *)pcVar2 = *(int *)pcVar2 + -1;
      UNLOCK();
      if (*(int *)pcVar2 != 0) goto LAB_10079c122;
      p_Var5 = *(_func_void_Node_ptr **)(param_1 + 0x2e0);
    }
    QHashData::free_helper(p_Var5);
  }
LAB_10079c122:
  FUN_1007c7560(param_1 + 400);
  p_Var5 = *(_func_void_Node_ptr **)(param_1 + 0x188);
  if (*(int *)(p_Var5 + 0x10) != -1) {
    if (*(int *)(p_Var5 + 0x10) != 0) {
      LOCK();
      pcVar2 = p_Var5 + 0x10;
      *(int *)pcVar2 = *(int *)pcVar2 + -1;
      UNLOCK();
      if (*(int *)pcVar2 != 0) goto LAB_10079c16a;
      p_Var5 = *(_func_void_Node_ptr **)(param_1 + 0x188);
    }
    QHashData::free_helper(p_Var5);
  }
LAB_10079c16a:
  p_Var5 = *(_func_void_Node_ptr **)(param_1 + 0x180);
  if (*(int *)(p_Var5 + 0x10) != -1) {
    if (*(int *)(p_Var5 + 0x10) != 0) {
      LOCK();
      pcVar2 = p_Var5 + 0x10;
      *(int *)pcVar2 = *(int *)pcVar2 + -1;
      UNLOCK();
      if (*(int *)pcVar2 != 0) goto LAB_10079c19f;
      p_Var5 = *(_func_void_Node_ptr **)(param_1 + 0x180);
    }
    QHashData::free_helper(p_Var5);
  }
LAB_10079c19f:
  QReadWriteLock::~QReadWriteLock((QReadWriteLock *)(param_1 + 0x168));
  pQVar6 = *(QArrayData **)(param_1 + 0x160);
  if (*(int *)pQVar6 != -1) {
    if (*(int *)pQVar6 != 0) {
      LOCK();
      *(int *)pQVar6 = *(int *)pQVar6 + -1;
      UNLOCK();
      if (*(int *)pQVar6 != 0) goto LAB_10079c1dd;
      pQVar6 = *(QArrayData **)(param_1 + 0x160);
    }
    QArrayData::deallocate(pQVar6,2,8);
  }
LAB_10079c1dd:
  pQVar6 = *(QArrayData **)(param_1 + 0xc0);
  if (*(int *)pQVar6 != -1) {
    if (*(int *)pQVar6 != 0) {
      LOCK();
      *(int *)pQVar6 = *(int *)pQVar6 + -1;
      UNLOCK();
      if (*(int *)pQVar6 != 0) goto LAB_10079c213;
      pQVar6 = *(QArrayData **)(param_1 + 0xc0);
    }
    QArrayData::deallocate(pQVar6,2,8);
  }
LAB_10079c213:
  pQVar6 = *(QArrayData **)(param_1 + 0xb8);
  if (*(int *)pQVar6 != -1) {
    if (*(int *)pQVar6 != 0) {
      LOCK();
      *(int *)pQVar6 = *(int *)pQVar6 + -1;
      UNLOCK();
      if (*(int *)pQVar6 != 0) goto LAB_10079c249;
      pQVar6 = *(QArrayData **)(param_1 + 0xb8);
    }
    QArrayData::deallocate(pQVar6,2,8);
  }
LAB_10079c249:
  QWaitCondition::~QWaitCondition((QWaitCondition *)(param_1 + 0x98));
  QWaitCondition::~QWaitCondition((QWaitCondition *)(param_1 + 0x90));
  QMutex::~QMutex((QMutex *)(param_1 + 0x88));
  QMutex::~QMutex((QMutex *)(param_1 + 0x80));
  plVar3 = *(long **)(param_1 + 0x60);
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
  pQVar6 = *(QArrayData **)(param_1 + 0x50);
  if (*(int *)pQVar6 != -1) {
    if (*(int *)pQVar6 != 0) {
      LOCK();
      *(int *)pQVar6 = *(int *)pQVar6 + -1;
      UNLOCK();
      if (*(int *)pQVar6 != 0) goto LAB_10079c2ca;
      pQVar6 = *(QArrayData **)(param_1 + 0x50);
    }
    QArrayData::deallocate(pQVar6,2,8);
  }
LAB_10079c2ca:
  pQVar6 = *(QArrayData **)(param_1 + 0x40);
  if (*(int *)pQVar6 != -1) {
    if (*(int *)pQVar6 != 0) {
      LOCK();
      *(int *)pQVar6 = *(int *)pQVar6 + -1;
      UNLOCK();
      if (*(int *)pQVar6 != 0) goto LAB_10079c2fa;
      pQVar6 = *(QArrayData **)(param_1 + 0x40);
    }
    QArrayData::deallocate(pQVar6,2,8);
  }
LAB_10079c2fa:
  plVar3 = *(long **)(param_1 + 0x20);
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
  pQVar6 = *(QArrayData **)(param_1 + 0x18);
  if (*(int *)pQVar6 != -1) {
    if (*(int *)pQVar6 != 0) {
      LOCK();
      *(int *)pQVar6 = *(int *)pQVar6 + -1;
      UNLOCK();
      if (*(int *)pQVar6 != 0) goto LAB_10079c34b;
      pQVar6 = *(QArrayData **)(param_1 + 0x18);
    }
    QArrayData::deallocate(pQVar6,2,8);
  }
LAB_10079c34b:
  QThread::~QThread(param_1);
  return;
}

