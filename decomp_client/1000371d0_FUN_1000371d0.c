
void FUN_1000371d0(QObject *param_1)

{
  QObject *pQVar1;
  code *pcVar2;
  Node *pNVar3;
  int *piVar4;
  int iVar5;
  Node *pNVar6;
  long *plVar7;
  _func_void_Node_ptr *p_Var8;
  
  *(undefined ***)param_1 = &PTR_FUN_10222f380;
  QTimer::stop();
  pNVar3 = *(Node **)(param_1 + 0x28);
  iVar5 = *(int *)(pNVar3 + 0x20);
  if (iVar5 != 0) {
    plVar7 = *(long **)(pNVar3 + 8);
    do {
      pNVar6 = (Node *)*plVar7;
      if (pNVar6 != pNVar3) goto LAB_100037230;
      iVar5 = iVar5 + -1;
      plVar7 = plVar7 + 1;
    } while (iVar5 != 0);
  }
LAB_100037252:
  pQVar1 = param_1 + 0x28;
  FUN_100037ae0(pQVar1);
  FUN_1007334c0(*(undefined8 *)(param_1 + 0x20),0);
  p_Var8 = *(_func_void_Node_ptr **)pQVar1;
  if (*(int *)(p_Var8 + 0x10) != -1) {
    if (*(int *)(p_Var8 + 0x10) != 0) {
      LOCK();
      pcVar2 = p_Var8 + 0x10;
      *(int *)pcVar2 = *(int *)pcVar2 + -1;
      UNLOCK();
      if (*(int *)pcVar2 != 0) goto LAB_100037296;
      p_Var8 = *(_func_void_Node_ptr **)pQVar1;
    }
    QHashData::free_helper(p_Var8);
  }
LAB_100037296:
  piVar4 = *(int **)(param_1 + 0x10);
  if (piVar4 != (int *)0x0) {
    LOCK();
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if ((*piVar4 == 0) && (*(void **)(param_1 + 0x10) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x10));
    }
  }
  QObject::~QObject(param_1);
  return;
LAB_100037230:
  do {
    if (*(long **)(pNVar6 + 0x18) != (long *)0x0) {
      (**(code **)(**(long **)(pNVar6 + 0x18) + 0x20))();
    }
    pNVar6 = (Node *)QHashData::nextNode(pNVar6);
  } while (pNVar6 != pNVar3);
  goto LAB_100037252;
}

