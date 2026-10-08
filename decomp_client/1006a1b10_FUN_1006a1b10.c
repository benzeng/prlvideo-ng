
void FUN_1006a1b10(long param_1,long param_2)

{
  Node *pNVar1;
  undefined4 uVar2;
  QObject *pQVar3;
  int *piVar4;
  Data *pDVar5;
  char cVar6;
  char cVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  int iVar20;
  undefined8 uVar21;
  QObject *pQVar22;
  QObject *pQVar23;
  Node *pNVar24;
  Node *pNVar25;
  undefined8 uVar26;
  void *pvVar27;
  long *plVar28;
  long lVar29;
  long lVar30;
  Data *pDVar31;
  QArrayData *local_490;
  QArrayData *local_488;
  QArrayData *local_480;
  QArrayData *local_478;
  QArrayData *local_470;
  CTaskGenericId local_468 [24];
  int *local_450 [4];
  QVariant local_430 [2];
  QArrayData *local_418;
  QArrayData *local_410;
  CTaskGenericId local_408 [24];
  int *local_3f0 [4];
  QVariant local_3d0 [2];
  QArrayData *local_3b8;
  QArrayData *local_3b0;
  CTaskGenericId local_3a8 [24];
  int *local_390 [4];
  QVariant local_370 [2];
  QArrayData *local_358;
  QArrayData *local_350;
  CTaskGenericId local_348 [24];
  int *local_330 [4];
  QVariant local_310 [2];
  QArrayData *local_2f8;
  QArrayData *local_2f0;
  CTaskGenericId local_2e8 [24];
  int *local_2d0 [4];
  QVariant local_2b0 [2];
  QArrayData *local_298;
  QArrayData *local_290;
  CTaskGenericId local_288 [24];
  int *local_270 [4];
  QVariant local_250 [2];
  QArrayData *local_238;
  CTaskGenericId local_230 [24];
  int *local_218 [4];
  QVariant local_1f8 [2];
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  Data *local_1c8;
  QArrayData *local_1c0;
  CTaskGenericId local_1b8 [24];
  undefined1 local_1a0;
  undefined7 uStack_19f;
  QVariant local_180 [2];
  QArrayData *local_168;
  CTaskGenericId local_160 [24];
  QArrayData *local_148;
  QArrayData *local_140;
  CTaskGenericId local_138 [24];
  Data *local_120;
  Data *local_118;
  Data *local_110;
  Data *local_108;
  int local_100;
  undefined1 local_f8;
  undefined7 uStack_f7;
  QVariant local_d8 [2];
  undefined4 local_bc;
  QVariant local_b8;
  Node *local_a8;
  Data *local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  undefined1 local_31;
  
  uVar21 = FUN_100152280();
  pQVar22 = (QObject *)FUN_100154930(uVar21,param_2 + 8,param_2);
  if (pQVar22 == (QObject *)0x0) {
    FUN_100df99c0("","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]","0 != vm",
                  "ActionManager/ActionUpdater/CActionUpdateConditions.cpp",0xd7,"setupVmSignals");
    return;
  }
  QSignalMapper::setMapping(*(QObject **)(param_1 + 0x20),pQVar22);
  QObject::connect(&local_40,pQVar22,"2vmConfigurationChanged(const CVmConfiguration&)",
                   *(undefined8 *)(param_1 + 0x20),"1map()",0);
  if (local_40 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_40);
    QObject::connect((Connection *)&local_48,pQVar22,
                     "2vmStateChanged(VIRTUAL_MACHINE_STATE, VIRTUAL_MACHINE_STATE)",
                     *(undefined8 *)(param_1 + 0x20),"1map()",0);
    QMetaObject::Connection::~Connection((Connection *)&local_48);
    uVar21 = *(undefined8 *)(param_1 + 0x20);
LAB_1006a1e9f:
    QObject::connect((Connection *)&local_50,pQVar22,
                     "2vmAdditionStateChanged(VIRTUAL_MACHINE_ADDITION_STATE, VIRTUAL_MACHINE_ADDITION_STATE)"
                     ,uVar21,"1map()",0);
    QMetaObject::Connection::~Connection((Connection *)&local_50);
    uVar21 = *(undefined8 *)(param_1 + 0x20);
LAB_1006a1ec7:
    QObject::connect((Connection *)&local_58,pQVar22,
                     "2vmToolsStateChanged(PRL_VM_TOOLS_STATE, PRL_VM_TOOLS_STATE)",uVar21,"1map()",
                     0);
    QMetaObject::Connection::~Connection((Connection *)&local_58);
    uVar21 = *(undefined8 *)(param_1 + 0x20);
LAB_1006a1eef:
    QObject::connect((Connection *)&local_60,pQVar22,"2vmAccessRightsChanged()",uVar21,"1map()",0);
    QMetaObject::Connection::~Connection((Connection *)&local_60);
    uVar21 = *(undefined8 *)(param_1 + 0x20);
LAB_1006a1f17:
    QObject::connect((Connection *)&local_68,pQVar22,"2vmHWUpgradeProgressChanged(uint, int)",uVar21
                     ,"1map()",0);
    QMetaObject::Connection::~Connection((Connection *)&local_68);
    uVar21 = *(undefined8 *)(param_1 + 0x20);
LAB_1006a1f3f:
    QObject::connect((Connection *)&local_70,pQVar22,"2vmHWUpgradeFinished()",uVar21,"1map()",0);
    QMetaObject::Connection::~Connection((Connection *)&local_70);
    uVar21 = *(undefined8 *)(param_1 + 0x20);
LAB_1006a1f67:
    QObject::connect((Connection *)&local_78,pQVar22,"2osInstallingChanged(bool)",uVar21,"1map()",0)
    ;
    QMetaObject::Connection::~Connection((Connection *)&local_78);
    uVar21 = *(undefined8 *)(param_1 + 0x20);
LAB_1006a1f95:
    cVar6 = '\0';
    QObject::connect(&local_80,pQVar22,"2snapshotsTreeChanged()",uVar21,"1map()",0);
  }
  else {
    cVar6 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_40);
    QObject::connect(&local_48,pQVar22,
                     "2vmStateChanged(VIRTUAL_MACHINE_STATE, VIRTUAL_MACHINE_STATE)",
                     *(undefined8 *)(param_1 + 0x20),"1map()",0);
    if ((cVar6 == '\0') || (local_48 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_48);
      uVar21 = *(undefined8 *)(param_1 + 0x20);
      goto LAB_1006a1e9f;
    }
    cVar6 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_48);
    QObject::connect(&local_50,pQVar22,
                     "2vmAdditionStateChanged(VIRTUAL_MACHINE_ADDITION_STATE, VIRTUAL_MACHINE_ADDITION_STATE)"
                     ,*(undefined8 *)(param_1 + 0x20),"1map()",0);
    if ((cVar6 == '\0') || (local_50 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_50);
      uVar21 = *(undefined8 *)(param_1 + 0x20);
      goto LAB_1006a1ec7;
    }
    cVar6 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_50);
    QObject::connect(&local_58,pQVar22,
                     "2vmToolsStateChanged(PRL_VM_TOOLS_STATE, PRL_VM_TOOLS_STATE)",
                     *(undefined8 *)(param_1 + 0x20),"1map()",0);
    if ((cVar6 == '\0') || (local_58 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_58);
      uVar21 = *(undefined8 *)(param_1 + 0x20);
      goto LAB_1006a1eef;
    }
    cVar6 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_58);
    QObject::connect(&local_60,pQVar22,"2vmAccessRightsChanged()",*(undefined8 *)(param_1 + 0x20),
                     "1map()",0);
    if ((cVar6 == '\0') || (local_60 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_60);
      uVar21 = *(undefined8 *)(param_1 + 0x20);
      goto LAB_1006a1f17;
    }
    cVar6 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_60);
    QObject::connect(&local_68,pQVar22,"2vmHWUpgradeProgressChanged(uint, int)",
                     *(undefined8 *)(param_1 + 0x20),"1map()",0);
    if ((cVar6 == '\0') || (local_68 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_68);
      uVar21 = *(undefined8 *)(param_1 + 0x20);
      goto LAB_1006a1f3f;
    }
    cVar6 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_68);
    QObject::connect(&local_70,pQVar22,"2vmHWUpgradeFinished()",*(undefined8 *)(param_1 + 0x20),
                     "1map()",0);
    if ((cVar6 == '\0') || (local_70 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_70);
      uVar21 = *(undefined8 *)(param_1 + 0x20);
      goto LAB_1006a1f67;
    }
    cVar6 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_70);
    QObject::connect(&local_78,pQVar22,"2osInstallingChanged(bool)",*(undefined8 *)(param_1 + 0x20),
                     "1map()",0);
    if ((cVar6 == '\0') || (local_78 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_78);
      uVar21 = *(undefined8 *)(param_1 + 0x20);
      goto LAB_1006a1f95;
    }
    cVar7 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_78);
    cVar6 = '\0';
    QObject::connect(&local_80,pQVar22,"2snapshotsTreeChanged()",*(undefined8 *)(param_1 + 0x20),
                     "1map()",0);
    if (cVar7 != '\0') {
      if (local_80 == 0) {
        cVar6 = '\0';
      }
      else {
        cVar6 = QMetaObject::Connection::isConnected_helper();
      }
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_80);
  pQVar3 = *(QObject **)(param_1 + 0x20);
  uVar21 = FUN_10018c280(pQVar22);
  pQVar23 = (QObject *)FUN_100319c00(uVar21);
  QSignalMapper::setMapping(pQVar3,pQVar23);
  uVar21 = FUN_10018c280(pQVar22);
  uVar21 = FUN_100319c00(uVar21);
  QObject::connect(&local_88,uVar21,"2coherenceToolAvailabilityChanged(bool)",
                   *(undefined8 *)(param_1 + 0x20),"1map()",0);
  if ((cVar6 == '\0') || (local_88 == 0)) {
    QMetaObject::Connection::~Connection((Connection *)&local_88);
    pQVar3 = *(QObject **)(param_1 + 0x20);
    pQVar23 = (QObject *)FUN_10018c280(pQVar22);
    QSignalMapper::setMapping(pQVar3,pQVar23);
    uVar21 = FUN_10018c280(pQVar22);
    cVar6 = '\0';
    QObject::connect(&local_90,uVar21,"2availableGuestDisplaysCountChanged(uint)",
                     *(undefined8 *)(param_1 + 0x20),"1map()",0);
  }
  else {
    cVar7 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_88);
    pQVar3 = *(QObject **)(param_1 + 0x20);
    pQVar23 = (QObject *)FUN_10018c280(pQVar22);
    QSignalMapper::setMapping(pQVar3,pQVar23);
    uVar21 = FUN_10018c280(pQVar22);
    cVar6 = '\0';
    QObject::connect(&local_90,uVar21,"2availableGuestDisplaysCountChanged(uint)",
                     *(undefined8 *)(param_1 + 0x20),"1map()",0);
    if (cVar7 != '\0') {
      if (local_90 == 0) {
        cVar6 = '\0';
      }
      else {
        cVar6 = QMetaObject::Connection::isConnected_helper();
      }
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_90);
  pQVar3 = *(QObject **)(param_1 + 0x20);
  uVar21 = FUN_10018c280(pQVar22);
  pQVar23 = (QObject *)FUN_100319960(uVar21);
  QSignalMapper::setMapping(pQVar3,pQVar23);
  uVar21 = FUN_10018c280(pQVar22);
  uVar21 = FUN_100319960(uVar21);
  bVar8 = 0;
  QObject::connect(&local_98,uVar21,
                   "2viewModeChanged(GUI::VmDisplayViewMode, GUI::VmDisplayViewMode)",
                   *(undefined8 *)(param_1 + 0x20),"1map()",0);
  if (cVar6 != '\0') {
    if (local_98 == 0) {
      bVar8 = 0;
    }
    else {
      bVar8 = QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_98);
  local_a0 = (Data *)PTR_shared_null_1021e15e8;
  FUN_100693390(&local_a8,*(undefined8 *)(param_1 + 0x18),pQVar22);
  pNVar25 = local_a8;
  if (1 < *(int *)(local_a8 + 0x10) + 1U) {
    LOCK();
    pNVar24 = local_a8 + 0x10;
    *(int *)pNVar24 = *(int *)pNVar24 + 1;
    local_31 = *(int *)pNVar24 != 0;
    UNLOCK();
  }
  pNVar24 = local_a8;
  if ((((byte)local_a8[0x28] & 1) == 0) && (1 < *(uint *)(local_a8 + 0x10))) {
    pNVar24 = (Node *)QHashData::detach_helper
                                ((_func_void_Node_ptr_void_ptr *)local_a8,FUN_1006941c0,0x6941f0,
                                 0x18);
    if (*(int *)(pNVar25 + 0x10) != -1) {
      if (*(int *)(pNVar25 + 0x10) != 0) {
        LOCK();
        pNVar1 = pNVar25 + 0x10;
        *(int *)pNVar1 = *(int *)pNVar1 + -1;
        local_31 = *(int *)pNVar1 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006a2242;
      }
      QHashData::free_helper((_func_void_Node_ptr *)pNVar25);
    }
  }
LAB_1006a2242:
  iVar20 = *(int *)(pNVar24 + 0x20);
  pNVar25 = pNVar24;
  if (iVar20 != 0) {
    plVar28 = *(long **)(pNVar24 + 8);
    do {
      pNVar25 = (Node *)*plVar28;
      if ((Node *)*plVar28 != pNVar24) break;
      iVar20 = iVar20 + -1;
      plVar28 = plVar28 + 1;
      pNVar25 = pNVar24;
    } while (iVar20 != 0);
  }
  if (*(int *)(local_a8 + 0x10) != -1) {
    if (*(int *)(local_a8 + 0x10) != 0) {
      LOCK();
      pNVar1 = local_a8 + 0x10;
      *(int *)pNVar1 = *(int *)pNVar1 + -1;
      local_31 = *(int *)pNVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006a22aa;
    }
    QHashData::free_helper((_func_void_Node_ptr *)local_a8);
  }
LAB_1006a22aa:
  if (pNVar25 != pNVar24) {
    do {
      uVar21 = *(undefined8 *)(pNVar25 + 0x10);
      QObject::property((char *)&local_b8);
      cVar6 = QVariant::toBool();
      QVariant::~QVariant(&local_b8);
      if (cVar6 != '\0') {
        local_bc = FUN_1006947d0(uVar21);
        FUN_100071ff0(&local_a0,&local_bc);
      }
      pNVar25 = (Node *)QHashData::nextNode(pNVar25);
    } while (pNVar25 != pNVar24);
  }
  if (*(int *)(pNVar24 + 0x10) != -1) {
    if (*(int *)(pNVar24 + 0x10) != 0) {
      LOCK();
      pNVar25 = pNVar24 + 0x10;
      *(int *)pNVar25 = *(int *)pNVar25 + -1;
      local_31 = *(int *)pNVar25 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006a2379;
    }
    QHashData::free_helper((_func_void_Node_ptr *)pNVar24);
  }
LAB_1006a2379:
  uVar21 = *(undefined8 *)(param_1 + 0x10);
  uVar26 = FUN_10018c280(pQVar22);
  uVar26 = FUN_100319960(uVar26);
  bVar9 = FUN_1006a80b0(uVar21,uVar26,
                        "2viewModeChanged(GUI::VmDisplayViewMode, GUI::VmDisplayViewMode)",&local_a0
                        ,pQVar22);
  FUN_1006a7d30(&local_f8,*(undefined8 *)(param_1 + 0x10),pQVar22);
  cVar6 = FUN_10019cd90(&local_f8);
  if (cVar6 == '\0') {
    FUN_100df99c0("","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]","updateSlot.isValid()",
                  "ActionManager/ActionUpdater/CActionUpdateConditions.cpp",0x115,"setupVmSignals");
  }
  FUN_100249910(&local_120);
  local_118 = local_120;
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 == 0) {
      QListData::detach((int)&local_118);
      lVar29 = (long)*(int *)(local_118 + 8);
      if ((local_120 + (long)*(int *)(local_120 + 8) * 8 != local_118 + lVar29 * 8) &&
         (lVar30 = *(int *)(local_118 + 0xc) - lVar29,
         lVar30 != 0 && lVar29 <= *(int *)(local_118 + 0xc))) {
        _memcpy(local_118 + lVar29 * 8 + 0x10,local_120 + (long)*(int *)(local_120 + 8) * 8 + 0x10,
                lVar30 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + 1;
      local_31 = *(int *)local_120 != 0;
      UNLOCK();
    }
  }
  local_110 = local_118 + (long)*(int *)(local_118 + 8) * 8 + 0x10;
  local_108 = local_118 + (long)*(int *)(local_118 + 0xc) * 8 + 0x10;
  local_100 = 1;
  if (*(int *)local_120 == -1) {
LAB_1006a254a:
    if (local_110 != local_108) {
      do {
        uVar2 = *(undefined4 *)local_110;
        uVar21 = CTaskManager::instance();
        FUN_100188480(&local_140,pQVar22);
        FUN_1001884b0(&local_148,pQVar22);
        FUN_1001910e0(local_138,&local_140,&local_148,uVar2);
        CTaskManager::addTaskWatcher(uVar21,&local_f8,local_138,0x30);
        CTaskGenericId::~CTaskGenericId(local_138);
        if (*(int *)local_148 != -1) {
          if (*(int *)local_148 != 0) {
            LOCK();
            *(int *)local_148 = *(int *)local_148 + -1;
            local_31 = *(int *)local_148 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1006a25f9;
          }
          QArrayData::deallocate(local_148,2,8);
        }
LAB_1006a25f9:
        if (*(int *)local_140 != -1) {
          if (*(int *)local_140 != 0) {
            LOCK();
            *(int *)local_140 = *(int *)local_140 + -1;
            local_31 = *(int *)local_140 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1006a262f;
          }
          QArrayData::deallocate(local_140,2,8);
        }
LAB_1006a262f:
        local_110 = local_110 + 8;
        local_100 = 1;
      } while (local_110 != local_108);
    }
  }
  else {
    if (*(int *)local_120 == 0) {
LAB_1006a2531:
      QListData::dispose(local_120);
    }
    else {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      local_31 = *(int *)local_120 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_1006a2531;
    }
    if (local_100 != 0) goto LAB_1006a254a;
  }
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_31 = *(int *)local_118 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006a268e;
    }
    QListData::dispose(local_118);
  }
