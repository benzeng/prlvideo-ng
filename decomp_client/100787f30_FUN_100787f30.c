
void FUN_100787f30(long param_1)

{
  Node *pNVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  Node *pNVar5;
  Node *pNVar6;
  long *plVar7;
  Node *local_30;
  undefined1 local_24;
  undefined1 local_23;
  undefined1 local_21;
  
  FUN_100787290(&local_30,*(undefined8 *)(param_1 + 0x38));
  pNVar5 = local_30;
  if (1 < *(uint *)(local_30 + 0x10)) {
    pNVar5 = (Node *)QHashData::detach_helper
                               ((_func_void_Node_ptr_void_ptr *)local_30,FUN_100787670,0x787660,0x18
                               );
    if (*(int *)(local_30 + 0x10) != -1) {
      if (*(int *)(local_30 + 0x10) != 0) {
        LOCK();
        pNVar6 = local_30 + 0x10;
        *(int *)pNVar6 = *(int *)pNVar6 + -1;
        local_24 = *(int *)pNVar6 != 0;
        UNLOCK();
        if ((bool)local_24) goto LAB_100787fac;
      }
      QHashData::free_helper((_func_void_Node_ptr *)local_30);
    }
  }
LAB_100787fac:
  local_30 = pNVar5;
  iVar4 = *(int *)(local_30 + 0x20);
  pNVar5 = local_30;
  if (iVar4 != 0) {
    plVar7 = *(long **)(local_30 + 8);
    do {
      pNVar5 = (Node *)*plVar7;
      if ((Node *)*plVar7 != local_30) break;
      iVar4 = iVar4 + -1;
      plVar7 = plVar7 + 1;
      pNVar5 = local_30;
    } while (iVar4 != 0);
  }
  do {
    pNVar6 = local_30;
    if (1 < *(uint *)(local_30 + 0x10)) {
      pNVar6 = (Node *)QHashData::detach_helper
                                 ((_func_void_Node_ptr_void_ptr *)local_30,FUN_100787670,0x787660,
                                  0x18);
      if (*(int *)(local_30 + 0x10) != -1) {
        if (*(int *)(local_30 + 0x10) != 0) {
          LOCK();
          pNVar1 = local_30 + 0x10;
          *(int *)pNVar1 = *(int *)pNVar1 + -1;
          local_23 = *(int *)pNVar1 != 0;
          UNLOCK();
          if ((bool)local_23) goto LAB_100788042;
        }
        QHashData::free_helper((_func_void_Node_ptr *)local_30);
      }
    }
LAB_100788042:
    local_30 = pNVar6;
    if (pNVar5 == local_30) {
      if (*(int *)(local_30 + 0x10) != -1) {
        if (*(int *)(local_30 + 0x10) != 0) {
          LOCK();
          pNVar5 = local_30 + 0x10;
          *(int *)pNVar5 = *(int *)pNVar5 + -1;
          UNLOCK();
          if (*(int *)pNVar5 != 0) {
            return;
          }
          local_21 = 0;
        }
        QHashData::free_helper((_func_void_Node_ptr *)local_30);
      }
      return;
    }
    uVar2 = *(undefined8 *)(pNVar5 + 0x10);
    cVar3 = FUN_100786530(uVar2);
    if (cVar3 != '\0') {
      FUN_100786590(uVar2);
    }
    pNVar5 = (Node *)QHashData::nextNode(pNVar5);
  } while( true );
}

