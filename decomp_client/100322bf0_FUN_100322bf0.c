
void FUN_100322bf0(QObject *param_1)

{
  QObject *pQVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  Node *pNVar5;
  Node *pNVar6;
  long *plVar7;
  _func_void_Node_ptr *p_Var8;
  
  *(undefined **)param_1 = &DAT_1021ef980;
  FUN_100322e30(param_1,0);
  pQVar1 = param_1 + 0x20;
  pNVar5 = *(Node **)(param_1 + 0x20);
  if (1 < *(uint *)(pNVar5 + 0x10)) {
    pNVar5 = (Node *)QHashData::detach_helper
                               ((_func_void_Node_ptr_void_ptr *)pNVar5,FUN_100327ba0,0x327b60,0x38);
    p_Var8 = *(_func_void_Node_ptr **)pQVar1;
    if (*(int *)(p_Var8 + 0x10) != -1) {
      if (*(int *)(p_Var8 + 0x10) != 0) {
        LOCK();
        pcVar2 = p_Var8 + 0x10;
        *(int *)pcVar2 = *(int *)pcVar2 + -1;
        UNLOCK();
        if (*(int *)pcVar2 != 0) goto LAB_100322c75;
        p_Var8 = *(_func_void_Node_ptr **)pQVar1;
      }
      QHashData::free_helper(p_Var8);
    }
LAB_100322c75:
    *(Node **)pQVar1 = pNVar5;
  }
  iVar4 = *(int *)(pNVar5 + 0x20);
  pNVar6 = pNVar5;
  if (iVar4 != 0) {
    plVar7 = *(long **)(pNVar5 + 8);
    do {
      pNVar6 = (Node *)*plVar7;
      if ((Node *)*plVar7 != pNVar5) break;
      iVar4 = iVar4 + -1;
      plVar7 = plVar7 + 1;
      pNVar6 = pNVar5;
    } while (iVar4 != 0);
  }
  if (1 < *(uint *)(pNVar5 + 0x10)) {
    pNVar5 = (Node *)QHashData::detach_helper
                               ((_func_void_Node_ptr_void_ptr *)pNVar5,FUN_100327ba0,0x327b60,0x38);
    p_Var8 = *(_func_void_Node_ptr **)pQVar1;
    if (*(int *)(p_Var8 + 0x10) != -1) {
      if (*(int *)(p_Var8 + 0x10) != 0) {
        LOCK();
        pcVar2 = p_Var8 + 0x10;
        *(int *)pcVar2 = *(int *)pcVar2 + -1;
        UNLOCK();
        if (*(int *)pcVar2 != 0) goto LAB_100322cff;
        p_Var8 = *(_func_void_Node_ptr **)pQVar1;
      }
      QHashData::free_helper(p_Var8);
    }
LAB_100322cff:
    *(Node **)pQVar1 = pNVar5;
  }
  if (pNVar6 != pNVar5) {
    do {
      if (((*(long *)(pNVar6 + 0x28) != 0) && (*(int *)(*(long *)(pNVar6 + 0x28) + 4) != 0)) &&
         (*(long **)(pNVar6 + 0x30) != (long *)0x0)) {
        (**(code **)(**(long **)(pNVar6 + 0x30) + 0x20))();
      }
      pNVar6 = (Node *)QHashData::nextNode(pNVar6);
    } while (pNVar6 != pNVar5);
    pNVar5 = *(Node **)pQVar1;
  }
  if (*(int *)(pNVar5 + 0x10) != -1) {
    if (*(int *)(pNVar5 + 0x10) != 0) {
      LOCK();
      pNVar5 = pNVar5 + 0x10;
      *(int *)pNVar5 = *(int *)pNVar5 + -1;
      UNLOCK();
      if (*(int *)pNVar5 != 0) goto LAB_100322d75;
      pNVar5 = *(Node **)pQVar1;
    }
    QHashData::free_helper((_func_void_Node_ptr *)pNVar5);
  }
LAB_100322d75:
  piVar3 = *(int **)(param_1 + 0x10);
  if (piVar3 != (int *)0x0) {
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if ((*piVar3 == 0) && (*(void **)(param_1 + 0x10) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x10));
    }
  }
  QObject::~QObject(param_1);
  return;
}