LAB_1006a268e:
  uVar21 = CTaskManager::instance();
  FUN_100188480(&local_168,pQVar22);
  FUN_100033dd0(local_160,&local_168);
  CTaskManager::addTaskWatcher(uVar21,&local_f8,local_160,0x26);
  CTaskGenericId::~CTaskGenericId(local_160);
  if (*(int *)local_168 != -1) {
    if (*(int *)local_168 != 0) {
      LOCK();
      *(int *)local_168 = *(int *)local_168 + -1;
      local_31 = *(int *)local_168 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006a2715;
    }
    QArrayData::deallocate(local_168,2,8);
  }
LAB_1006a2715:
  FUN_1006a7bb0(&local_1a0,*(undefined8 *)(param_1 + 0x10),0x83,pQVar22);
  cVar6 = FUN_10019cd90(&local_1a0);
  if (cVar6 == '\0') {
    FUN_100df99c0("","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "dumpUpdateSlot.isValid()",
                  "ActionManager/ActionUpdater/CActionUpdateConditions.cpp",0x11f,"setupVmSignals");
  }
  uVar21 = CTaskManager::instance();
  FUN_100188480(&local_1c0,pQVar22);
  FUN_1002d39d0(local_1b8,&local_1c0);
  CTaskManager::addTaskWatcher(uVar21,&local_1a0,local_1b8,0x26);
  CTaskGenericId::~CTaskGenericId(local_1b8);
  if (*(int *)local_1c0 != -1) {
    if (*(int *)local_1c0 != 0) {
      LOCK();
      *(int *)local_1c0 = *(int *)local_1c0 + -1;
      local_31 = *(int *)local_1c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006a2807;
    }
    QArrayData::deallocate(local_1c0,2,8);
  }
