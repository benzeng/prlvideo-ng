
void FUN_100747070(QObject *param_1)

{
  code *pcVar1;
  QObject *pQVar2;
  Node *pNVar3;
  int iVar4;
  Node *pNVar5;
  long *plVar6;
  _func_void_Node_ptr *p_Var7;
  
  *(undefined ***)param_1 = &PTR_FUN_1021f62e0;
  pQVar2 = param_1 + 0x18;
  pNVar3 = *(Node **)(param_1 + 0x18);
  iVar4 = *(int *)(pNVar3 + 0x20);
  if (iVar4 != 0) {
    plVar6 = *(long **)(pNVar3 + 8);
    do {
      pNVar5 = (Node *)*plVar6;
      if (pNVar5 != pNVar3) goto LAB_1007470d0;
      iVar4 = iVar4 + -1;
      plVar6 = plVar6 + 1;
    } while (iVar4 != 0);
  }
LAB_1007470f2:
  FUN_100748420(pQVar2);
  p_Var7 = *(_func_void_Node_ptr **)pQVar2;
  if (*(int *)(p_Var7 + 0x10) != -1) {
    if (*(int *)(p_Var7 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var7 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_100747127;
      p_Var7 = *(_func_void_Node_ptr **)pQVar2;
    }
    QHashData::free_helper(p_Var7);
  }
LAB_100747127:
  QObject::~QObject(param_1);
  return;
LAB_1007470d0:
  do {
    if (*(long **)(pNVar5 + 0x18) != (long *)0x0) {
      (**(code **)(**(long **)(pNVar5 + 0x18) + 0x20))();
    }
    pNVar5 = (Node *)QHashData::nextNode(pNVar5);
  } while (pNVar5 != pNVar3);
  goto LAB_1007470f2;
}

