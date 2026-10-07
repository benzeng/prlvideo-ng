
Node * FUN_1004d5130(long *param_1,Node *param_2)

{
  code *pcVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  Node *pNVar7;
  Node *pNVar8;
  Node *pNVar9;
  int iVar10;
  _func_void_Node_ptr *p_Var11;
  
  pNVar8 = (Node *)*param_1;
  if (pNVar8 == param_2) {
    return param_2;
  }
  if (*(uint *)(pNVar8 + 0x10) < 2) goto LAB_1004d5212;
  uVar3 = *(uint *)(param_2 + 8);
  iVar10 = 0;
  uVar4 = *(uint *)(pNVar8 + 0x20);
  pNVar7 = *(Node **)(*(long *)(pNVar8 + 8) + (long)(int)(uVar3 % uVar4) * 8);
  if (pNVar7 == param_2) {
LAB_1004d519a:
    pNVar8 = (Node *)QHashData::detach_helper
                               ((_func_void_Node_ptr_void_ptr *)pNVar8,FUN_1004d7090,0x4d6b40,0x18);
    p_Var11 = (_func_void_Node_ptr *)*param_1;
    if (*(int *)(p_Var11 + 0x10) != -1) {
      if (*(int *)(p_Var11 + 0x10) != 0) {
        LOCK();
        pcVar1 = p_Var11 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        UNLOCK();
        if (*(int *)pcVar1 != 0) goto LAB_1004d51eb;
        p_Var11 = (_func_void_Node_ptr *)*param_1;
      }
      QHashData::free_helper(p_Var11);
    }
LAB_1004d51eb:
    *param_1 = (long)pNVar8;
  }
  else {
    do {
      iVar10 = iVar10 + 1;
      pNVar7 = (Node *)QHashData::nextNode(pNVar7);
    } while (pNVar7 != param_2);
    pNVar8 = (Node *)*param_1;
    if (1 < *(uint *)(pNVar8 + 0x10)) goto LAB_1004d519a;
  }
  param_2 = *(Node **)(*(long *)(pNVar8 + 8) + (long)(int)(uVar3 % uVar4) * 8);
  if (0 < iVar10) {
    iVar10 = iVar10 + 1;
    do {
      param_2 = (Node *)QHashData::nextNode(param_2);
      iVar10 = iVar10 + -1;
    } while (1 < iVar10);
  }
LAB_1004d5212:
  pNVar7 = (Node *)QHashData::nextNode(param_2);
  pNVar8 = (Node *)(((ulong)*(uint *)(param_2 + 8) % (ulong)*(uint *)(*param_1 + 0x20)) * 8 +
                   *(long *)(*param_1 + 8));
  do {
    pNVar9 = pNVar8;
    pNVar8 = *(Node **)pNVar9;
  } while (pNVar8 != param_2);
  *(long *)pNVar9 = *(long *)param_2;
  plVar5 = *(long **)(param_2 + 0x10);
  if (plVar5 != (long *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  QHashData::freeNode((void *)*param_1);
  *(int *)(*param_1 + 0x14) = *(int *)(*param_1 + 0x14) + -1;
  return pNVar7;
}

