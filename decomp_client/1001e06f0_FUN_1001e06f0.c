
void FUN_1001e06f0(long param_1,long param_2)

{
  Node *pNVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  Node *pNVar6;
  Node *pNVar7;
  void *pvVar8;
  undefined8 *puVar9;
  bool bVar10;
  int local_60 [2];
  undefined8 local_58;
  QString local_50;
  undefined4 local_48;
  QString local_40;
  undefined1 local_31;
  
  uVar4 = FUN_100152280();
  lVar5 = FUN_1001554a0(uVar4);
  if (lVar5 == 0) {
    return;
  }
  uVar4 = FUN_100152280();
  cVar2 = FUN_100155010(uVar4,lVar5,0);
  if (cVar2 == '\0') {
    return;
  }
  pNVar1 = *(Node **)(*(long *)(param_1 + 0x10) + 0x18);
  if (1 < *(int *)(pNVar1 + 0x10) + 1U) {
    LOCK();
    pNVar6 = pNVar1 + 0x10;
    *(int *)pNVar6 = *(int *)pNVar6 + 1;
    local_31 = *(int *)pNVar6 != 0;
    UNLOCK();
  }
  pNVar6 = pNVar1;
  if ((((byte)pNVar1[0x28] & 1) == 0) && (1 < *(uint *)(pNVar1 + 0x10))) {
    pNVar6 = (Node *)QHashData::detach_helper
                               ((_func_void_Node_ptr_void_ptr *)pNVar1,FUN_1001e3ca0,0x1e3af0,0x20);
    if (*(int *)(pNVar1 + 0x10) != -1) {
      if (*(int *)(pNVar1 + 0x10) != 0) {
        LOCK();
        pNVar7 = pNVar1 + 0x10;
        *(int *)pNVar7 = *(int *)pNVar7 + -1;
        local_31 = *(int *)pNVar7 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001e07af;
      }
      QHashData::free_helper((_func_void_Node_ptr *)pNVar1);
    }
  }
LAB_1001e07af:
  iVar3 = *(int *)(pNVar6 + 0x20);
  if (iVar3 != 0) {
    puVar9 = *(undefined8 **)(pNVar6 + 8);
    do {
      if ((Node *)*puVar9 != pNVar6) {
        bVar10 = true;
        pNVar1 = (Node *)*puVar9;
        goto joined_r0x0001001e07e7;
      }
      iVar3 = iVar3 + -1;
      puVar9 = puVar9 + 1;
    } while (iVar3 != 0);
  }
LAB_1001e095f:
  FUN_1001dad90(*(undefined8 *)(param_1 + 0x10));
  FUN_1001e3360(*(long *)(param_1 + 0x10) + 0x18);
  if (*(int *)(pNVar6 + 0x10) != -1) {
    if (*(int *)(pNVar6 + 0x10) != 0) {
      LOCK();
      pNVar1 = pNVar6 + 0x10;
      *(int *)pNVar1 = *(int *)pNVar1 + -1;
      local_31 = *(int *)pNVar1 != 0;
      UNLOCK();
      if ((bool)local_31) {
        return;
      }
    }
    QHashData::free_helper((_func_void_Node_ptr *)pNVar6);
  }
  return;
joined_r0x0001001e07e7:
  if (!bVar10) goto LAB_1001e095f;
  pNVar7 = (Node *)QHashData::nextNode(pNVar1);
  QString::normalized(&local_40,pNVar1 + 0x10,1,0);
  if (*(int *)(pNVar1 + 0x18) - 0x2715U < 2) {
    iVar3 = FUN_10015a6e0(lVar5);
    if (iVar3 == 0) {
      uVar4 = 0;
      if (param_2 != 0) {
        CContentWindow::contentWidget();
        uVar4 = CContentWidget::contentArea();
      }
      local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
      local_48 = 0;
      QString::operator=(&local_50,&local_40);
      local_48 = 3;
      if (*(int *)(pNVar1 + 0x18) != 0x2716) {
        local_48 = 2;
      }
      pvVar8 = operator_new(200);
      FUN_1002bfe30(pvVar8,&local_50,lVar5,uVar4,2);
      CAbstractTask::execute();
      if (*(int *)local_50.field0_0x0 != -1) {
        if (*(int *)local_50.field0_0x0 != 0) {
          LOCK();
          *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
          local_31 = *(int *)local_50.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001e0923;
        }
        QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
      }
    }
  }
  else {
    local_58 = 0;
    local_60[0] = *(int *)(pNVar1 + 0x18);
    FUN_1001e3170(*(long *)(param_1 + 0x10) + 0x20,pNVar1 + 0x10,local_60);
  }
LAB_1001e0923:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001e0953;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1001e0953:
  bVar10 = pNVar7 != pNVar6;
  pNVar1 = pNVar7;
  goto joined_r0x0001001e07e7;
}

