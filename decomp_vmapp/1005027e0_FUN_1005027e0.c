
Node * FUN_1005027e0(long *param_1,Node *param_2)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  Node *pNVar4;
  Node *pNVar5;
  Node *pNVar6;
  int iVar7;
  _func_void_Node_ptr *p_Var8;
  
  pNVar5 = (Node *)*param_1;
  if (pNVar5 == param_2) {
    return param_2;
  }
  if (*(uint *)(pNVar5 + 0x10) < 2) goto LAB_1005028c2;
  uVar2 = *(uint *)(param_2 + 8);
  iVar7 = 0;
  uVar3 = *(uint *)(pNVar5 + 0x20);
  pNVar4 = *(Node **)(*(long *)(pNVar5 + 8) + (long)(int)(uVar2 % uVar3) * 8);
  if (pNVar4 == param_2) {
LAB_100502849:
    pNVar5 = (Node *)QHashData::detach_helper
                               ((_func_void_Node_ptr_void_ptr *)pNVar5,FUN_100479fd0,0x471cc0,0x20);
    p_Var8 = (_func_void_Node_ptr *)*param_1;
    if (*(int *)(p_Var8 + 0x10) != -1) {
      if (*(int *)(p_Var8 + 0x10) != 0) {
        LOCK();
        pcVar1 = p_Var8 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        UNLOCK();
        if (*(int *)pcVar1 != 0) goto LAB_10050289a;
        p_Var8 = (_func_void_Node_ptr *)*param_1;
      }
      QHashData::free_helper(p_Var8);
    }
LAB_10050289a:
    *param_1 = (long)pNVar5;
  }
  else {
    do {
      iVar7 = iVar7 + 1;
      pNVar4 = (Node *)QHashData::nextNode(pNVar4);
    } while (pNVar4 != param_2);
    pNVar5 = (Node *)*param_1;
    if (1 < *(uint *)(pNVar5 + 0x10)) goto LAB_100502849;
  }
  param_2 = *(Node **)(*(long *)(pNVar5 + 8) + (long)(int)(uVar2 % uVar3) * 8);
  if (0 < iVar7) {
    iVar7 = iVar7 + 1;
    do {
      param_2 = (Node *)QHashData::nextNode(param_2);
      iVar7 = iVar7 + -1;
    } while (1 < iVar7);
  }
LAB_1005028c2:
  pNVar4 = (Node *)QHashData::nextNode(param_2);
  pNVar5 = (Node *)(((ulong)*(uint *)(param_2 + 8) % (ulong)*(uint *)(*param_1 + 0x20)) * 8 +
                   *(long *)(*param_1 + 8));
  do {
    pNVar6 = pNVar5;
    pNVar5 = *(Node **)pNVar6;
  } while (pNVar5 != param_2);
  *(long *)pNVar6 = *(long *)param_2;
  FUN_100471cc0(param_2);
  QHashData::freeNode((void *)*param_1);
  *(int *)(*param_1 + 0x14) = *(int *)(*param_1 + 0x14) + -1;
  return pNVar4;
}

