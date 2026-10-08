
void FUN_100787a80(long *param_1)

{
  Node *pNVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  Node *pNVar5;
  Node *pNVar6;
  long *plVar7;
  byte bVar8;
  Node *local_40;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_31;
  
  bVar2 = (**(code **)(*param_1 + 0x60))();
  bVar8 = 0;
  if (bVar2 != 0) {
    FUN_100787290(&local_40,param_1[7]);
    pNVar5 = local_40;
    if (1 < *(uint *)(local_40 + 0x10)) {
      pNVar5 = (Node *)QHashData::detach_helper
                                 ((_func_void_Node_ptr_void_ptr *)local_40,FUN_100787670,0x787660,
                                  0x18);
      if (*(int *)(local_40 + 0x10) != -1) {
        if (*(int *)(local_40 + 0x10) != 0) {
          LOCK();
          pNVar6 = local_40 + 0x10;
          *(int *)pNVar6 = *(int *)pNVar6 + -1;
          local_34 = *(int *)pNVar6 != 0;
          UNLOCK();
          if ((bool)local_34) goto LAB_100787b19;
        }
        QHashData::free_helper((_func_void_Node_ptr *)local_40);
      }
    }
LAB_100787b19:
    local_40 = pNVar5;
    iVar4 = *(int *)(local_40 + 0x20);
    pNVar5 = local_40;
    if (iVar4 != 0) {
      plVar7 = *(long **)(local_40 + 8);
      do {
        pNVar5 = (Node *)*plVar7;
        if ((Node *)*plVar7 != local_40) break;
        iVar4 = iVar4 + -1;
        plVar7 = plVar7 + 1;
        pNVar5 = local_40;
      } while (iVar4 != 0);
    }
    do {
      pNVar6 = local_40;
      if (1 < *(uint *)(local_40 + 0x10)) {
        pNVar6 = (Node *)QHashData::detach_helper
                                   ((_func_void_Node_ptr_void_ptr *)local_40,FUN_100787670,0x787660,
                                    0x18);
        if (*(int *)(local_40 + 0x10) != -1) {
          if (*(int *)(local_40 + 0x10) != 0) {
            LOCK();
            pNVar1 = local_40 + 0x10;
            *(int *)pNVar1 = *(int *)pNVar1 + -1;
            local_33 = *(int *)pNVar1 != 0;
            UNLOCK();
            if ((bool)local_33) goto LAB_100787bb3;
          }
          QHashData::free_helper((_func_void_Node_ptr *)local_40);
        }
      }
LAB_100787bb3:
      local_40 = pNVar6;
      if (pNVar5 == local_40) {
        bVar8 = 0;
        goto LAB_100787c28;
      }
      cVar3 = FUN_100786e40(*(undefined8 *)(pNVar5 + 0x10));
      if ((cVar3 != '\0') && (cVar3 = FUN_100786530(*(undefined8 *)(pNVar5 + 0x10)), cVar3 != '\0'))
      goto LAB_100787c21;
      pNVar5 = (Node *)QHashData::nextNode(pNVar5);
    } while( true );
  }
  goto LAB_100787c5d;
LAB_100787c21:
  bVar8 = 1;
LAB_100787c28:
  bVar8 = bVar8 & bVar2;
  if (*(int *)(local_40 + 0x10) != -1) {
    if (*(int *)(local_40 + 0x10) != 0) {
      LOCK();
      pNVar5 = local_40 + 0x10;
      *(int *)pNVar5 = *(int *)pNVar5 + -1;
      local_31 = *(int *)pNVar5 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100787c5d;
    }
    QHashData::free_helper((_func_void_Node_ptr *)local_40);
  }
LAB_100787c5d:
  bVar2 = FUN_1007883e0(param_1[8]);
  if (bVar8 != bVar2) {
    if (bVar8 == 0) {
      FUN_1007883d0(param_1[8]);
      FUN_100787f30(param_1);
    }
    else {
      FUN_1007883c0();
    }
  }
  return;
}

