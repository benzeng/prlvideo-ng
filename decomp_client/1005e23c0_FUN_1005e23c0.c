
void FUN_1005e23c0(long param_1,char *param_2)

{
  long lVar1;
  char cVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  long local_1c0;
  Data_conflict local_1b8;
  undefined4 local_1b0;
  QArrayData *local_1a8;
  int *local_1a0 [4];
  QVariant local_180 [2];
  QString local_168;
  QVariant local_160;
  long local_150;
  QArrayData *local_148;
  long local_140;
  QArrayData *local_138;
  long local_130;
  QArrayData *local_128;
  long local_120;
  QArrayData *local_118;
  long local_110;
  QArrayData *local_108;
  long local_100;
  QArrayData *local_f8;
  long local_f0;
  long local_e8;
  long local_e0 [19];
  undefined8 local_48;
  undefined8 uStack_40;
  
  if (param_2 == (char *)0x0) {
    return;
  }
  cVar2 = '\0';
  QObject::connect(local_e0,param_2,"2currentItemIdChanged()",param_1,"1onItemIdChanged()",0);
  if (local_e0[0] != 0) {
    cVar2 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)local_e0);
  lVar1 = param_1 + 0x38;
  uVar4 = FUN_1005ec980(lVar1);
  QObject::connect(&local_e8,param_1,"2itemIdChanged(const QString&)",uVar4,
                   "1onScenarioItemChanged(const QString&)",0);
  if ((cVar2 == '\0') || (local_e8 == 0)) {
    QMetaObject::Connection::~Connection((Connection *)&local_e8);
    uVar4 = FUN_1005ec980(lVar1);
    cVar2 = '\0';
    QObject::connect(&local_f0,param_2,"2itemDoubleClicked( const QString& )",uVar4,
                     "1onScenarioItemDoubleClicked(const QString&)",0);
  }
  else {
    cVar3 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_e8);
    uVar4 = FUN_1005ec980(lVar1);
    cVar2 = '\0';
    QObject::connect(&local_f0,param_2,"2itemDoubleClicked( const QString& )",uVar4,
                     "1onScenarioItemDoubleClicked(const QString&)",0);
    if (cVar3 != '\0') {
      if (local_f0 == 0) {
        cVar2 = '\0';
      }
      else {
        cVar2 = QMetaObject::Connection::isConnected_helper();
      }
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_f0);
  local_e0[0xf] = 0;
  local_e0[0x10] = 0;
  local_e0[0xd] = 0;
  local_e0[0xe] = 0;
  local_e0[0xb] = 0;
  local_e0[0xc] = 0;
  local_e0[9] = 0;
  local_e0[10] = 0;
  local_e0[7] = 0;
  local_e0[8] = 0;
  local_e0[5] = 0;
  local_e0[6] = 0;
  local_e0[3] = 0;
  local_e0[4] = 0;
  local_e0[1] = 0;
  local_e0[2] = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_e0[0x11] = 0;
  local_e0[0x12] = 0;
  QMetaObject::invokeMethod(param_2,"insertRecovery",0,0,0);
  lVar5 = FUN_1005ec990(lVar1);
  if (*(long *)(lVar5 + 0xa0) != 0) {
    local_e0[0xf] = 0;
    local_e0[0x10] = 0;
    local_e0[0xd] = 0;
    local_e0[0xe] = 0;
    local_e0[0xb] = 0;
    local_e0[0xc] = 0;
    local_e0[9] = 0;
    local_e0[10] = 0;
    local_e0[7] = 0;
    local_e0[8] = 0;
    local_e0[5] = 0;
    local_e0[6] = 0;
    local_e0[3] = 0;
    local_e0[4] = 0;
    local_e0[1] = 0;
    local_e0[2] = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_e0[0x11] = 0;
    local_e0[0x12] = 0;
    QMetaObject::invokeMethod(param_2,"updateDynamicAppliances",0,0,0);
  }
  local_e0[0xf] = 0;
  local_e0[0x10] = 0;
  local_e0[0xd] = 0;
  local_e0[0xe] = 0;
  local_e0[0xb] = 0;
  local_e0[0xc] = 0;
  local_e0[9] = 0;
  local_e0[10] = 0;
  local_e0[7] = 0;
  local_e0[8] = 0;
  local_e0[5] = 0;
  local_e0[6] = 0;
  local_e0[3] = 0;
  local_e0[4] = 0;
  local_e0[1] = 0;
  local_e0[2] = 0;
  local_48._0_1_ = 0;
  local_48._1_7_ = 0;
  uStack_40 = 0;
  local_e0[0x11] = 0;
  local_e0[0x12] = 0;
  QMetaObject::invokeMethod(param_2,"updateItems",0,0,0);
  uVar4 = FUN_100748240();
  local_f8 = (QArrayData *)QString::fromAscii_helper("os_win10",8);
  uVar4 = FUN_100748290(uVar4,&local_f8);
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      local_48._0_1_ = *(int *)local_f8 != 0;
      UNLOCK();
      if ((bool)(undefined1)local_48) goto LAB_1005e2945;
    }
    QArrayData::deallocate(local_f8,2,8);
  }
