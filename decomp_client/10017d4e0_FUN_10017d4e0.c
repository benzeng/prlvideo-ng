
void FUN_10017d4e0(QObject *param_1)

{
  code *pcVar1;
  QObject *pQVar2;
  QObject *pQVar3;
  _func_void_Node_ptr *p_Var4;
  
  *(undefined ***)param_1 = &PTR_FUN_1021fd3a0;
  pQVar2 = param_1 + 0x10;
  FUN_10017e820(pQVar2);
  pQVar3 = param_1 + 0x18;
  FUN_10017e8c0(pQVar3);
  p_Var4 = *(_func_void_Node_ptr **)pQVar3;
  if (*(int *)(p_Var4 + 0x10) != -1) {
    if (*(int *)(p_Var4 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var4 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_10017d548;
      p_Var4 = *(_func_void_Node_ptr **)pQVar3;
    }
    QHashData::free_helper(p_Var4);
  }
LAB_10017d548:
  p_Var4 = *(_func_void_Node_ptr **)pQVar2;
  if (*(int *)(p_Var4 + 0x10) != -1) {
    if (*(int *)(p_Var4 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var4 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_10017d575;
      p_Var4 = *(_func_void_Node_ptr **)pQVar2;
    }
    QHashData::free_helper(p_Var4);
  }
LAB_10017d575:
  QObject::~QObject(param_1);
  return;
}