LAB_1006a2807:
  uVar21 = *(undefined8 *)(param_1 + 0x10);
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar27 = operator_new(0x18);
    FUN_1001a61d0(pvVar27);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar27;
  }
  bVar10 = FUN_1006a83c0(uVar21,DAT_1023108e0,"2vmAdded(GUI::VmId)",0x8f,pQVar22);
  uVar21 = *(undefined8 *)(param_1 + 0x10);
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar27 = operator_new(0x18);
    FUN_1001a61d0(pvVar27);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar27;
  }
  bVar11 = FUN_1006a83c0(uVar21,DAT_1023108e0,"2vmRemoved(GUI::VmId)",0x8f,pQVar22);
  uVar21 = *(undefined8 *)(param_1 + 0x10);
  uVar26 = FUN_10018c280(pQVar22);
  uVar26 = FUN_100319c60(uVar26);
  bVar12 = FUN_1006a83c0(uVar21,uVar26,"2taskBarVisibilityStateChanged(bool, bool)",0x45,pQVar22);
  uVar21 = *(undefined8 *)(param_1 + 0x10);
  uVar26 = FUN_10018c280(pQVar22);
  uVar26 = FUN_100319c60(uVar26);
  bVar13 = FUN_1006a83c0(uVar21,uVar26,"2desktopVisibilityStateChanged(bool)",0x46,pQVar22);
  local_1c8 = (Data *)PTR_shared_null_1021e15e8;
  local_1cc = 0x45;
  FUN_100071ff0(&local_1c8,&local_1cc);
  local_1d0 = 0x46;
  FUN_100071ff0(&local_1c8,&local_1d0);
  local_1d4 = 0x44;
  FUN_100071ff0(&local_1c8,&local_1d4);
  local_1d8 = 0x48;
  FUN_100071ff0(&local_1c8,&local_1d8);
  local_1dc = 0x47;
  FUN_100071ff0(&local_1c8,&local_1dc);
  local_1e0 = 0x17;
  FUN_100071ff0(&local_1c8,&local_1e0);
  uVar21 = *(undefined8 *)(param_1 + 0x10);
  uVar26 = FUN_10018c280(pQVar22);
  uVar26 = FUN_100319c60(uVar26);
  bVar14 = FUN_1006a80b0(uVar21,uVar26,"2activated()",&local_1c8,pQVar22);
  uVar21 = *(undefined8 *)(param_1 + 0x10);
  uVar26 = FUN_10018c280(pQVar22);
  uVar26 = FUN_100319c60(uVar26);
  bVar15 = FUN_1006a80b0(uVar21,uVar26,"2deactivated()",&local_1c8,pQVar22);
  uVar21 = *(undefined8 *)(param_1 + 0x10);
  uVar26 = FUN_10018c280(pQVar22);
  bVar16 = FUN_1006a83c0(uVar21,uVar26,
                         "2windows7LookStatusChanged(CVmDesktop::GuestAppStatus, CVmDesktop::GuestAppStatus)"
                         ,0x66,pQVar22);
  FUN_1006a7bb0(local_218,*(undefined8 *)(param_1 + 0x10),0x66,pQVar22);
  cVar6 = FUN_10019cd90(local_218);
  if (cVar6 == '\0') {
    FUN_100df99c0("","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "windows7LookSlot.isValid()",
                  "ActionManager/ActionUpdater/CActionUpdateConditions.cpp",0x146,"setupVmSignals");
  }
  uVar21 = CTaskManager::instance();
  FUN_100188480(&local_238,pQVar22);
  FUN_1002bab50(local_230,&local_238);
  CTaskManager::addTaskWatcher(uVar21,local_218,local_230,0x24);
  CTaskGenericId::~CTaskGenericId(local_230);
  if (*(int *)local_238 != -1) {
    if (*(int *)local_238 != 0) {
      LOCK();
      *(int *)local_238 = *(int *)local_238 + -1;
      local_31 = *(int *)local_238 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006a2b57;
    }
    QArrayData::deallocate(local_238,2,8);
  }
