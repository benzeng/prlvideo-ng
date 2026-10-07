
void FUN_10078e610(undefined8 *param_1)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  _func_void_Node_ptr *p_Var5;
  QArrayData *pQVar6;
  
  *param_1 = &PTR____cxa_pure_virtual_1011a57e0;
  p_Var5 = (_func_void_Node_ptr *)param_1[10];
  if (*(int *)(p_Var5 + 0x10) != -1) {
    if (*(int *)(p_Var5 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var5 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_10078e65a;
      p_Var5 = (_func_void_Node_ptr *)param_1[10];
    }
    QHashData::free_helper(p_Var5);
  }
LAB_10078e65a:
  p_Var5 = (_func_void_Node_ptr *)param_1[9];
  if (*(int *)(p_Var5 + 0x10) != -1) {
    if (*(int *)(p_Var5 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var5 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_10078e689;
      p_Var5 = (_func_void_Node_ptr *)param_1[9];
    }
    QHashData::free_helper(p_Var5);
  }
LAB_10078e689:
  QReadWriteLock::~QReadWriteLock((QReadWriteLock *)(param_1 + 6));
  plVar3 = (long *)param_1[5];
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar2 = plVar3 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  pQVar6 = (QArrayData *)param_1[3];
  if (*(int *)pQVar6 != -1) {
    if (*(int *)pQVar6 != 0) {
      LOCK();
      *(int *)pQVar6 = *(int *)pQVar6 + -1;
      UNLOCK();
      if (*(int *)pQVar6 != 0) goto LAB_10078e6e2;
      pQVar6 = (QArrayData *)param_1[3];
    }
    QArrayData::deallocate(pQVar6,2,8);
  }
LAB_10078e6e2:
  plVar3 = (long *)param_1[1];
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar2 = plVar3 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  return;
}

