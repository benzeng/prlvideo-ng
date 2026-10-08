
undefined8 FUN_100721c90(undefined8 param_1,undefined8 *param_2)

{
  Node *pNVar1;
  int iVar2;
  Node *pNVar3;
  undefined8 *puVar4;
  Node *pNVar5;
  Node *pNVar6;
  
  pNVar5 = (Node *)*param_2;
  if (1 < *(int *)(pNVar5 + 0x10) + 1U) {
    LOCK();
    *(int *)(pNVar5 + 0x10) = *(int *)(pNVar5 + 0x10) + 1;
    UNLOCK();
  }
  pNVar3 = pNVar5;
  pNVar6 = pNVar5;
  if ((((byte)pNVar5[0x28] & 1) == 0) && (1 < *(uint *)(pNVar5 + 0x10))) {
    pNVar3 = (Node *)QHashData::detach_helper
                               ((_func_void_Node_ptr_void_ptr *)pNVar5,FUN_1006941c0,0x6941f0,0x18);
    pNVar6 = pNVar3;
    if (*(int *)(pNVar5 + 0x10) != -1) {
      if (*(int *)(pNVar5 + 0x10) != 0) {
        LOCK();
        pNVar1 = pNVar5 + 0x10;
        *(int *)pNVar1 = *(int *)pNVar1 + -1;
        UNLOCK();
        if (*(int *)pNVar1 != 0) goto LAB_100721d20;
      }
      QHashData::free_helper((_func_void_Node_ptr *)pNVar5);
    }
  }
LAB_100721d20:
  do {
    iVar2 = *(int *)(pNVar6 + 0x20);
    pNVar5 = pNVar6;
    if (iVar2 != 0) {
      puVar4 = *(undefined8 **)(pNVar6 + 8);
      do {
        pNVar5 = (Node *)*puVar4;
        if ((Node *)*puVar4 != pNVar6) break;
        iVar2 = iVar2 + -1;
        puVar4 = puVar4 + 1;
        pNVar5 = pNVar6;
      } while (iVar2 != 0);
    }
    if (pNVar3 == pNVar5) {
      if (*(int *)(pNVar6 + 0x10) != -1) {
        if (*(int *)(pNVar6 + 0x10) != 0) {
          LOCK();
          pNVar5 = pNVar6 + 0x10;
          *(int *)pNVar5 = *(int *)pNVar5 + -1;
          UNLOCK();
          if (*(int *)pNVar5 != 0) {
            return param_1;
          }
        }
        QHashData::free_helper((_func_void_Node_ptr *)pNVar6);
      }
      return param_1;
    }
    pNVar3 = (Node *)QHashData::previousNode(pNVar3);
    FUN_100721de0(param_1,pNVar3 + 0xc,pNVar3 + 0x10);
  } while( true );
}

