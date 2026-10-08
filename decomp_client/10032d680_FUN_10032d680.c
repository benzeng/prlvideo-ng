
void FUN_10032d680(undefined8 *param_1)

{
  long *plVar1;
  code *pcVar2;
  int iVar3;
  Node *pNVar4;
  Node *pNVar5;
  long *plVar6;
  _func_void_Node_ptr *p_Var7;
  
  *param_1 = &PTR_FUN_10220bd18;
  plVar1 = param_1 + 9;
  pNVar4 = (Node *)param_1[9];
  if (1 < *(uint *)(pNVar4 + 0x10)) {
    pNVar4 = (Node *)QHashData::detach_helper
                               ((_func_void_Node_ptr_void_ptr *)pNVar4,FUN_10032e220,0x32e1b0,0x28);
    p_Var7 = (_func_void_Node_ptr *)*plVar1;
    if (*(int *)(p_Var7 + 0x10) != -1) {
      if (*(int *)(p_Var7 + 0x10) != 0) {
        LOCK();
        pcVar2 = p_Var7 + 0x10;
        *(int *)pcVar2 = *(int *)pcVar2 + -1;
        UNLOCK();
        if (*(int *)pcVar2 != 0) goto LAB_10032d701;
        p_Var7 = (_func_void_Node_ptr *)*plVar1;
      }
      QHashData::free_helper(p_Var7);
    }
LAB_10032d701:
    *plVar1 = (long)pNVar4;
  }
  iVar3 = *(int *)(pNVar4 + 0x20);
  pNVar5 = pNVar4;
  if (iVar3 != 0) {
    plVar6 = *(long **)(pNVar4 + 8);
    do {
      pNVar5 = (Node *)*plVar6;
      if ((Node *)*plVar6 != pNVar4) break;
      iVar3 = iVar3 + -1;
      plVar6 = plVar6 + 1;
      pNVar5 = pNVar4;
    } while (iVar3 != 0);
  }
  if (1 < *(uint *)(pNVar4 + 0x10)) {
    pNVar4 = (Node *)QHashData::detach_helper
                               ((_func_void_Node_ptr_void_ptr *)pNVar4,FUN_10032e220,0x32e1b0,0x28);
    p_Var7 = (_func_void_Node_ptr *)*plVar1;
    if (*(int *)(p_Var7 + 0x10) != -1) {
      if (*(int *)(p_Var7 + 0x10) != 0) {
        LOCK();
        pcVar2 = p_Var7 + 0x10;
        *(int *)pcVar2 = *(int *)pcVar2 + -1;
        UNLOCK();
        if (*(int *)pcVar2 != 0) goto LAB_10032d78e;
        p_Var7 = (_func_void_Node_ptr *)*plVar1;
      }
      QHashData::free_helper(p_Var7);
    }
LAB_10032d78e:
    *plVar1 = (long)pNVar4;
  }
  for (; pNVar5 != pNVar4; pNVar5 = (Node *)QHashData::nextNode(pNVar5)) {
    if (((*(long *)(pNVar5 + 0x18) != 0) && (*(int *)(*(long *)(pNVar5 + 0x18) + 4) != 0)) &&
       (*(long **)(pNVar5 + 0x20) != (long *)0x0)) {
      (**(code **)(**(long **)(pNVar5 + 0x20) + 0x20))();
    }
  }
  FUN_10032ddf0(plVar1);
  p_Var7 = (_func_void_Node_ptr *)*plVar1;
  if (*(int *)(p_Var7 + 0x10) != -1) {
    if (*(int *)(p_Var7 + 0x10) != 0) {
      LOCK();
      pcVar2 = p_Var7 + 0x10;
      *(int *)pcVar2 = *(int *)pcVar2 + -1;
      UNLOCK();
      if (*(int *)pcVar2 != 0) goto LAB_10032d83a;
      p_Var7 = (_func_void_Node_ptr *)*plVar1;
    }
    QHashData::free_helper(p_Var7);
  }
LAB_10032d83a:
  FUN_100327dc0(param_1);
  return;
}