LAB_1006a2b57:
  FUN_1006a7bb0(local_270,*(undefined8 *)(param_1 + 0x10),0x7c,pQVar22);
  cVar6 = FUN_10019cd90(local_270);
  if (cVar6 == '\0') {
    FUN_100df99c0("","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "retinaScaledSlot.isValid()",
                  "ActionManager/ActionUpdater/CActionUpdateConditions.cpp",0x14c,"setupVmSignals");
  }
  uVar21 = CTaskManager::instance();
  FUN_100188480(&local_290,pQVar22);
  FUN_1001884b0(&local_298,pQVar22);
  FUN_1002d11e0(local_288,&local_290,&local_298);
  CTaskManager::addTaskWatcher(uVar21,local_270,local_288,0x26);
  CTaskGenericId::~CTaskGenericId(local_288);
  if (*(int *)local_298 != -1) {
    if (*(int *)local_298 != 0) {
      LOCK();
      *(int *)local_298 = *(int *)local_298 + -1;
      local_31 = *(int *)local_298 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006a2c5f;
    }
    QArrayData::deallocate(local_298,2,8);
  }
LAB_1006a2c5f:
  if (*(int *)local_290 != -1) {
    if (*(int *)local_290 != 0) {
      LOCK();
      *(int *)local_290 = *(int *)local_290 + -1;
      local_31 = *(int *)local_290 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006a2c95;
    }
    QArrayData::deallocate(local_290,2,8);
  }
