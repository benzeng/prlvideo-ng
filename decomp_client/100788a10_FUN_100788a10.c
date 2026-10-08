
undefined8 FUN_100788a10(long param_1,long *param_2)

{
  Node *pNVar1;
  int iVar2;
  void *pvVar3;
  Node *pNVar4;
  Node *pNVar5;
  long *plVar6;
  undefined8 uVar7;
  long local_48;
  Node *local_40;
  undefined1 local_31;
  
  if (DAT_1023109d8 == (void *)0x0) {
    pvVar3 = operator_new(0x18);
    FUN_100785b00(pvVar3);
    DAT_10226c7e0 = 1;
    DAT_1023109d8 = pvVar3;
  }
  uVar7 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar7 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100785c40(&local_40,DAT_1023109d8,uVar7);
  pNVar4 = local_40;
  if (1 < *(uint *)(local_40 + 0x10)) {
    pNVar4 = (Node *)QHashData::detach_helper
                               ((_func_void_Node_ptr_void_ptr *)local_40,FUN_100787670,0x787660,0x18
                               );
    if (*(int *)(local_40 + 0x10) != -1) {
      if (*(int *)(local_40 + 0x10) != 0) {
        LOCK();
        pNVar5 = local_40 + 0x10;
        *(int *)pNVar5 = *(int *)pNVar5 + -1;
        local_31 = *(int *)pNVar5 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100788adc;
      }
      QHashData::free_helper((_func_void_Node_ptr *)local_40);
    }
  }
LAB_100788adc:
  local_40 = pNVar4;
  iVar2 = *(int *)(local_40 + 0x20);
  pNVar4 = local_40;
  if (iVar2 != 0) {
    plVar6 = *(long **)(local_40 + 8);
    do {
      pNVar4 = (Node *)*plVar6;
      if ((Node *)*plVar6 != local_40) break;
      iVar2 = iVar2 + -1;
      plVar6 = plVar6 + 1;
      pNVar4 = local_40;
    } while (iVar2 != 0);
  }
  do {
    pNVar5 = local_40;
    if (1 < *(uint *)(local_40 + 0x10)) {
      pNVar5 = (Node *)QHashData::detach_helper
                                 ((_func_void_Node_ptr_void_ptr *)local_40,FUN_100787670,0x787660,
                                  0x18);
      if (*(int *)(local_40 + 0x10) != -1) {
        if (*(int *)(local_40 + 0x10) != 0) {
          LOCK();
          pNVar1 = local_40 + 0x10;
          *(int *)pNVar1 = *(int *)pNVar1 + -1;
          local_31 = *(int *)pNVar1 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100788b7a;
        }
        QHashData::free_helper((_func_void_Node_ptr *)local_40);
      }
    }
LAB_100788b7a:
    local_40 = pNVar5;
    if (pNVar4 == local_40) {
      if (*(int *)(local_40 + 0x10) != -1) {
        if (*(int *)(local_40 + 0x10) != 0) {
          LOCK();
          pNVar4 = local_40 + 0x10;
          *(int *)pNVar4 = *(int *)pNVar4 + -1;
          UNLOCK();
          if (*(int *)pNVar4 != 0) {
            return 1;
          }
          local_31 = 0;
        }
        QHashData::free_helper((_func_void_Node_ptr *)local_40);
      }
      return 1;
    }
    uVar7 = *(undefined8 *)(pNVar4 + 0x10);
    local_48 = *param_2;
    if (local_48 != 0) {
      _PrlHandle_AddRef();
    }
    FUN_100786620(uVar7,&local_48);
    if (local_48 != 0) {
      _PrlHandle_Free();
    }
    pNVar4 = (Node *)QHashData::nextNode(pNVar4);
  } while( true );
}

