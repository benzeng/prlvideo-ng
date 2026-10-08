
int FUN_10032dad0(long param_1)

{
  Node *pNVar1;
  int iVar2;
  int iVar3;
  Node *pNVar4;
  Node *pNVar5;
  undefined8 *puVar6;
  
  pNVar5 = *(Node **)(param_1 + 0x48);
  if (1 < *(int *)(pNVar5 + 0x10) + 1U) {
    LOCK();
    *(int *)(pNVar5 + 0x10) = *(int *)(pNVar5 + 0x10) + 1;
    UNLOCK();
  }
  pNVar4 = pNVar5;
  if ((((byte)pNVar5[0x28] & 1) == 0) && (1 < *(uint *)(pNVar5 + 0x10))) {
    pNVar4 = (Node *)QHashData::detach_helper
                               ((_func_void_Node_ptr_void_ptr *)pNVar5,FUN_10032e220,0x32e1b0,0x28);
    if (*(int *)(pNVar5 + 0x10) != -1) {
      if (*(int *)(pNVar5 + 0x10) != 0) {
        LOCK();
        pNVar1 = pNVar5 + 0x10;
        *(int *)pNVar1 = *(int *)pNVar1 + -1;
        UNLOCK();
        if (*(int *)pNVar1 != 0) goto LAB_10032db69;
      }
      QHashData::free_helper((_func_void_Node_ptr *)pNVar5);
    }
  }
LAB_10032db69:
  iVar2 = *(int *)(pNVar4 + 0x20);
  pNVar5 = pNVar4;
  if (iVar2 != 0) {
    puVar6 = *(undefined8 **)(pNVar4 + 8);
    do {
      pNVar5 = (Node *)*puVar6;
      if ((Node *)*puVar6 != pNVar4) break;
      iVar2 = iVar2 + -1;
      puVar6 = puVar6 + 1;
      pNVar5 = pNVar4;
    } while (iVar2 != 0);
  }
  iVar2 = 0;
  for (; pNVar5 != pNVar4; pNVar5 = (Node *)QHashData::nextNode(pNVar5)) {
    if ((((*(long *)(pNVar5 + 0x18) != 0) && (*(int *)(*(long *)(pNVar5 + 0x18) + 4) != 0)) &&
        (*(long *)(pNVar5 + 0x20) != 0)) &&
       ((*(long *)(*(long *)(pNVar5 + 0x20) + 0x20) == 0 && (iVar3 = FUN_10032c2a0(), iVar3 < 0))))
    {
      iVar2 = iVar3;
    }
  }
  if (*(int *)(pNVar4 + 0x10) != -1) {
    if (*(int *)(pNVar4 + 0x10) != 0) {
      LOCK();
      pNVar5 = pNVar4 + 0x10;
      *(int *)pNVar5 = *(int *)pNVar5 + -1;
      UNLOCK();
      if (*(int *)pNVar5 != 0) {
        return iVar2;
      }
    }
    QHashData::free_helper((_func_void_Node_ptr *)pNVar4);
  }
  return iVar2;
}

