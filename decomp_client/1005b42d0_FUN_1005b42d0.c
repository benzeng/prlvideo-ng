
void FUN_1005b42d0(long param_1)

{
  Node *pNVar1;
  int iVar2;
  QArrayData *pQVar3;
  Node *pNVar4;
  int iVar5;
  long lVar6;
  Node *pNVar7;
  Node *pNVar8;
  undefined8 uVar9;
  long *plVar10;
  Node *pNVar11;
  QArrayData *local_140;
  undefined4 local_138;
  undefined1 local_130 [104];
  QArrayData *local_c8;
  undefined4 local_c0;
  undefined1 local_b8 [104];
  QArrayData *local_50;
  undefined4 local_48;
  Node *local_40;
  undefined1 local_31;
  
  QObject::sender();
  lVar6 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_102206250);
  pQVar3 = *(QArrayData **)(lVar6 + 0x80);
  iVar5 = *(int *)pQVar3;
  if (1 < iVar5 + 1U) {
    LOCK();
    *(int *)pQVar3 = *(int *)pQVar3 + 1;
    local_31 = *(int *)pQVar3 != 0;
    UNLOCK();
    iVar5 = *(int *)pQVar3;
  }
  iVar2 = *(int *)(lVar6 + 0x88);
  if (iVar5 != -1) {
    if (iVar5 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_31 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005b434a;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1005b434a:
  if (iVar2 == 3) {
    FUN_1005b6a80(&local_40,lVar6 + 0x298);
    pNVar7 = local_40;
    if (1 < *(uint *)(local_40 + 0x10)) {
      pNVar7 = (Node *)QHashData::detach_helper
                                 ((_func_void_Node_ptr_void_ptr *)local_40,FUN_100287c60,0x286900,
                                  0x88);
      if (*(int *)(local_40 + 0x10) != -1) {
        if (*(int *)(local_40 + 0x10) != 0) {
          LOCK();
          pNVar11 = local_40 + 0x10;
          *(int *)pNVar11 = *(int *)pNVar11 + -1;
          local_31 = *(int *)pNVar11 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005b4499;
        }
        QHashData::free_helper((_func_void_Node_ptr *)local_40);
      }
    }
LAB_1005b4499:
    local_40 = pNVar7;
    iVar5 = *(int *)(local_40 + 0x20);
    pNVar7 = local_40;
    if (iVar5 != 0) {
      plVar10 = *(long **)(local_40 + 8);
      do {
        pNVar7 = (Node *)*plVar10;
        if ((Node *)*plVar10 != local_40) break;
        iVar5 = iVar5 + -1;
        plVar10 = plVar10 + 1;
        pNVar7 = local_40;
      } while (iVar5 != 0);
    }
    pNVar11 = local_40;
    do {
      pNVar8 = pNVar11;
      pNVar4 = local_40;
      if (1 < *(uint *)(pNVar11 + 0x10)) {
        pNVar8 = (Node *)QHashData::detach_helper
                                   ((_func_void_Node_ptr_void_ptr *)pNVar11,FUN_100287c60,0x286900,
                                    0x88);
        pNVar4 = pNVar8;
        if (*(int *)(pNVar11 + 0x10) != -1) {
          if (*(int *)(pNVar11 + 0x10) != 0) {
            LOCK();
            pNVar1 = pNVar11 + 0x10;
            *(int *)pNVar1 = *(int *)pNVar1 + -1;
            local_31 = *(int *)pNVar1 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1005b4531;
          }
          QHashData::free_helper((_func_void_Node_ptr *)pNVar11);
        }
      }
LAB_1005b4531:
      local_40 = pNVar4;
      if (pNVar7 == pNVar8) goto LAB_1005b45d8;
      uVar9 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
      local_50 = *(QArrayData **)(pNVar7 + 0x10);
      if (1 < *(int *)local_50 + 1U) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + 1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
      }
      local_48 = *(undefined4 *)(pNVar7 + 0x18);
      FUN_100260700(local_b8,pNVar7 + 0x20);
      FUN_1005bca00(uVar9,&local_50,local_b8);
      FUN_10005e410(local_b8);
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          local_31 = *(int *)local_50 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005b45c0;
        }
        QArrayData::deallocate(local_50,2,8);
      }
LAB_1005b45c0:
      pNVar7 = (Node *)QHashData::nextNode(pNVar7);
      pNVar11 = pNVar8;
    } while( true );
  }
  uVar9 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
  local_c8 = *(QArrayData **)(lVar6 + 0x80);
  if (1 < *(int *)local_c8 + 1U) {
    LOCK();
    *(int *)local_c8 = *(int *)local_c8 + 1;
    local_31 = *(int *)local_c8 != 0;
    UNLOCK();
  }
  local_c0 = *(undefined4 *)(lVar6 + 0x88);
  FUN_100260700(local_130,lVar6 + 0x18);
  FUN_1005bca00(uVar9,&local_c8,local_130);
  FUN_10005e410(local_130);
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_31 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005b460d;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_1005b460d:
  local_140 = *(QArrayData **)(lVar6 + 0x80);
  if (1 < *(int *)local_140 + 1U) {
    LOCK();
    *(int *)local_140 = *(int *)local_140 + 1;
    local_31 = *(int *)local_140 != 0;
    UNLOCK();
  }
  local_138 = *(undefined4 *)(lVar6 + 0x88);
  FUN_100840070(param_1,&local_140);
  if (*(int *)local_140 != -1) {
    if (*(int *)local_140 != 0) {
      LOCK();
      *(int *)local_140 = *(int *)local_140 + -1;
      UNLOCK();
      if (*(int *)local_140 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_140,2,8);
  }
  return;
LAB_1005b45d8:
  if (*(int *)(pNVar8 + 0x10) != -1) {
    if (*(int *)(pNVar8 + 0x10) != 0) {
      LOCK();
      pNVar7 = pNVar8 + 0x10;
      *(int *)pNVar7 = *(int *)pNVar7 + -1;
      local_31 = *(int *)pNVar7 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005b460d;
    }
    QHashData::free_helper((_func_void_Node_ptr *)pNVar8);
  }
  goto LAB_1005b460d;
}

