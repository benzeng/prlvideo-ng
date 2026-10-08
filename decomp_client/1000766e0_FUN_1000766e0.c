
void FUN_1000766e0(undefined8 *param_1)

{
  code *pcVar1;
  _func_void_Node_ptr *p_Var2;
  QArrayData *pQVar3;
  
  p_Var2 = (_func_void_Node_ptr *)param_1[3];
  if (*(int *)(p_Var2 + 0x10) != -1) {
    if (*(int *)(p_Var2 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var2 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_10007671d;
      p_Var2 = (_func_void_Node_ptr *)param_1[3];
    }
    QHashData::free_helper(p_Var2);
  }
LAB_10007671d:
  p_Var2 = (_func_void_Node_ptr *)param_1[2];
  if (*(int *)(p_Var2 + 0x10) != -1) {
    if (*(int *)(p_Var2 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var2 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_10007674c;
      p_Var2 = (_func_void_Node_ptr *)param_1[2];
    }
    QHashData::free_helper(p_Var2);
  }
LAB_10007674c:
  pQVar3 = (QArrayData *)*param_1;
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) {
        return;
      }
      pQVar3 = (QArrayData *)*param_1;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
  return;
}