LAB_1006a2c95:
  FUN_1006a7bb0(local_2d0,*(undefined8 *)(param_1 + 0x10),0x7d,pQVar22);
  cVar6 = FUN_10019cd90(local_2d0);
  if (cVar6 == '\0') {
    FUN_100df99c0("","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "retinaBestSlot.isValid()",
                  "ActionManager/ActionUpdater/CActionUpdateConditions.cpp",0x152,"setupVmSignals");
  }
  uVar21 = CTaskManager::instance();
  FUN_100188480(&local_2f0,pQVar22);
  FUN_1001884b0(&local_2f8,pQVar22);
  FUN_1002d11e0(local_2e8,&local_2f0,&local_2f8);
  CTaskManager::addTaskWatcher(uVar21,local_2d0,local_2e8,0x26);
  CTaskGenericId::~CTaskGenericId(local_2e8);
  if (*(int *)local_2f8 != -1) {
    if (*(int *)local_2f8 != 0) {
      LOCK();
      *(int *)local_2f8 = *(int *)local_2f8 + -1;
      local_31 = *(int *)local_2f8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006a2dab;
    }
    QArrayData::deallocate(local_2f8,2,8);
  }
LAB_1006a2dab:
  if (*(int *)local_2f0 != -1) {
    if (*(int *)local_2f0 != 0) {
      LOCK();
      *(int *)local_2f0 = *(int *)local_2f0 + -1;
      local_31 = *(int *)local_2f0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006a2de1;
    }
    QArrayData::deallocate(local_2f0,2,8);
  }
