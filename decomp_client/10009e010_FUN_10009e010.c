
void FUN_10009e010(long param_1)

{
  Node *pNVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  Node *pNVar5;
  undefined8 uVar6;
  Node *pNVar7;
  undefined8 *puVar8;
  uint uVar9;
  
  lVar2 = *(long *)(param_1 + 0x90);
  uVar9 = 0;
  if (*(long *)(lVar2 + 0x10) != 0) {
    lVar4 = *(long *)(lVar2 + 0x20);
    uVar9 = 0;
    while (lVar4 != lVar2 + 8) {
      uVar9 = uVar9 | *(uint *)(lVar4 + 0x20);
      lVar4 = QMapNodeBase::nextNode();
      lVar2 = *(long *)(param_1 + 0x90);
    }
  }
  pNVar7 = *(Node **)(param_1 + 0x98);
  if (1 < *(int *)(pNVar7 + 0x10) + 1U) {
    LOCK();
    *(int *)(pNVar7 + 0x10) = *(int *)(pNVar7 + 0x10) + 1;
    UNLOCK();
  }
  pNVar5 = pNVar7;
  if ((((byte)pNVar7[0x28] & 1) == 0) && (1 < *(uint *)(pNVar7 + 0x10))) {
    pNVar5 = (Node *)QHashData::detach_helper
                               ((_func_void_Node_ptr_void_ptr *)pNVar7,FUN_10009fc70,0x9fc90,0x18);
    if (*(int *)(pNVar7 + 0x10) != -1) {
      if (*(int *)(pNVar7 + 0x10) != 0) {
        LOCK();
        pNVar1 = pNVar7 + 0x10;
        *(int *)pNVar1 = *(int *)pNVar1 + -1;
        UNLOCK();
        if (*(int *)pNVar1 != 0) goto LAB_10009e0e3;
      }
      QHashData::free_helper((_func_void_Node_ptr *)pNVar7);
    }
  }
LAB_10009e0e3:
  iVar3 = *(int *)(pNVar5 + 0x20);
  pNVar7 = pNVar5;
  if (iVar3 != 0) {
    puVar8 = *(undefined8 **)(pNVar5 + 8);
    do {
      pNVar7 = (Node *)*puVar8;
      if ((Node *)*puVar8 != pNVar5) break;
      iVar3 = iVar3 + -1;
      puVar8 = puVar8 + 1;
      pNVar7 = pNVar5;
    } while (iVar3 != 0);
  }
  for (; pNVar7 != pNVar5; pNVar7 = (Node *)QHashData::nextNode(pNVar7)) {
    uVar6 = FUN_100319cd0(**(undefined8 **)(pNVar7 + 0x10));
    FUN_100347390(uVar6,uVar9);
  }
  if (*(int *)(pNVar5 + 0x10) != -1) {
    if (*(int *)(pNVar5 + 0x10) != 0) {
      LOCK();
      pNVar7 = pNVar5 + 0x10;
      *(int *)pNVar7 = *(int *)pNVar7 + -1;
      UNLOCK();
      if (*(int *)pNVar7 != 0) {
        return;
      }
    }
    QHashData::free_helper((_func_void_Node_ptr *)pNVar5);
  }
  return;
}

