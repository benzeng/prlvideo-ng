
void FUN_1000f5ae0(long param_1)

{
  code *pcVar1;
  int iVar2;
  Node *pNVar3;
  Node *pNVar4;
  undefined8 *puVar5;
  long *plVar6;
  _func_void_Node_ptr *p_Var7;
  
  plVar6 = (long *)0x0;
  if (*(long *)(param_1 + 0x40) != 0) {
    plVar6 = *(long **)(*(long *)(param_1 + 0x40) + 0x10);
  }
  pNVar3 = (Node *)*plVar6;
  if (*(uint *)(pNVar3 + 0x10) < 2) goto LAB_1000f5b5f;
  pNVar3 = (Node *)QHashData::detach_helper
                             ((_func_void_Node_ptr_void_ptr *)pNVar3,FUN_1000f81e0,0xf8050,0x20);
  p_Var7 = (_func_void_Node_ptr *)*plVar6;
  if (*(int *)(p_Var7 + 0x10) != -1) {
    if (*(int *)(p_Var7 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var7 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_1000f5b5c;
      p_Var7 = (_func_void_Node_ptr *)*plVar6;
    }
    QHashData::free_helper(p_Var7);
  }
LAB_1000f5b5c:
  *plVar6 = (long)pNVar3;
LAB_1000f5b5f:
  iVar2 = *(int *)(pNVar3 + 0x20);
  pNVar4 = pNVar3;
  if (iVar2 != 0) {
    puVar5 = *(undefined8 **)(pNVar3 + 8);
    do {
      pNVar4 = (Node *)*puVar5;
      if ((Node *)*puVar5 != pNVar3) break;
      iVar2 = iVar2 + -1;
      puVar5 = puVar5 + 1;
      pNVar4 = pNVar3;
    } while (iVar2 != 0);
  }
  do {
    plVar6 = (long *)0x0;
    if (*(long *)(param_1 + 0x40) != 0) {
      plVar6 = *(long **)(*(long *)(param_1 + 0x40) + 0x10);
    }
    pNVar3 = (Node *)*plVar6;
    if (1 < *(uint *)(pNVar3 + 0x10)) {
      pNVar3 = (Node *)QHashData::detach_helper
                                 ((_func_void_Node_ptr_void_ptr *)pNVar3,FUN_1000f81e0,0xf8050,0x20)
      ;
      p_Var7 = (_func_void_Node_ptr *)*plVar6;
      if (*(int *)(p_Var7 + 0x10) != -1) {
        if (*(int *)(p_Var7 + 0x10) != 0) {
          LOCK();
          pcVar1 = p_Var7 + 0x10;
          *(int *)pcVar1 = *(int *)pcVar1 + -1;
          UNLOCK();
          if (*(int *)pcVar1 != 0) goto LAB_1000f5c15;
          p_Var7 = (_func_void_Node_ptr *)*plVar6;
        }
        QHashData::free_helper(p_Var7);
      }
LAB_1000f5c15:
      *plVar6 = (long)pNVar3;
    }
    if (pNVar4 == pNVar3) {
      return;
    }
    *(undefined4 *)(*(long *)(*(long *)(pNVar4 + 0x18) + 0x10) + 0x58) = 0;
    pNVar4 = (Node *)QHashData::nextNode(pNVar4);
  } while( true );
}

