
void FUN_1003231d0(long param_1)

{
  Node *pNVar1;
  int iVar2;
  Node *pNVar3;
  Node *pNVar4;
  undefined8 *puVar5;
  
  pNVar4 = *(Node **)(param_1 + 0x20);
  if (1 < *(int *)(pNVar4 + 0x10) + 1U) {
    LOCK();
    *(int *)(pNVar4 + 0x10) = *(int *)(pNVar4 + 0x10) + 1;
    UNLOCK();
  }
  pNVar3 = pNVar4;
  if ((((byte)pNVar4[0x28] & 1) == 0) && (1 < *(uint *)(pNVar4 + 0x10))) {
    pNVar3 = (Node *)QHashData::detach_helper
                               ((_func_void_Node_ptr_void_ptr *)pNVar4,FUN_100327ba0,0x327b60,0x38);
    if (*(int *)(pNVar4 + 0x10) != -1) {
      if (*(int *)(pNVar4 + 0x10) != 0) {
        LOCK();
        pNVar1 = pNVar4 + 0x10;
        *(int *)pNVar1 = *(int *)pNVar1 + -1;
        UNLOCK();
        if (*(int *)pNVar1 != 0) goto LAB_10032325e;
      }
      QHashData::free_helper((_func_void_Node_ptr *)pNVar4);
    }
  }
LAB_10032325e:
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
  for (; pNVar4 != pNVar3; pNVar4 = (Node *)QHashData::nextNode(pNVar4)) {
    if (((*(long *)(pNVar4 + 0x28) != 0) && (*(int *)(*(long *)(pNVar4 + 0x28) + 4) != 0)) &&
       (*(long *)(pNVar4 + 0x30) != 0)) {
      FUN_100354640();
    }
  }
  if (*(int *)(pNVar3 + 0x10) != -1) {
    if (*(int *)(pNVar3 + 0x10) != 0) {
      LOCK();
      pNVar4 = pNVar3 + 0x10;
      *(int *)pNVar4 = *(int *)pNVar4 + -1;
      UNLOCK();
      if (*(int *)pNVar4 != 0) {
        return;
      }
    }
    QHashData::free_helper((_func_void_Node_ptr *)pNVar3);
  }
  return;
}

