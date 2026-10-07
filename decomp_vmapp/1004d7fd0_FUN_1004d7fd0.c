
void FUN_1004d7fd0(undefined8 *param_1)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  QMapNodeBase *pQVar5;
  _func_void_Node_ptr *p_Var6;
  QArrayData *pQVar7;
  
  *param_1 = &PTR_FUN_100bc3140;
  p_Var6 = (_func_void_Node_ptr *)param_1[0x11];
  if (*(int *)(p_Var6 + 0x10) != -1) {
    if (*(int *)(p_Var6 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var6 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_1004d801d;
      p_Var6 = (_func_void_Node_ptr *)param_1[0x11];
    }
    QHashData::free_helper(p_Var6);
  }
LAB_1004d801d:
  plVar3 = (long *)param_1[0x10];
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
  p_Var6 = (_func_void_Node_ptr *)param_1[0xe];
  if (*(int *)(p_Var6 + 0x10) != -1) {
    if (*(int *)(p_Var6 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var6 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_1004d8070;
      p_Var6 = (_func_void_Node_ptr *)param_1[0xe];
    }
    QHashData::free_helper(p_Var6);
  }
LAB_1004d8070:
  pQVar5 = (QMapNodeBase *)param_1[8];
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      UNLOCK();
      if (*(int *)pQVar5 != 0) goto LAB_1004d80b8;
      pQVar5 = (QMapNodeBase *)param_1[8];
    }
    if (*(long *)(pQVar5 + 0x10) != 0) {
      FUN_1004ebe70();
      QMapDataBase::freeTree(pQVar5,(int)*(undefined8 *)(pQVar5 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar5);
  }
LAB_1004d80b8:
  QReadWriteLock::~QReadWriteLock((QReadWriteLock *)(param_1 + 7));
  pQVar7 = (QArrayData *)param_1[5];
  if (*(int *)pQVar7 != -1) {
    if (*(int *)pQVar7 != 0) {
      LOCK();
      *(int *)pQVar7 = *(int *)pQVar7 + -1;
      UNLOCK();
      if (*(int *)pQVar7 != 0) goto LAB_1004d80f1;
      pQVar7 = (QArrayData *)param_1[5];
    }
    QArrayData::deallocate(pQVar7,2,8);
  }
LAB_1004d80f1:
  pQVar7 = (QArrayData *)param_1[4];
  if (*(int *)pQVar7 != -1) {
    if (*(int *)pQVar7 != 0) {
      LOCK();
      *(int *)pQVar7 = *(int *)pQVar7 + -1;
      UNLOCK();
      if (*(int *)pQVar7 != 0) goto LAB_1004d8121;
      pQVar7 = (QArrayData *)param_1[4];
    }
    QArrayData::deallocate(pQVar7,2,8);
  }
LAB_1004d8121:
  pQVar7 = (QArrayData *)param_1[3];
  if (*(int *)pQVar7 != -1) {
    if (*(int *)pQVar7 != 0) {
      LOCK();
      *(int *)pQVar7 = *(int *)pQVar7 + -1;
      UNLOCK();
      if (*(int *)pQVar7 != 0) goto LAB_1004d8151;
      pQVar7 = (QArrayData *)param_1[3];
    }
    QArrayData::deallocate(pQVar7,2,8);
  }
LAB_1004d8151:
  pQVar7 = (QArrayData *)param_1[2];
  if (*(int *)pQVar7 != -1) {
    if (*(int *)pQVar7 != 0) {
      LOCK();
      *(int *)pQVar7 = *(int *)pQVar7 + -1;
      UNLOCK();
      if (*(int *)pQVar7 != 0) {
        return;
      }
      pQVar7 = (QArrayData *)param_1[2];
    }
    QArrayData::deallocate(pQVar7,2,8);
  }
  return;
}