LAB_1006a2de1:
  FUN_1006a7bb0(local_330,*(undefined8 *)(param_1 + 0x10),0x7e,pQVar22);
  cVar6 = FUN_10019cd90(local_330);
  if (cVar6 == '\0') {
    FUN_100df99c0("","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "retinaMoreSpaceSlot.isValid()",
                  "ActionManager/ActionUpdater/CActionUpdateConditions.cpp",0x158,"setupVmSignals");
  }
  uVar21 = CTaskManager::instance();
  FUN_100188480(&local_350,pQVar22);
  FUN_1001884b0(&local_358,pQVar22);
  FUN_1002d11e0(local_348,&local_350,&local_358);
  CTaskManager::addTaskWatcher(uVar21,local_330,local_348,0x26);
  CTaskGenericId::~CTaskGenericId(local_348);
  if (*(int *)local_358 != -1) {
    if (*(int *)local_358 != 0) {
      LOCK();
      *(int *)local_358 = *(int *)local_358 + -1;
      local_31 = *(int *)local_358 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006a2eec;
    }
    QArrayData::deallocate(local_358,2,8);
  }
LAB_1006a2eec:
  if (*(int *)local_350 != -1) {
    if (*(int *)local_350 != 0) {
      LOCK();
      *(int *)local_350 = *(int *)local_350 + -1;
      local_31 = *(int *)local_350 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006a2f22;
    }
    QArrayData::deallocate(local_350,2,8);
  }
LAB_1006a2f22:
  uVar21 = *(undefined8 *)(param_1 + 0x10);
  if (DAT_102310838 == (void *)0x0) {
    pvVar27 = operator_new(0x18);
    FUN_1000392c0(pvVar27);
    DAT_102274b18 = 1;
    DAT_102310838 = pvVar27;
  }
  bVar17 = FUN_1006a83c0(uVar21,DAT_102310838,"2windowVisibilityChanged( const QString&, bool)",0x62
                         ,pQVar22);
  uVar21 = *(undefined8 *)(param_1 + 0x10);
  uVar26 = FUN_10018c280(pQVar22);
  bVar18 = FUN_1006a83c0(uVar21,uVar26,
                         "2toolsInstallationStageChanged(CVmDesktop::ToolsInstallationStage, CVmDesktop::ToolsInstallationStage)"
                         ,0x3b,pQVar22);
  FUN_1006a7bb0(local_390,*(undefined8 *)(param_1 + 0x10),0x39,pQVar22);
  FUN_100188480(&local_3b0,pQVar22);
  FUN_1001884b0(&local_3b8,pQVar22);
  FUN_1002752f0(local_3a8,&local_3b0,&local_3b8);
  cVar6 = FUN_10019cd90(local_390);
  if (cVar6 == '\0') {
    FUN_100df99c0("","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]","slot.isValid()",
                  "ActionManager/ActionUpdater/CActionUpdateConditions.cpp",0xce,"setTaskWatcher");
  }
  uVar21 = CTaskManager::instance();
  CTaskManager::addTaskWatcher(uVar21,local_390,local_3a8,0x26);
  CTaskGenericId::~CTaskGenericId(local_3a8);
  if (*(int *)local_3b8 != -1) {
    if (*(int *)local_3b8 != 0) {
      LOCK();
      *(int *)local_3b8 = *(int *)local_3b8 + -1;
      local_31 = *(int *)local_3b8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006a30b6;
    }
    QArrayData::deallocate(local_3b8,2,8);
  }
LAB_1006a30b6:
  if (*(int *)local_3b0 != -1) {
    if (*(int *)local_3b0 != 0) {
      LOCK();
      *(int *)local_3b0 = *(int *)local_3b0 + -1;
      local_31 = *(int *)local_3b0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006a30ec;
    }
    QArrayData::deallocate(local_3b0,2,8);
  }
LAB_1006a30ec:
  QVariant::~QVariant(local_370);
  if (local_390[0] != (int *)0x0) {
    LOCK();
    *local_390[0] = *local_390[0] + -1;
    local_31 = *local_390[0] != 0;
    UNLOCK();
    if ((!(bool)local_31) && (local_390[0] != (int *)0x0)) {
      operator_delete(local_390[0]);
    }
  }
  FUN_1006a7bb0(local_3f0,*(undefined8 *)(param_1 + 0x10),0x22,pQVar22);
  FUN_100188480(&local_410,pQVar22);
  FUN_1001884b0(&local_418,pQVar22);
  FUN_100276dd0(local_408,&local_410,&local_418,0);
  cVar6 = FUN_10019cd90(local_3f0);
  if (cVar6 == '\0') {
    FUN_100df99c0("","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]","slot.isValid()",
                  "ActionManager/ActionUpdater/CActionUpdateConditions.cpp",0xce,"setTaskWatcher");
  }
  uVar21 = CTaskManager::instance();
  CTaskManager::addTaskWatcher(uVar21,local_3f0,local_408,0x26);
  CTaskGenericId::~CTaskGenericId(local_408);
  if (*(int *)local_418 != -1) {
    if (*(int *)local_418 != 0) {
      LOCK();
      *(int *)local_418 = *(int *)local_418 + -1;
      local_31 = *(int *)local_418 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006a3230;
    }
    QArrayData::deallocate(local_418,2,8);
  }
