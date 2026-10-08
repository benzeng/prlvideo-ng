
int FUN_1000a97b0(long param_1,uint param_2)

{
  code *pcVar1;
  int iVar2;
  Node *pNVar3;
  Node *pNVar4;
  long *plVar5;
  _func_void_Node_ptr *p_Var6;
  
  pNVar3 = *(Node **)(param_1 + 0x10);
  if (1 < *(uint *)(pNVar3 + 0x10)) {
    pNVar3 = (Node *)QHashData::detach_helper
                               ((_func_void_Node_ptr_void_ptr *)pNVar3,FUN_1000aaf90,0xaafd0,0x20);
    p_Var6 = *(_func_void_Node_ptr **)(param_1 + 0x10);
    if (*(int *)(p_Var6 + 0x10) != -1) {
      if (*(int *)(p_Var6 + 0x10) != 0) {
        LOCK();
        pcVar1 = p_Var6 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        UNLOCK();
        if (*(int *)pcVar1 != 0) goto LAB_1000a9823;
        p_Var6 = *(_func_void_Node_ptr **)(param_1 + 0x10);
      }
      QHashData::free_helper(p_Var6);
    }
LAB_1000a9823:
    *(Node **)(param_1 + 0x10) = pNVar3;
  }
  iVar2 = *(int *)(pNVar3 + 0x20);
  pNVar4 = pNVar3;
  if (iVar2 != 0) {
    plVar5 = *(long **)(pNVar3 + 8);
    do {
      pNVar4 = (Node *)*plVar5;
      if ((Node *)*plVar5 != pNVar3) break;
      iVar2 = iVar2 + -1;
      plVar5 = plVar5 + 1;
      pNVar4 = pNVar3;
    } while (iVar2 != 0);
  }
  if (*(uint *)(pNVar3 + 0x10) < 2) goto LAB_1000a98b4;
  pNVar3 = (Node *)QHashData::detach_helper
                             ((_func_void_Node_ptr_void_ptr *)pNVar3,FUN_1000aaf90,0xaafd0,0x20);
  p_Var6 = *(_func_void_Node_ptr **)(param_1 + 0x10);
  if (*(int *)(p_Var6 + 0x10) != -1) {
    if (*(int *)(p_Var6 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var6 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_1000a98b0;
      p_Var6 = *(_func_void_Node_ptr **)(param_1 + 0x10);
    }
    QHashData::free_helper(p_Var6);
  }
LAB_1000a98b0:
  *(Node **)(param_1 + 0x10) = pNVar3;
LAB_1000a98b4:
  iVar2 = 0;
  for (; pNVar3 != pNVar4; pNVar4 = (Node *)QHashData::nextNode(pNVar4)) {
    iVar2 = (iVar2 + 1) - (uint)((*(uint *)(*(long *)(pNVar4 + 0x18) + 0x28) & param_2) == 0);
  }
  return iVar2;
}