LAB_1005e2945:
  cVar3 = '\0';
  QObject::connect(&local_100,uVar4,"2stateChanged(WebStore::CCatalogModel::State)",param_2,
                   "1updateItems()",0);
  if (cVar2 != '\0') {
    if (local_100 == 0) {
      cVar3 = '\0';
    }
    else {
      cVar3 = QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_100);
  uVar4 = FUN_100748240();
  local_108 = (QArrayData *)QString::fromAscii_helper("os.win.preview",0xe);
  uVar4 = FUN_100748290(uVar4,&local_108);
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_48._0_1_ = *(int *)local_108 != 0;
      UNLOCK();
      if ((bool)(undefined1)local_48) goto LAB_1005e2a16;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_1005e2a16:
  cVar2 = '\0';
  QObject::connect(&local_110,uVar4,"2stateChanged(WebStore::CCatalogModel::State)",param_2,
                   "1updateItems()",0);
  if (cVar3 != '\0') {
    if (local_110 == 0) {
      cVar2 = '\0';
    }
    else {
      cVar2 = QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_110);
  uVar4 = FUN_100748240();
  local_118 = (QArrayData *)QString::fromAscii_helper("modern.ie",9);
  uVar4 = FUN_100748290(uVar4,&local_118);
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_48._0_1_ = *(int *)local_118 != 0;
      UNLOCK();
      if ((bool)(undefined1)local_48) goto LAB_1005e2aee;
    }
    QArrayData::deallocate(local_118,2,8);
  }
LAB_1005e2aee:
  cVar3 = '\0';
  QObject::connect(&local_120,uVar4,"2stateChanged(WebStore::CCatalogModel::State)",param_2,
                   "1updateItems()",0);
  if (cVar2 != '\0') {
    if (local_120 == 0) {
      cVar3 = '\0';
    }
    else {
      cVar3 = QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_120);
  uVar4 = FUN_100748240();
  local_128 = (QArrayData *)QString::fromAscii_helper("trial.windows",0xd);
  uVar4 = FUN_100748290(uVar4,&local_128);
  if (*(int *)local_128 != -1) {
    if (*(int *)local_128 != 0) {
      LOCK();
      *(int *)local_128 = *(int *)local_128 + -1;
      local_48._0_1_ = *(int *)local_128 != 0;
      UNLOCK();
      if ((bool)(undefined1)local_48) goto LAB_1005e2bbf;
    }
    QArrayData::deallocate(local_128,2,8);
  }
LAB_1005e2bbf:
  cVar2 = '\0';
  QObject::connect(&local_130,uVar4,"2stateChanged( WebStore::CCatalogModel::State )",param_2,
                   "1updateItems()",0);
  if (cVar3 != '\0') {
    if (local_130 == 0) {
      cVar2 = '\0';
    }
    else {
      cVar2 = QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_130);
  uVar4 = FUN_100748240();
  local_138 = (QArrayData *)QString::fromAscii_helper("win7.purchased",0xe);
  uVar4 = FUN_100748290(uVar4,&local_138);
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_48._0_1_ = *(int *)local_138 != 0;
      UNLOCK();
      if ((bool)(undefined1)local_48) goto LAB_1005e2c90;
    }
    QArrayData::deallocate(local_138,2,8);
  }
