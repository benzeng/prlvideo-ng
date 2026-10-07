
void FUN_1004fdd90(undefined8 *param_1)

{
  code *pcVar1;
  _func_void_Node_ptr *p_Var2;
  QArrayData *pQVar3;
  
  *param_1 = &PTR_FUN_100bc3e68;
  p_Var2 = (_func_void_Node_ptr *)param_1[4];
  if (*(int *)(p_Var2 + 0x10) != -1) {
    if (*(int *)(p_Var2 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var2 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_1004fddd2;
      p_Var2 = (_func_void_Node_ptr *)param_1[4];
    }
    QHashData::free_helper(p_Var2);
  }
LAB_1004fddd2:
  QMutex::~QMutex((QMutex *)(param_1 + 3));
  pQVar3 = (QArrayData *)param_1[2];
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) {
        return;
      }
      pQVar3 = (QArrayData *)param_1[2];
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
  return;
}