LAB_1006a3230:
  if (*(int *)local_410 != -1) {
    if (*(int *)local_410 != 0) {
      LOCK();
      *(int *)local_410 = *(int *)local_410 + -1;
      local_31 = *(int *)local_410 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006a3266;
    }
    QArrayData::deallocate(local_410,2,8);
  }
LAB_1006a3266:
  QVariant::~QVariant(local_3d0);
  if (local_3f0[0] != (int *)0x0) {
    LOCK();
    *local_3f0[0] = *local_3f0[0] + -1;
    local_31 = *local_3f0[0] != 0;
    UNLOCK();
    if ((!(bool)local_31) && (local_3f0[0] != (int *)0x0)) {
      operator_delete(local_3f0[0]);
    }
  }
  FUN_1006a7bb0(local_450,*(undefined8 *)(param_1 + 0x10),0x23,pQVar22);
  FUN_100188480(&local_470,pQVar22);
  FUN_1001884b0(&local_478,pQVar22);
  FUN_100276dd0(local_468,&local_470,&local_478,1);
  cVar6 = FUN_10019cd90(local_450);
  if (cVar6 == '\0') {
    FUN_100df99c0("","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]","slot.isValid()",
                  "ActionManager/ActionUpdater/CActionUpdateConditions.cpp",0xce,"setTaskWatcher");
  }
  uVar21 = CTaskManager::instance();
  CTaskManager::addTaskWatcher(uVar21,local_450,local_468,0x26);
  CTaskGenericId::~CTaskGenericId(local_468);
  if (*(int *)local_478 != -1) {
    if (*(int *)local_478 != 0) {
      LOCK();
      *(int *)local_478 = *(int *)local_478 + -1;
      local_31 = *(int *)local_478 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006a33ad;
    }
    QArrayData::deallocate(local_478,2,8);
  }
LAB_1006a33ad:
  if (*(int *)local_470 != -1) {
    if (*(int *)local_470 != 0) {
      LOCK();
      *(int *)local_470 = *(int *)local_470 + -1;
      local_31 = *(int *)local_470 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006a33e3;
    }
    QArrayData::deallocate(local_470,2,8);
  }
LAB_1006a33e3:
  QVariant::~QVariant(local_430);
  if (local_450[0] != (int *)0x0) {
    LOCK();
    *local_450[0] = *local_450[0] + -1;
    local_31 = *local_450[0] != 0;
    UNLOCK();
    if ((!(bool)local_31) && (local_450[0] != (int *)0x0)) {
      operator_delete(local_450[0]);
    }
  }
  uVar21 = *(undefined8 *)(param_1 + 0x10);
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar27 = operator_new(0x18);
    FUN_1001a61d0(pvVar27);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar27;
  }
  bVar19 = FUN_1006a83c0(uVar21,DAT_1023108e0,"2appPreferencesChanged()",0xc,pQVar22);
  lVar29 = FUN_100190790(pQVar22);
  bVar19 = bVar8 & bVar9 & bVar10 & bVar11 & bVar12 & bVar13 & bVar14 & bVar15 & bVar16 & bVar17 &
           bVar18 & bVar19;
  if (lVar29 != 0) {
    uVar21 = *(undefined8 *)(param_1 + 0x10);
    uVar26 = FUN_100190790(pQVar22);
    bVar8 = FUN_1006a83c0(uVar21,uVar26,"2debuggerStateChanged(PRL_VM_DEBUGGER_STATE)",0x84,pQVar22)
    ;
    bVar19 = bVar19 & bVar8;
  }
  uVar21 = *(undefined8 *)(param_1 + 0x10);
  uVar26 = FUN_100748240();
  local_480 = (QArrayData *)QString::fromAscii_helper("win10.upgrade.advisor",0x15);
  uVar26 = FUN_100748290(uVar26,&local_480);
  bVar8 = FUN_1006a83c0(uVar21,uVar26,"2stateChanged(WebStore::CCatalogModel::State)",0x85,pQVar22);
  if (*(int *)local_480 != -1) {
    if (*(int *)local_480 != 0) {
      LOCK();
      *(int *)local_480 = *(int *)local_480 + -1;
      local_31 = *(int *)local_480 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006a358e;
    }
    QArrayData::deallocate(local_480,2,8);
  }
LAB_1006a358e:
  uVar21 = *(undefined8 *)(param_1 + 0x10);
  uVar26 = FUN_100748240();
  local_488 = (QArrayData *)QString::fromAscii_helper("antivirus.kasperskiy.guest",0x1a);
  uVar26 = FUN_100748290(uVar26,&local_488);
  bVar9 = FUN_1006a83c0(uVar21,uVar26,"2stateChanged(WebStore::CCatalogModel::State)",0x3c,pQVar22);
  if (*(int *)local_488 != -1) {
    if (*(int *)local_488 != 0) {
      LOCK();
      *(int *)local_488 = *(int *)local_488 + -1;
      local_31 = *(int *)local_488 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006a361b;
    }
    QArrayData::deallocate(local_488,2,8);
  }
