
undefined8 FUN_10044f380(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  Node *pNVar2;
  Node *pNVar3;
  undefined8 *puVar4;
  Node *pNVar5;
  undefined1 local_30 [7];
  undefined1 local_29;
  
  pNVar3 = (Node *)*param_2;
  if (1 < *(int *)(pNVar3 + 0x10) + 1U) {
    LOCK();
    *(int *)(pNVar3 + 0x10) = *(int *)(pNVar3 + 0x10) + 1;
    UNLOCK();
  }
  pNVar2 = pNVar3;
  if ((((byte)pNVar3[0x28] & 1) == 0) && (1 < *(uint *)(pNVar3 + 0x10))) {
    pNVar2 = (Node *)QHashData::detach_helper
                               ((_func_void_Node_ptr_void_ptr *)pNVar3,FUN_10044f7d0,0x44f7f0,0x10);
    if (*(int *)(pNVar3 + 0x10) != -1) {
      if (*(int *)(pNVar3 + 0x10) != 0) {
        LOCK();
        pNVar5 = pNVar3 + 0x10;
        *(int *)pNVar5 = *(int *)pNVar5 + -1;
        UNLOCK();
        if (*(int *)pNVar5 != 0) goto LAB_10044f405;
      }
      QHashData::free_helper((_func_void_Node_ptr *)pNVar3);
    }
  }
LAB_10044f405:
  pNVar3 = pNVar2;
  do {
    iVar1 = *(int *)(pNVar2 + 0x20);
    pNVar5 = pNVar2;
    if (iVar1 != 0) {
      puVar4 = *(undefined8 **)(pNVar2 + 8);
      do {
        pNVar5 = (Node *)*puVar4;
        if ((Node *)*puVar4 != pNVar2) break;
        iVar1 = iVar1 + -1;
        puVar4 = puVar4 + 1;
        pNVar5 = pNVar2;
      } while (iVar1 != 0);
    }
    if (pNVar3 == pNVar5) {
      if (*(int *)(pNVar2 + 0x10) != -1) {
        if (*(int *)(pNVar2 + 0x10) != 0) {
          LOCK();
          pNVar3 = pNVar2 + 0x10;
          *(int *)pNVar3 = *(int *)pNVar3 + -1;
          local_29 = *(int *)pNVar3 != 0;
          UNLOCK();
          if ((bool)local_29) {
            return param_1;
          }
        }
        QHashData::free_helper((_func_void_Node_ptr *)pNVar2);
      }
      return param_1;
    }
    pNVar3 = (Node *)QHashData::previousNode(pNVar3);
    FUN_10044f660(param_1,pNVar3 + 0xc,local_30);
  } while( true );
}

