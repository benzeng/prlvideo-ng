
void FUN_1006a05e0(long param_1)

{
  Node *pNVar1;
  int *piVar2;
  undefined *puVar3;
  Data *pDVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  char cVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  int iVar19;
  void *pvVar20;
  Node *pNVar21;
  Node *pNVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  long *plVar25;
  Data *pDVar26;
  long lVar27;
  CTaskGenericId local_138 [24];
  undefined1 local_120;
  undefined7 uStack_11f;
  QVariant local_100 [2];
  QArrayData *local_e8;
  CTaskGenericId local_e0 [24];
  undefined **local_c8 [3];
  undefined **local_b0 [3];
  undefined1 local_98;
  undefined7 uStack_97;
  QVariant local_78 [2];
  undefined4 local_5c;
  QVariant local_58;
  Node *local_48;
  Data *local_40;
  undefined1 local_31;
  
  uVar24 = *(undefined8 *)(param_1 + 0x10);
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar20 = operator_new(0x18);
    FUN_1001a61d0(pvVar20);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar20;
  }
  puVar3 = PTR_self_1021e1388;
  bVar5 = FUN_1006a83c0(uVar24,DAT_1023108e0,"2vmRemoved(GUI::VmId)",0x42,
                        *(undefined8 *)PTR_self_1021e1388);
  uVar24 = *(undefined8 *)(param_1 + 0x10);
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar20 = operator_new(0x18);
    FUN_1001a61d0(pvVar20);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar20;
  }
  bVar6 = FUN_1006a83c0(uVar24,DAT_1023108e0,"2vmAdded(GUI::VmId)",0x42,*(undefined8 *)puVar3);
  uVar24 = *(undefined8 *)(param_1 + 0x10);
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar20 = operator_new(0x18);
    FUN_1001a61d0(pvVar20);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar20;
  }
  bVar7 = FUN_1006a83c0(uVar24,DAT_1023108e0,"2vmRemoved(GUI::VmId)",0x79,*(undefined8 *)puVar3);
  uVar24 = *(undefined8 *)(param_1 + 0x10);
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar20 = operator_new(0x18);
    FUN_1001a61d0(pvVar20);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar20;
  }
  bVar8 = FUN_1006a83c0(uVar24,DAT_1023108e0,"2vmAdded(GUI::VmId)",0x79,*(undefined8 *)puVar3);
  local_40 = (Data *)PTR_shared_null_1021e15e8;
  FUN_100693390(&local_48,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)puVar3);
  pNVar22 = local_48;
  if (1 < *(int *)(local_48 + 0x10) + 1U) {
    LOCK();
    pNVar21 = local_48 + 0x10;
    *(int *)pNVar21 = *(int *)pNVar21 + 1;
    local_31 = *(int *)pNVar21 != 0;
    UNLOCK();
  }
  pNVar21 = local_48;
  if ((((byte)local_48[0x28] & 1) == 0) && (1 < *(uint *)(local_48 + 0x10))) {
    pNVar21 = (Node *)QHashData::detach_helper
                                ((_func_void_Node_ptr_void_ptr *)local_48,FUN_1006941c0,0x6941f0,
                                 0x18);
    if (*(int *)(pNVar22 + 0x10) != -1) {
      if (*(int *)(pNVar22 + 0x10) != 0) {
        LOCK();
        pNVar1 = pNVar22 + 0x10;
        *(int *)pNVar1 = *(int *)pNVar1 + -1;
        local_31 = *(int *)pNVar1 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006a07d1;
      }
      QHashData::free_helper((_func_void_Node_ptr *)pNVar22);
    }
  }
LAB_1006a07d1:
  iVar19 = *(int *)(pNVar21 + 0x20);
  pNVar22 = pNVar21;
  if (iVar19 != 0) {
    plVar25 = *(long **)(pNVar21 + 8);
    do {
      pNVar22 = (Node *)*plVar25;
      if ((Node *)*plVar25 != pNVar21) break;
      iVar19 = iVar19 + -1;
      plVar25 = plVar25 + 1;
      pNVar22 = pNVar21;
    } while (iVar19 != 0);
  }
  if (*(int *)(local_48 + 0x10) != -1) {
    if (*(int *)(local_48 + 0x10) != 0) {
      LOCK();
      pNVar1 = local_48 + 0x10;
      *(int *)pNVar1 = *(int *)pNVar1 + -1;
      local_31 = *(int *)pNVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006a0834;
    }
    QHashData::free_helper((_func_void_Node_ptr *)local_48);
  }
