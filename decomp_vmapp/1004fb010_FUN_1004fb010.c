
void FUN_1004fb010(undefined8 *param_1)

{
  code *pcVar1;
  QArrayData *pQVar2;
  _func_void_Node_ptr *p_Var3;
  
  *param_1 = &PTR_FUN_100bc3da8;
  pQVar2 = (QArrayData *)param_1[7];
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_1004fb053;
      pQVar2 = (QArrayData *)param_1[7];
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_1004fb053:
  pQVar2 = (QArrayData *)param_1[6];
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_1004fb083;
      pQVar2 = (QArrayData *)param_1[6];
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_1004fb083:
  p_Var3 = (_func_void_Node_ptr *)param_1[5];
  if (*(int *)(p_Var3 + 0x10) != -1) {
    if (*(int *)(p_Var3 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var3 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_1004fb0b2;
      p_Var3 = (_func_void_Node_ptr *)param_1[5];
    }
    QHashData::free_helper(p_Var3);
  }
LAB_1004fb0b2:
  p_Var3 = (_func_void_Node_ptr *)param_1[4];
  if (*(int *)(p_Var3 + 0x10) != -1) {
    if (*(int *)(p_Var3 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var3 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_1004fb0e1;
      p_Var3 = (_func_void_Node_ptr *)param_1[4];
    }
    QHashData::free_helper(p_Var3);
  }
LAB_1004fb0e1:
  p_Var3 = (_func_void_Node_ptr *)param_1[3];
  if (*(int *)(p_Var3 + 0x10) != -1) {
    if (*(int *)(p_Var3 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var3 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_1004fb110;
      p_Var3 = (_func_void_Node_ptr *)param_1[3];
    }
    QHashData::free_helper(p_Var3);
  }
LAB_1004fb110:
  QMutex::~QMutex((QMutex *)(param_1 + 2));
  return;
}

