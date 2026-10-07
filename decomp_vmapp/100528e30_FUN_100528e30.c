
void FUN_100528e30(long param_1)

{
  code *pcVar1;
  long *plVar2;
  int iVar3;
  Node *pNVar4;
  Node *pNVar5;
  undefined8 *puVar6;
  _func_void_Node_ptr *p_Var7;
  
  FUN_100529800(param_1 + 0x830);
  FUN_100529970(param_1 + 0x828);
  plVar2 = (long *)(param_1 + 0x838);
  pNVar4 = *(Node **)(param_1 + 0x838);
  if (*(uint *)(pNVar4 + 0x10) < 2) goto LAB_100528ec4;
  pNVar4 = (Node *)QHashData::detach_helper
                             ((_func_void_Node_ptr_void_ptr *)pNVar4,FUN_100529610,0x5292f0,0x18);
  p_Var7 = (_func_void_Node_ptr *)*plVar2;
  if (*(int *)(p_Var7 + 0x10) != -1) {
    if (*(int *)(p_Var7 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var7 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_100528ec1;
      p_Var7 = (_func_void_Node_ptr *)*plVar2;
    }
    QHashData::free_helper(p_Var7);
  }
LAB_100528ec1:
  *plVar2 = (long)pNVar4;
LAB_100528ec4:
  iVar3 = *(int *)(pNVar4 + 0x20);
  pNVar5 = pNVar4;
  if (iVar3 != 0) {
    puVar6 = *(undefined8 **)(pNVar4 + 8);
    do {
      pNVar5 = (Node *)*puVar6;
      if ((Node *)*puVar6 != pNVar4) break;
      iVar3 = iVar3 + -1;
      puVar6 = puVar6 + 1;
      pNVar5 = pNVar4;
    } while (iVar3 != 0);
  }
  do {
    if (1 < *(uint *)(pNVar4 + 0x10)) {
      pNVar4 = (Node *)QHashData::detach_helper
                                 ((_func_void_Node_ptr_void_ptr *)pNVar4,FUN_100529610,0x5292f0,0x18
                                 );
      p_Var7 = (_func_void_Node_ptr *)*plVar2;
      if (*(int *)(p_Var7 + 0x10) != -1) {
        if (*(int *)(p_Var7 + 0x10) != 0) {
          LOCK();
          pcVar1 = p_Var7 + 0x10;
          *(int *)pcVar1 = *(int *)pcVar1 + -1;
          UNLOCK();
          if (*(int *)pcVar1 != 0) goto LAB_100528f67;
          p_Var7 = (_func_void_Node_ptr *)*plVar2;
        }
        QHashData::free_helper(p_Var7);
      }
LAB_100528f67:
      *plVar2 = (long)pNVar4;
    }
    if (pNVar5 == pNVar4) {
      FUN_100529800(plVar2);
      FUN_100529800(param_1 + 0x840);
      *(undefined1 *)(param_1 + 0x820) = 0;
      *(undefined4 *)(param_1 + 0x824) = 0;
      return;
    }
    if (*(long *)(pNVar5 + 0x10) != 0) {
      *(undefined4 *)(*(long *)(pNVar5 + 0x10) + 0x90) = 0;
    }
    pNVar5 = (Node *)QHashData::nextNode(pNVar5);
    pNVar4 = (Node *)*plVar2;
  } while( true );
}

