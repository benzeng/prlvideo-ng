
long FUN_10009dda0(long param_1,undefined8 param_2)

{
  Node *pNVar1;
  long lVar2;
  int iVar3;
  Node *pNVar4;
  Node *pNVar5;
  undefined8 *puVar6;
  long lVar7;
  
  pNVar5 = *(Node **)(param_1 + 0x98);
  if (1 < *(int *)(pNVar5 + 0x10) + 1U) {
    LOCK();
    *(int *)(pNVar5 + 0x10) = *(int *)(pNVar5 + 0x10) + 1;
    UNLOCK();
  }
  pNVar4 = pNVar5;
  if ((((byte)pNVar5[0x28] & 1) == 0) && (1 < *(uint *)(pNVar5 + 0x10))) {
    pNVar4 = (Node *)QHashData::detach_helper
                               ((_func_void_Node_ptr_void_ptr *)pNVar5,FUN_10009fc70,0x9fc90,0x18);
    if (*(int *)(pNVar5 + 0x10) != -1) {
      if (*(int *)(pNVar5 + 0x10) != 0) {
        LOCK();
        pNVar1 = pNVar5 + 0x10;
        *(int *)pNVar1 = *(int *)pNVar1 + -1;
        UNLOCK();
        if (*(int *)pNVar1 != 0) goto LAB_10009de38;
      }
      QHashData::free_helper((_func_void_Node_ptr *)pNVar5);
    }
  }
LAB_10009de38:
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
    lVar7 = 0;
    if (pNVar5 == pNVar4) {
LAB_10009deaf:
      if (*(int *)(pNVar4 + 0x10) != -1) {
        if (*(int *)(pNVar4 + 0x10) != 0) {
          LOCK();
          pNVar5 = pNVar4 + 0x10;
          *(int *)pNVar5 = *(int *)pNVar5 + -1;
          UNLOCK();
          if (*(int *)pNVar5 != 0) {
            return lVar7;
          }
        }
        QHashData::free_helper((_func_void_Node_ptr *)pNVar4);
      }
      return lVar7;
    }
    lVar7 = *(long *)(pNVar5 + 0x10);
    lVar2 = *(long *)(lVar7 + 0x18);
    iVar3 = QString::compare_helper
                      (*(long *)(lVar2 + 0x10) + lVar2,*(undefined4 *)(lVar2 + 4),param_2,0xffffffff
                       ,1);
    if (iVar3 == 0) goto LAB_10009deaf;
    pNVar5 = (Node *)QHashData::nextNode(pNVar5);
  } while( true );
}

