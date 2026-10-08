
void FUN_1001be970(long param_1,int param_2)

{
  int iVar1;
  Node *pNVar2;
  Node *pNVar3;
  undefined8 *puVar4;
  Node *pNVar5;
  
  if (param_2 != 0x3c7a) {
    return;
  }
  pNVar5 = *(Node **)(param_1 + 0x18);
  if (1 < *(int *)(pNVar5 + 0x10) + 1U) {
    LOCK();
    *(int *)(pNVar5 + 0x10) = *(int *)(pNVar5 + 0x10) + 1;
    UNLOCK();
  }
  pNVar2 = pNVar5;
  if ((((byte)pNVar5[0x28] & 1) == 0) && (1 < *(uint *)(pNVar5 + 0x10))) {
    pNVar2 = (Node *)QHashData::detach_helper
                               ((_func_void_Node_ptr_void_ptr *)pNVar5,FUN_1001bff00,0x1bfda0,0x20);
    if (*(int *)(pNVar5 + 0x10) != -1) {
      if (*(int *)(pNVar5 + 0x10) != 0) {
        LOCK();
        pNVar3 = pNVar5 + 0x10;
        *(int *)pNVar3 = *(int *)pNVar3 + -1;
        UNLOCK();
        if (*(int *)pNVar3 != 0) goto LAB_1001bea07;
      }
      QHashData::free_helper((_func_void_Node_ptr *)pNVar5);
    }
  }
LAB_1001bea07:
  iVar1 = *(int *)(pNVar2 + 0x20);
  if (iVar1 != 0) {
    puVar4 = *(undefined8 **)(pNVar2 + 8);
    do {
      pNVar5 = (Node *)*puVar4;
      if (pNVar5 != pNVar2) goto LAB_1001bea40;
      iVar1 = iVar1 + -1;
      puVar4 = puVar4 + 1;
    } while (iVar1 != 0);
  }
LAB_1001bea62:
  if (*(int *)(pNVar2 + 0x10) != -1) {
    if (*(int *)(pNVar2 + 0x10) != 0) {
      LOCK();
      pNVar5 = pNVar2 + 0x10;
      *(int *)pNVar5 = *(int *)pNVar5 + -1;
      UNLOCK();
      if (*(int *)pNVar5 != 0) {
        return;
      }
    }
    QHashData::free_helper((_func_void_Node_ptr *)pNVar2);
  }
  return;
LAB_1001bea40:
  do {
    pNVar3 = (Node *)QHashData::nextNode(pNVar5);
    if (*(char *)(*(long *)(pNVar5 + 0x18) + 0x2a) != '\0') {
      FUN_1001bd350();
    }
    pNVar5 = pNVar3;
  } while (pNVar3 != pNVar2);
  goto LAB_1001bea62;
}