LAB_1006a361b:
  uVar21 = *(undefined8 *)(param_1 + 0x10);
  uVar26 = FUN_100748240();
  local_490 = (QArrayData *)QString::fromAscii_helper("win7look",8);
  uVar26 = FUN_100748290(uVar26,&local_490);
  bVar10 = FUN_1006a83c0(uVar21,uVar26,"2stateChanged(WebStore::CCatalogModel::State)",0x66,pQVar22)
  ;
  if (*(int *)local_490 != -1) {
    if (*(int *)local_490 != 0) {
      LOCK();
      *(int *)local_490 = *(int *)local_490 + -1;
      local_31 = *(int *)local_490 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006a36a8;
    }
    QArrayData::deallocate(local_490,2,8);
  }
LAB_1006a36a8:
  if ((bVar8 & bVar19 & bVar9 & bVar10) == 0) {
    FUN_100df99c0("","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]","isOk",
                  "ActionManager/ActionUpdater/CActionUpdateConditions.cpp",0x181,"setupVmSignals");
  }
  QVariant::~QVariant(local_310);
  if (local_330[0] != (int *)0x0) {
    LOCK();
    *local_330[0] = *local_330[0] + -1;
    local_31 = *local_330[0] != 0;
    UNLOCK();
    if ((!(bool)local_31) && (local_330[0] != (int *)0x0)) {
      operator_delete(local_330[0]);
    }
  }
  QVariant::~QVariant(local_2b0);
  if (local_2d0[0] != (int *)0x0) {
    LOCK();
    *local_2d0[0] = *local_2d0[0] + -1;
    local_31 = *local_2d0[0] != 0;
    UNLOCK();
    if ((!(bool)local_31) && (local_2d0[0] != (int *)0x0)) {
      operator_delete(local_2d0[0]);
    }
  }
  QVariant::~QVariant(local_250);
  if (local_270[0] != (int *)0x0) {
    LOCK();
    *local_270[0] = *local_270[0] + -1;
    local_31 = *local_270[0] != 0;
    UNLOCK();
    if ((!(bool)local_31) && (local_270[0] != (int *)0x0)) {
      operator_delete(local_270[0]);
    }
  }
  QVariant::~QVariant(local_1f8);
  if (local_218[0] != (int *)0x0) {
    LOCK();
    *local_218[0] = *local_218[0] + -1;
    local_31 = *local_218[0] != 0;
    UNLOCK();
    if ((!(bool)local_31) && (local_218[0] != (int *)0x0)) {
      operator_delete(local_218[0]);
    }
  }
  pDVar5 = local_1c8;
  if (*(int *)local_1c8 != -1) {
    if (*(int *)local_1c8 != 0) {
      LOCK();
      *(int *)local_1c8 = *(int *)local_1c8 + -1;
      local_31 = *(int *)local_1c8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006a384f;
    }
    iVar20 = *(int *)(local_1c8 + 0xc);
    if (iVar20 != *(int *)(local_1c8 + 8)) {
      lVar29 = (long)*(int *)(local_1c8 + 8) * 8 + (long)iVar20 * -8;
      pDVar31 = local_1c8 + (long)iVar20 * 8 + 8;
      do {
        if (*(void **)pDVar31 != (void *)0x0) {
          operator_delete(*(void **)pDVar31);
        }
        pDVar31 = pDVar31 + -8;
        lVar29 = lVar29 + 8;
      } while (lVar29 != 0);
    }
    QListData::dispose(pDVar5);
  }
LAB_1006a384f:
  QVariant::~QVariant(local_180);
  piVar4 = (int *)CONCAT71(uStack_19f,local_1a0);
  if (piVar4 != (int *)0x0) {
    LOCK();
    *piVar4 = *piVar4 + -1;
    local_31 = *piVar4 != 0;
    UNLOCK();
    if ((!(bool)local_31) && ((void *)CONCAT71(uStack_19f,local_1a0) != (void *)0x0)) {
      operator_delete((void *)CONCAT71(uStack_19f,local_1a0));
    }
  }
  QVariant::~QVariant(local_d8);
  piVar4 = (int *)CONCAT71(uStack_f7,local_f8);
  if (piVar4 != (int *)0x0) {
    LOCK();
    *piVar4 = *piVar4 + -1;
    local_1a0 = *piVar4 != 0;
    UNLOCK();
    if ((!(bool)local_1a0) && ((void *)CONCAT71(uStack_f7,local_f8) != (void *)0x0)) {
      operator_delete((void *)CONCAT71(uStack_f7,local_f8));
    }
  }
  pDVar5 = local_a0;
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      UNLOCK();
      if (*(int *)local_a0 != 0) {
        return;
      }
      local_f8 = 0;
    }
    iVar20 = *(int *)(local_a0 + 0xc);
    if (iVar20 != *(int *)(local_a0 + 8)) {
      lVar29 = (long)*(int *)(local_a0 + 8) * 8 + (long)iVar20 * -8;
      pDVar31 = local_a0 + (long)iVar20 * 8 + 8;
      do {
        if (*(void **)pDVar31 != (void *)0x0) {
          operator_delete(*(void **)pDVar31);
        }
        pDVar31 = pDVar31 + -8;
        lVar29 = lVar29 + 8;
      } while (lVar29 != 0);
    }
    QListData::dispose(pDVar5);
  }
  return;
}