LAB_1006a0834:
  if (pNVar22 != pNVar21) {
    do {
      uVar24 = *(undefined8 *)(pNVar22 + 0x10);
      QObject::property((char *)&local_58);
      cVar9 = QVariant::toBool();
      QVariant::~QVariant(&local_58);
      if (cVar9 != '\0') {
        local_5c = FUN_1006947d0(uVar24);
        FUN_100071ff0(&local_40,&local_5c);
      }
      pNVar22 = (Node *)QHashData::nextNode(pNVar22);
    } while (pNVar22 != pNVar21);
  }
  if (*(int *)(pNVar21 + 0x10) != -1) {
    if (*(int *)(pNVar21 + 0x10) != 0) {
      LOCK();
      pNVar22 = pNVar21 + 0x10;
      *(int *)pNVar22 = *(int *)pNVar22 + -1;
      local_31 = *(int *)pNVar22 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006a08eb;
    }
    QHashData::free_helper((_func_void_Node_ptr *)pNVar21);
  }
LAB_1006a08eb:
  uVar24 = *(undefined8 *)(param_1 + 0x10);
  uVar23 = FUN_1001d50a0();
  bVar10 = FUN_1006a80b0(uVar24,uVar23,"2activeWindowChanged(QWidget*, QWidget*)",&local_40,
                         *(undefined8 *)PTR_self_1021e1388);
  FUN_1006a7bb0(&local_98,*(undefined8 *)(param_1 + 0x10),0x60,*(undefined8 *)PTR_self_1021e1388);
  cVar9 = FUN_10019cd90(&local_98);
  if (cVar9 == '\0') {
    FUN_100df99c0("","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "installUpgradeSlot.isValid()",
                  "ActionManager/ActionUpdater/CActionUpdateConditions.cpp",0x71,"setupAppSignals");
  }
  uVar24 = CTaskManager::instance();
  CTaskGenericId::CTaskGenericId((CTaskGenericId *)local_b0,0x3d);
  local_b0[0] = &PTR_FUN_102273600;
  CTaskManager::addTaskWatcher(uVar24,&local_98,local_b0,0x24);
  CTaskGenericId::~CTaskGenericId((CTaskGenericId *)local_b0);
  uVar24 = CTaskManager::instance();
  CTaskGenericId::CTaskGenericId((CTaskGenericId *)local_c8,0x3e);
  local_c8[0] = &PTR_FUN_1022735c0;
  CTaskManager::addTaskWatcher(uVar24,&local_98,local_c8,0x24);
  CTaskGenericId::~CTaskGenericId((CTaskGenericId *)local_c8);
  uVar24 = CTaskManager::instance();
  FUN_10028e4d0(local_e0,0);
  CTaskManager::addTaskWatcher(uVar24,&local_98,local_e0,0x24);
  CTaskGenericId::~CTaskGenericId(local_e0);
  uVar24 = *(undefined8 *)(param_1 + 0x10);
  if (DAT_1023109e0 == (void *)0x0) {
    pvVar20 = operator_new(0x28);
    FUN_100793780(pvVar20);
    DAT_102274b08 = 1;
    DAT_1023109e0 = pvVar20;
  }
  bVar11 = FUN_1006a83c0(uVar24,DAT_1023109e0,"2undoAvailableChanged(bool)",0x68,
                         *(undefined8 *)PTR_self_1021e1388);
  uVar24 = *(undefined8 *)(param_1 + 0x10);
  if (DAT_1023109e0 == (void *)0x0) {
    pvVar20 = operator_new(0x28);
    FUN_100793780(pvVar20);
    DAT_102274b08 = 1;
    DAT_1023109e0 = pvVar20;
  }
  bVar12 = FUN_1006a83c0(uVar24,DAT_1023109e0,"2cutAvailableChanged(bool)",0x69,
                         *(undefined8 *)PTR_self_1021e1388);
  uVar24 = *(undefined8 *)(param_1 + 0x10);
  if (DAT_1023109e0 == (void *)0x0) {
    pvVar20 = operator_new(0x28);
    FUN_100793780(pvVar20);
    DAT_102274b08 = 1;
    DAT_1023109e0 = pvVar20;
  }
  bVar13 = FUN_1006a83c0(uVar24,DAT_1023109e0,"2copyAvailableChanged(bool)",0x6a,
                         *(undefined8 *)PTR_self_1021e1388);
  uVar24 = *(undefined8 *)(param_1 + 0x10);
  if (DAT_1023109e0 == (void *)0x0) {
    pvVar20 = operator_new(0x28);
    FUN_100793780(pvVar20);
    DAT_102274b08 = 1;
    DAT_1023109e0 = pvVar20;
  }
  bVar14 = FUN_1006a83c0(uVar24,DAT_1023109e0,"2pasteAvailableChanged(bool)",0x6b,
                         *(undefined8 *)PTR_self_1021e1388);
  uVar24 = *(undefined8 *)(param_1 + 0x10);
  if (DAT_1023109e0 == (void *)0x0) {
    pvVar20 = operator_new(0x28);
    FUN_100793780(pvVar20);
    DAT_102274b08 = 1;
    DAT_1023109e0 = pvVar20;
  }
  bVar15 = FUN_1006a83c0(uVar24,DAT_1023109e0,"2selectAllAvailableChanged(bool)",0x6c,
                         *(undefined8 *)PTR_self_1021e1388);
  uVar24 = *(undefined8 *)(param_1 + 0x10);
  if (DAT_1023109e0 == (void *)0x0) {
    pvVar20 = operator_new(0x28);
    FUN_100793780(pvVar20);
    DAT_102274b08 = 1;
    DAT_1023109e0 = pvVar20;
  }
  bVar16 = FUN_1006a83c0(uVar24,DAT_1023109e0,"2startDictationAvailableChanged(bool)",0x6d,
                         *(undefined8 *)PTR_self_1021e1388);
  uVar24 = *(undefined8 *)(param_1 + 0x10);
  if (DAT_1023109e0 == (void *)0x0) {
    pvVar20 = operator_new(0x28);
    FUN_100793780(pvVar20);
    DAT_102274b08 = 1;
    DAT_1023109e0 = pvVar20;
  }
  bVar17 = FUN_1006a83c0(uVar24,DAT_1023109e0,"2specialCharactersAvailableChanged(bool)",0x6e,
                         *(undefined8 *)PTR_self_1021e1388);
  uVar24 = *(undefined8 *)(param_1 + 0x10);
  uVar23 = FUN_100748240();
  local_e8 = (QArrayData *)QString::fromAscii_helper("version",7);
  uVar23 = FUN_100748290(uVar23,&local_e8);
  bVar18 = FUN_1006a83c0(uVar24,uVar23,"2stateChanged(WebStore::CCatalogModel::State)",0x86,
                         *(undefined8 *)PTR_self_1021e1388);
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_31 = *(int *)local_e8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006a0d3a;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_1006a0d3a:
  if ((bVar18 & bVar5 & bVar6 & bVar7 & bVar8 & bVar10 & bVar11 & bVar12 & bVar13 & bVar14 & bVar15
                & bVar16 & bVar17) == 0) {
    FUN_100df99c0("","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]","isOk",
                  "ActionManager/ActionUpdater/CActionUpdateConditions.cpp",0x91,"setupAppSignals");
  }
  FUN_1006a7bb0(&local_120,*(undefined8 *)(param_1 + 0x10),0x43,*(undefined8 *)PTR_self_1021e1388);
  uVar24 = CTaskManager::instance();
  FUN_10028e4d0(local_138,100);
  CTaskManager::addTaskWatcher(uVar24,&local_120,local_138,4);
  CTaskGenericId::~CTaskGenericId(local_138);
  QVariant::~QVariant(local_100);
  piVar2 = (int *)CONCAT71(uStack_11f,local_120);
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    local_31 = *piVar2 != 0;
    UNLOCK();
    if ((!(bool)local_31) && ((void *)CONCAT71(uStack_11f,local_120) != (void *)0x0)) {
      operator_delete((void *)CONCAT71(uStack_11f,local_120));
    }
  }
  QVariant::~QVariant(local_78);
  piVar2 = (int *)CONCAT71(uStack_97,local_98);
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    local_120 = *piVar2 != 0;
    UNLOCK();
    if ((!(bool)local_120) && ((void *)CONCAT71(uStack_97,local_98) != (void *)0x0)) {
      operator_delete((void *)CONCAT71(uStack_97,local_98));
    }
  }
  pDVar4 = local_40;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_98 = 0;
    }
    iVar19 = *(int *)(local_40 + 0xc);
    if (iVar19 != *(int *)(local_40 + 8)) {
      lVar27 = (long)*(int *)(local_40 + 8) * 8 + (long)iVar19 * -8;
      pDVar26 = local_40 + (long)iVar19 * 8 + 8;
      do {
        if (*(void **)pDVar26 != (void *)0x0) {
          operator_delete(*(void **)pDVar26);
        }
        pDVar26 = pDVar26 + -8;
        lVar27 = lVar27 + 8;
      } while (lVar27 != 0);
    }
    QListData::dispose(pDVar4);
  }
  return;
}