LAB_1005e2c90:
  cVar3 = '\0';
  QObject::connect(&local_140,uVar4,"2stateChanged( WebStore::CCatalogModel::State )",param_2,
                   "1updateItems()",0);
  if (cVar2 != '\0') {
    if (local_140 == 0) {
      cVar3 = '\0';
    }
    else {
      cVar3 = QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_140);
  uVar4 = FUN_100748240();
  local_148 = (QArrayData *)QString::fromAscii_helper("Windows10Development",0x14);
  uVar4 = FUN_100748290(uVar4,&local_148);
  if (*(int *)local_148 != -1) {
    if (*(int *)local_148 != 0) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + -1;
      local_48._0_1_ = *(int *)local_148 != 0;
      UNLOCK();
      if ((bool)(undefined1)local_48) goto LAB_1005e2d61;
    }
    QArrayData::deallocate(local_148,2,8);
  }
LAB_1005e2d61:
  cVar2 = '\0';
  QObject::connect(&local_150,uVar4,"2stateChanged( WebStore::CCatalogModel::State )",param_2,
                   "1updateItems()",0);
  if (cVar3 != '\0') {
    if (local_150 == 0) {
      cVar2 = '\0';
    }
    else {
      cVar2 = QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_150);
  uVar4 = FUN_1005ec990(lVar1);
  FUN_1005b9610(&local_168,uVar4);
  QVariant::QVariant(&local_160,&local_168);
  QObject::setProperty(param_2,(QVariant *)"currentItemId");
  QVariant::~QVariant(&local_160);
  if (*(int *)local_168.field0_0x0 != -1) {
    if (*(int *)local_168.field0_0x0 != 0) {
      LOCK();
      *(int *)local_168.field0_0x0 = *(int *)local_168.field0_0x0 + -1;
      local_48._0_1_ = *(int *)local_168.field0_0x0 != 0;
      UNLOCK();
      if ((bool)(undefined1)local_48) goto LAB_1005e2e52;
    }
    QArrayData::deallocate((QArrayData *)local_168.field0_0x0,2,8);
  }
LAB_1005e2e52:
  FUN_1005e32e0(param_1);
  local_1a8 = (QArrayData *)
              QString::fromAscii_helper("1onDownloadAppliancesTaskStateChanged()",0x27);
  local_1b0 = 0x80000000;
  local_1b8.field7 = 0;
  FUN_100a1c600(local_1a0,param_1,&local_1a8,&local_1b8);
  QVariant::~QVariant((QVariant *)&local_1b8);
  if (*(int *)local_1a8 != -1) {
    if (*(int *)local_1a8 != 0) {
      LOCK();
      *(int *)local_1a8 = *(int *)local_1a8 + -1;
      local_48._0_1_ = *(int *)local_1a8 != 0;
      UNLOCK();
      if ((bool)(undefined1)local_48) goto LAB_1005e2ee6;
    }
    QArrayData::deallocate(local_1a8,2,8);
  }
LAB_1005e2ee6:
  uVar4 = CTaskManager::instance();
  CTaskManager::addTaskWatcher(uVar4,local_1a0,0x36,0x26);
  uVar4 = FUN_1005ec980(lVar1);
  QObject::connect(&local_1c0,uVar4,"2applianceDescriptorUpdated()",param_1,
                   "1onDownloadAppliancesTaskStateChanged()",0);
  if ((cVar2 != '\0') && (local_1c0 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_1c0);
  QVariant::~QVariant(local_180);
  if (local_1a0[0] != (int *)0x0) {
    LOCK();
    *local_1a0[0] = *local_1a0[0] + -1;
    UNLOCK();
    local_48 = CONCAT71(local_48._1_7_,*local_1a0[0] != 0);
    if ((*local_1a0[0] == 0) && (local_1a0[0] != (int *)0x0)) {
      operator_delete(local_1a0[0]);
    }
  }
  return;
}

