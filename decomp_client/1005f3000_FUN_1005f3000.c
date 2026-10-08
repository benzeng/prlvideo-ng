
void FUN_1005f3000(long param_1)

{
  Node *pNVar1;
  Node *pNVar2;
  int iVar3;
  undefined8 uVar4;
  Node *pNVar5;
  Node *pNVar6;
  void *pvVar7;
  long *plVar8;
  long lVar9;
  Node *pNVar10;
  QArrayData *local_50;
  undefined4 local_48;
  Node *local_40;
  undefined1 local_31;
  
  lVar9 = *(long *)(param_1 + 0x18);
  iVar3 = *(int *)(lVar9 + 8);
  if (iVar3 != *(int *)(lVar9 + 0xc)) {
    plVar8 = (long *)(lVar9 + 0x10 + (long)iVar3 * 8);
    lVar9 = (long)*(int *)(lVar9 + 0xc) * 8 + (long)iVar3 * -8;
    do {
      if ((long *)*plVar8 != (long *)0x0) {
        (**(code **)(*(long *)*plVar8 + 0x20))();
      }
      plVar8 = plVar8 + 1;
      lVar9 = lVar9 + -8;
    } while (lVar9 != 0);
  }
  FUN_1005e7870(param_1 + 0x18);
  CAbstractWizardPage::wizardCtrl();
  CWizardController::updateWizardActions();
  uVar4 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x38);
  FUN_1005fa410(&local_40,uVar4);
  pNVar5 = local_40;
  if (1 < *(uint *)(local_40 + 0x10)) {
    pNVar5 = (Node *)QHashData::detach_helper
                               ((_func_void_Node_ptr_void_ptr *)local_40,FUN_100287c60,0x286900,0x88
                               );
    if (*(int *)(local_40 + 0x10) != -1) {
      if (*(int *)(local_40 + 0x10) != 0) {
        LOCK();
        pNVar10 = local_40 + 0x10;
        *(int *)pNVar10 = *(int *)pNVar10 + -1;
        local_31 = *(int *)pNVar10 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005f30ec;
      }
      QHashData::free_helper((_func_void_Node_ptr *)local_40);
    }
  }
LAB_1005f30ec:
  local_40 = pNVar5;
  iVar3 = *(int *)(local_40 + 0x20);
  pNVar5 = local_40;
  pNVar10 = local_40;
  if (iVar3 != 0) {
    plVar8 = *(long **)(local_40 + 8);
    do {
      pNVar5 = (Node *)*plVar8;
      if ((Node *)*plVar8 != local_40) break;
      iVar3 = iVar3 + -1;
      plVar8 = plVar8 + 1;
      pNVar5 = local_40;
    } while (iVar3 != 0);
  }
  do {
    pNVar6 = pNVar10;
    pNVar2 = local_40;
    if (1 < *(uint *)(pNVar10 + 0x10)) {
      pNVar6 = (Node *)QHashData::detach_helper
                                 ((_func_void_Node_ptr_void_ptr *)pNVar10,FUN_100287c60,0x286900,
                                  0x88);
      pNVar2 = pNVar6;
      if (*(int *)(pNVar10 + 0x10) != -1) {
        if (*(int *)(pNVar10 + 0x10) != 0) {
          LOCK();
          pNVar1 = pNVar10 + 0x10;
          *(int *)pNVar1 = *(int *)pNVar1 + -1;
          local_31 = *(int *)pNVar1 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005f317e;
        }
        QHashData::free_helper((_func_void_Node_ptr *)pNVar10);
      }
    }
LAB_1005f317e:
    local_40 = pNVar2;
    if (pNVar5 == pNVar6) {
      CAbstractWizardPage::wizardCtrl();
      CWizardController::updateWizardActions();
      if (*(int *)(pNVar6 + 0x10) != -1) {
        if (*(int *)(pNVar6 + 0x10) != 0) {
          LOCK();
          pNVar5 = pNVar6 + 0x10;
          *(int *)pNVar5 = *(int *)pNVar5 + -1;
          local_31 = *(int *)pNVar5 != 0;
          UNLOCK();
          if ((bool)local_31) {
            return;
          }
        }
        QHashData::free_helper((_func_void_Node_ptr *)pNVar6);
      }
      return;
    }
    if (*(int *)(pNVar5 + 0x20) != 0xff) {
      pvVar7 = operator_new(0x90);
      local_50 = *(QArrayData **)(pNVar5 + 0x10);
      if (1 < *(int *)local_50 + 1U) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + 1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
      }
      local_48 = *(undefined4 *)(pNVar5 + 0x18);
      FUN_1005fdc90(pvVar7,pNVar5 + 0x20,&local_50,0,0);
      FUN_1005f2e80(param_1,pvVar7);
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          local_31 = *(int *)local_50 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005f3220;
        }
        QArrayData::deallocate(local_50,2,8);
      }
    }
LAB_1005f3220:
    pNVar5 = (Node *)QHashData::nextNode(pNVar5);
    pNVar10 = pNVar6;
  } while( true );
}

