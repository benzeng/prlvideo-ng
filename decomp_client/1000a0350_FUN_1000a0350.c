
void FUN_1000a0350(undefined8 *param_1)

{
  code *pcVar1;
  QMapNodeBase *pQVar2;
  _func_void_Node_ptr *p_Var3;
  
  *param_1 = &PTR_FUN_1021ee1b0;
  p_Var3 = (_func_void_Node_ptr *)param_1[0x13];
  if (*(int *)(p_Var3 + 0x10) != -1) {
    if (*(int *)(p_Var3 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var3 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_1000a03a1;
      p_Var3 = (_func_void_Node_ptr *)param_1[0x13];
    }
    QHashData::free_helper(p_Var3);
  }
LAB_1000a03a1:
  pQVar2 = (QMapNodeBase *)param_1[0x12];
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_1000a03e6;
      pQVar2 = (QMapNodeBase *)param_1[0x12];
    }
    if (*(long *)(pQVar2 + 0x10) != 0) {
      QMapDataBase::freeTree(pQVar2,(int)*(long *)(pQVar2 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar2);
  }
LAB_1000a03e6:
  param_1[5] = &PTR_FUN_10226c930;
  FUN_100a64f50(param_1 + 5);
  FUN_100a64e00(param_1 + 5);
  QObject::~QObject((QObject *)(param_1 + 1));
  return;
}

