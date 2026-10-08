
void FUN_1006a1290(long param_1,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  undefined8 uVar7;
  QObject *pQVar8;
  undefined8 uVar9;
  QArrayData *local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  CTaskGenericId local_100 [24];
  int *local_e8 [4];
  QVariant local_c8 [2];
  undefined **local_b0 [3];
  Data_conflict local_98;
  undefined4 local_90;
  QArrayData *local_88;
  int *local_80 [4];
  QVariant local_60 [2];
  long local_48;
  long local_40;
  undefined1 local_31;
  
  uVar7 = FUN_100152280();
  pQVar8 = (QObject *)FUN_100152a20(uVar7,param_2);
  if (pQVar8 == (QObject *)0x0) {
    FUN_100df99c0("","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]","0 != server",
                  "ActionManager/ActionUpdater/CActionUpdateConditions.cpp",0x9d,
                  "setupServerSignals");
    return;
  }
  uVar7 = FUN_10016f500(pQVar8);
  QObject::connect(&local_40,uVar7,
                   "2licenseChanged(const CLicenseWrap::LicenseInfo&, const CLicenseWrap::LicenseInfo&)"
                   ,*(undefined8 *)(param_1 + 0x10),"1updateAllActions()",0);
  if (local_40 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_40);
LAB_1006a1363:
    bVar1 = false;
    FUN_100df99c0("","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]","isOk",
                  "ActionManager/ActionUpdater/CActionUpdateConditions.cpp",0xaa,
                  "setupServerSignals");
  }
  else {
    cVar2 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_40);
    bVar1 = true;
    if (cVar2 == '\0') goto LAB_1006a1363;
  }
  QSignalMapper::setMapping(*(QObject **)(param_1 + 0x20),pQVar8);
  bVar3 = 0;
  QObject::connect(&local_48,pQVar8,"2serverStateChanged(GUI::ServerState)",
                   *(undefined8 *)(param_1 + 0x20),"1map()",0);
  if (bVar1) {
    if (local_48 == 0) {
      bVar3 = 0;
    }
    else {
      bVar3 = QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_48);
  uVar9 = CTaskManager::instance();
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  local_88 = (QArrayData *)QString::fromAscii_helper("1updateAllActions()",0x13);
  local_90 = 0x80000000;
  local_98.field7 = 0;
  FUN_100a1c600(local_80,uVar7,&local_88,&local_98);
  CTaskGenericId::CTaskGenericId((CTaskGenericId *)local_b0,0x53);
  local_b0[0] = &PTR_FUN_10226c710;
  CTaskManager::addTaskWatcher(uVar9,local_80,local_b0,0x24);
  CTaskGenericId::~CTaskGenericId((CTaskGenericId *)local_b0);
  QVariant::~QVariant(local_60);
  if (local_80[0] != (int *)0x0) {
    LOCK();
    *local_80[0] = *local_80[0] + -1;
    local_31 = *local_80[0] != 0;
    UNLOCK();
    if ((!(bool)local_31) && (local_80[0] != (int *)0x0)) {
      operator_delete(local_80[0]);
    }
  }
  QVariant::~QVariant((QVariant *)&local_98);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006a150c;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1006a150c:
  FUN_1006a7bb0(local_e8,*(undefined8 *)(param_1 + 0x10),0x3d,pQVar8);
  cVar2 = FUN_10019cd90(local_e8);
  if (cVar2 == '\0') {
    FUN_100df99c0("","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "installPisSlot.isValid()",
                  "ActionManager/ActionUpdater/CActionUpdateConditions.cpp",0xb9,
                  "setupServerSignals");
  }
  uVar7 = CTaskManager::instance();
  FUN_10015aab0(&local_108,pQVar8);
  FUN_100178ec0(local_100,&local_108);
  CTaskManager::addTaskWatcher(uVar7,local_e8,local_100,0x26);
  CTaskGenericId::~CTaskGenericId(local_100);
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_31 = *(int *)local_108 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006a15fc;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_1006a15fc:
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  uVar9 = FUN_100748240();
  local_110 = (QArrayData *)QString::fromAscii_helper("atifm",5);
  uVar9 = FUN_100748290(uVar9,&local_110);
  bVar4 = FUN_1006a83c0(uVar7,uVar9,"2stateChanged(WebStore::CCatalogModel::State)",0x7b,pQVar8);
  if (*(int *)local_110 != -1) {
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      local_31 = *(int *)local_110 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006a1685;
    }
    QArrayData::deallocate(local_110,2,8);
  }
LAB_1006a1685:
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  uVar9 = FUN_100748240();
  local_118 = (QArrayData *)QString::fromAscii_helper("acronis.online.store",0x14);
  uVar9 = FUN_100748290(uVar9,&local_118);
  bVar5 = FUN_1006a83c0(uVar7,uVar9,"2stateChanged(WebStore::CCatalogModel::State)",0x7b,pQVar8);
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_31 = *(int *)local_118 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006a170b;
    }
    QArrayData::deallocate(local_118,2,8);
  }
LAB_1006a170b:
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  uVar9 = FUN_100748240();
  local_120 = (QArrayData *)QString::fromAscii_helper("antivirus.kasperskiy.host",0x19);
  uVar9 = FUN_100748290(uVar9,&local_120);
  bVar6 = FUN_1006a83c0(uVar7,uVar9,"2stateChanged(WebStore::CCatalogModel::State)",0x3d,pQVar8);
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      local_31 = *(int *)local_120 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006a1790;
    }
    QArrayData::deallocate(local_120,2,8);
  }
LAB_1006a1790:
  if ((bVar3 & bVar4 & bVar5 & bVar6) == 0) {
    FUN_100df99c0("","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]","isOk",
                  "ActionManager/ActionUpdater/CActionUpdateConditions.cpp",0xc9,
                  "setupServerSignals");
  }
  QVariant::~QVariant(local_c8);
  if (local_e8[0] != (int *)0x0) {
    LOCK();
    *local_e8[0] = *local_e8[0] + -1;
    local_31 = *local_e8[0] != 0;
    UNLOCK();
    if ((!(bool)local_31) && (local_e8[0] != (int *)0x0)) {
      operator_delete(local_e8[0]);
    }
  }
  return;
}

