
void FUN_1005e68f0(long param_1)

{
  Node *pNVar1;
  int iVar2;
  undefined8 uVar3;
  Node *pNVar4;
  Node *pNVar5;
  void *pvVar6;
  long *plVar7;
  long lVar8;
  void *local_48;
  Node *local_40;
  undefined1 local_31;
  
  lVar8 = *(long *)(param_1 + 0x18);
  iVar2 = *(int *)(lVar8 + 8);
  if (iVar2 != *(int *)(lVar8 + 0xc)) {
    plVar7 = (long *)(lVar8 + 0x10 + (long)iVar2 * 8);
    lVar8 = (long)*(int *)(lVar8 + 0xc) * 8 + (long)iVar2 * -8;
    do {
      if ((long *)*plVar7 != (long *)0x0) {
        (**(code **)(*(long *)*plVar7 + 0x20))();
      }
      plVar7 = plVar7 + 1;
      lVar8 = lVar8 + -8;
    } while (lVar8 != 0);
  }
  FUN_1005e7870(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  uVar3 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x38);
  FUN_1005bac90(&local_40,uVar3);
  pNVar4 = local_40;
  if (1 < *(uint *)(local_40 + 0x10)) {
    pNVar4 = (Node *)QHashData::detach_helper
                               ((_func_void_Node_ptr_void_ptr *)local_40,FUN_1005c03c0,0x5c0300,0x98
                               );
    if (*(int *)(local_40 + 0x10) != -1) {
      if (*(int *)(local_40 + 0x10) != 0) {
        LOCK();
        pNVar5 = local_40 + 0x10;
        *(int *)pNVar5 = *(int *)pNVar5 + -1;
        local_31 = *(int *)pNVar5 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005e69d3;
      }
      QHashData::free_helper((_func_void_Node_ptr *)local_40);
    }
  }
LAB_1005e69d3:
  local_40 = pNVar4;
  iVar2 = *(int *)(local_40 + 0x20);
  pNVar4 = local_40;
  if (iVar2 != 0) {
    plVar7 = *(long **)(local_40 + 8);
    do {
      pNVar4 = (Node *)*plVar7;
      if ((Node *)*plVar7 != local_40) break;
      iVar2 = iVar2 + -1;
      plVar7 = plVar7 + 1;
      pNVar4 = local_40;
    } while (iVar2 != 0);
  }
  do {
    pNVar5 = local_40;
    if (1 < *(uint *)(local_40 + 0x10)) {
      pNVar5 = (Node *)QHashData::detach_helper
                                 ((_func_void_Node_ptr_void_ptr *)local_40,FUN_1005c03c0,0x5c0300,
                                  0x98);
      if (*(int *)(local_40 + 0x10) != -1) {
        if (*(int *)(local_40 + 0x10) != 0) {
          LOCK();
          pNVar1 = local_40 + 0x10;
          *(int *)pNVar1 = *(int *)pNVar1 + -1;
          local_31 = *(int *)pNVar1 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005e6a72;
        }
        QHashData::free_helper((_func_void_Node_ptr *)local_40);
      }
    }
LAB_1005e6a72:
    local_40 = pNVar5;
    if (pNVar4 == local_40) {
      if (*(int *)(local_40 + 0x10) != -1) {
        if (*(int *)(local_40 + 0x10) != 0) {
          LOCK();
          pNVar4 = local_40 + 0x10;
          *(int *)pNVar4 = *(int *)pNVar4 + -1;
          UNLOCK();
          if (*(int *)pNVar4 != 0) {
            return;
          }
          local_31 = 0;
        }
        QHashData::free_helper((_func_void_Node_ptr *)local_40);
      }
      return;
    }
    pvVar6 = operator_new(0x90);
    FUN_1005e5ff0(pvVar6,pNVar4 + 0x18,0);
    local_48 = pvVar6;
    FUN_1000630f0(param_1 + 0x18,&local_48);
    pNVar4 = (Node *)QHashData::nextNode(pNVar4);
  } while( true );
}

