
void FUN_10051bdd0(undefined8 *param_1)

{
  code *pcVar1;
  _func_void_Node_ptr *p_Var2;
  Data *pDVar3;
  
  *param_1 = &PTR_FUN_100bc4a40;
  param_1[5] = &PTR_FUN_100bc4ad0;
  p_Var2 = (_func_void_Node_ptr *)param_1[0x14];
  if (*(int *)(p_Var2 + 0x10) != -1) {
    if (*(int *)(p_Var2 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var2 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_10051be2b;
      p_Var2 = (_func_void_Node_ptr *)param_1[0x14];
    }
    QHashData::free_helper(p_Var2);
  }
LAB_10051be2b:
  QMutex::~QMutex((QMutex *)(param_1 + 0x13));
  p_Var2 = (_func_void_Node_ptr *)param_1[0x12];
  if (*(int *)(p_Var2 + 0x10) != -1) {
    if (*(int *)(p_Var2 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var2 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_10051be6c;
      p_Var2 = (_func_void_Node_ptr *)param_1[0x12];
    }
    QHashData::free_helper(p_Var2);
  }
LAB_10051be6c:
  QMutex::~QMutex((QMutex *)(param_1 + 0x11));
  if ((long *)param_1[0xf] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xf] + 8))();
  }
  pDVar3 = (Data *)param_1[0xe];
  if (*(int *)pDVar3 != -1) {
    if (*(int *)pDVar3 != 0) {
      LOCK();
      *(int *)pDVar3 = *(int *)pDVar3 + -1;
      UNLOCK();
      if (*(int *)pDVar3 != 0) goto LAB_10051beb0;
      pDVar3 = (Data *)param_1[0xe];
    }
    QListData::dispose(pDVar3);
  }
LAB_10051beb0:
  pDVar3 = (Data *)param_1[0xd];
  if (*(int *)pDVar3 != -1) {
    if (*(int *)pDVar3 != 0) {
      LOCK();
      *(int *)pDVar3 = *(int *)pDVar3 + -1;
      UNLOCK();
      if (*(int *)pDVar3 != 0) goto LAB_10051bed6;
      pDVar3 = (Data *)param_1[0xd];
    }
    QListData::dispose(pDVar3);
  }
LAB_10051bed6:
  FUN_1005192c0(param_1 + 5);
  FUN_1004c0680(param_1);
  return;
}

