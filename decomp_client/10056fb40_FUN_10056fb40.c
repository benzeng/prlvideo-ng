
void FUN_10056fb40(long param_1)

{
  undefined4 uVar1;
  long *plVar2;
  bool bVar3;
  undefined *puVar4;
  char cVar5;
  undefined8 uVar6;
  long lVar7;
  void *pvVar8;
  long lVar9;
  undefined8 uVar10;
  char local_15c;
  long local_158;
  Data_conflict local_150;
  undefined4 local_148;
  QArrayData *local_140;
  int *local_138 [4];
  QVariant local_118 [2];
  undefined8 local_100;
  undefined8 local_f8;
  Data *local_f0;
  Data *local_e8;
  Data_conflict local_e0;
  undefined4 local_d8;
  QArrayData *local_d0;
  int *local_c8 [4];
  QVariant local_a8 [2];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  Data *local_78;
  Data *local_70;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  undefined1 local_31;
  
  FUN_100573460(*(undefined8 *)(param_1 + 0x30),param_1);
  FUN_100571200(param_1);
  uVar6 = 0;
  if ((*(long *)(param_1 + 0x38) != 0) && (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0))
  {
    uVar6 = *(undefined8 *)(param_1 + 0x40);
  }
  uVar1 = *(undefined4 *)(param_1 + 0x50);
  FUN_100175410(uVar6);
  uVar6 = CParallelsNetworkConfig::getVirtualNetworks();
  lVar7 = FUN_100b3f210(uVar6,uVar1);
  if ((((lVar7 == 0) || (lVar7 = CVirtualNetwork::getHostOnlyNetwork(), lVar7 == 0)) ||
      (lVar7 = CHostOnlyNetwork::getParallelsAdapter(), lVar7 == 0)) ||
     (lVar7 = CHostOnlyNetwork::getNATServer(), lVar7 == 0)) {
LAB_10056fc96:
    QWidget::hide();
    bVar3 = false;
  }
  else {
    cVar5 = CNATServer::isEnabled();
    if (cVar5 == '\0') goto LAB_10056fc96;
    plVar2 = *(long **)(*(long *)(param_1 + 0x30) + 0xd0);
    (**(code **)(*plVar2 + 0x1c0))(plVar2,*(undefined8 *)(param_1 + 0x58));
    uVar6 = QTableView::horizontalHeader();
    QHeaderView::setStretchLastSection(SUB81(uVar6,0));
    QHeaderView::setSectionsMovable(SUB81(uVar6,0));
    QHeaderView::setDefaultAlignment(uVar6,0x84);
    QHeaderView::setSectionResizeMode(uVar6,0,3);
    QHeaderView::setSectionResizeMode(uVar6,1,3);
    QHeaderView::setSectionResizeMode(uVar6,2,1);
    QHeaderView::setSectionResizeMode(uVar6,3,3);
    FUN_100571430(param_1);
    bVar3 = true;
  }
  QObject::connect(&local_40,*(undefined8 *)(*(long *)(param_1 + 0x30) + 0xe8),"2clicked()",param_1,
                   "1addPort()",0);
  if (local_40 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_40);
    QObject::connect((Connection *)&local_48,*(undefined8 *)(*(long *)(param_1 + 0x30) + 0xf0),
                     "2clicked()",param_1,"1removePort()",0);
    QMetaObject::Connection::~Connection((Connection *)&local_48);
    uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x100);
LAB_10056ff39:
    QObject::connect(&local_50,uVar6,"2clicked()",param_1,"1editPort()",0);
    QMetaObject::Connection::~Connection((Connection *)&local_50);
    uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x90);
LAB_10056ff67:
    QObject::connect((Connection *)&local_58,uVar6,"2textChanged(QString)",param_1,
                     "1updateIPv4Subnet()",0);
    QMetaObject::Connection::~Connection((Connection *)&local_58);
    uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x70);
LAB_10056ff9f:
    QObject::connect((Connection *)&local_60,uVar6,"2textChanged(QString)",param_1,
                     "1updateIPv4Subnet()",0);
    QMetaObject::Connection::~Connection((Connection *)&local_60);
    uVar6 = *(undefined8 *)(param_1 + 0x48);
    uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x68);
LAB_10056ffcc:
    local_15c = '\0';
    QObject::connect(&local_68,uVar10,"2stateChanged(int)",uVar6,"1onPreprocessedValueChanged()",0);
  }
  else {
    cVar5 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_40);
    QObject::connect(&local_48,*(undefined8 *)(*(long *)(param_1 + 0x30) + 0xf0),"2clicked()",
                     param_1,"1removePort()",0);
    if ((cVar5 == '\0') || (local_48 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_48);
      uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x100);
      goto LAB_10056ff39;
    }
    cVar5 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_48);
    QObject::connect(&local_50,*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x100),"2clicked()",
                     param_1,"1editPort()",0);
    if ((cVar5 == '\0') || (local_50 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_50);
      uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x90);
      goto LAB_10056ff67;
    }
    cVar5 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_50);
    QObject::connect(&local_58,*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x90),
                     "2textChanged(QString)",param_1,"1updateIPv4Subnet()",0);
    if ((cVar5 == '\0') || (local_58 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_58);
      uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x70);
      goto LAB_10056ff9f;
    }
    cVar5 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_58);
    QObject::connect(&local_60,*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x70),
                     "2textChanged(QString)",param_1,"1updateIPv4Subnet()",0);
    if ((cVar5 == '\0') || (local_60 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_60);
      uVar6 = *(undefined8 *)(param_1 + 0x48);
      uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x68);
      goto LAB_10056ffcc;
    }
    cVar5 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_60);
    local_15c = '\0';
    QObject::connect(&local_68,*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x68),
                     "2stateChanged(int)",*(undefined8 *)(param_1 + 0x48),
                     "1onPreprocessedValueChanged()",0);
    if (cVar5 != '\0') {
      if (local_68 == 0) {
        local_15c = '\0';
      }
      else {
        local_15c = QMetaObject::Connection::isConnected_helper();
      }
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_68);
  pvVar8 = operator_new(0x50);
  puVar4 = PTR_shared_null_1021e15e8;
  local_78 = (Data *)PTR_shared_null_1021e15e8;
  local_80 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x90);
  FUN_100359270(&local_78,&local_80);
  local_88 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x50);
  FUN_100359270(&local_78,&local_88);
  local_90 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x70);
  FUN_100359270(&local_78,&local_90);
  local_70 = local_78;
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 == 0) {
      QListData::detach((int)&local_70);
      lVar7 = (long)*(int *)(local_70 + 8);
      if ((local_78 + (long)*(int *)(local_78 + 8) * 8 != local_70 + lVar7 * 8) &&
         (lVar9 = *(int *)(local_70 + 0xc) - lVar7, lVar9 != 0 && lVar7 <= *(int *)(local_70 + 0xc))
         ) {
        _memcpy(local_70 + lVar7 * 8 + 0x10,local_78 + (long)*(int *)(local_78 + 8) * 8 + 0x10,
                lVar9 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + 1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
    }
  }
  local_d0 = (QArrayData *)QString::fromAscii_helper("1preprocessValueChanges()",0x19);
  local_d8 = 0x80000000;
  local_e0.field7 = 0;
  FUN_100a1c600(local_c8,param_1,&local_d0,&local_e0);
  FUN_100577410(pvVar8,&local_70,local_c8,param_1);
  QVariant::~QVariant(local_a8);
  if (local_c8[0] != (int *)0x0) {
    LOCK();
    *local_c8[0] = *local_c8[0] + -1;
    local_31 = *local_c8[0] != 0;
    UNLOCK();
    if ((!(bool)local_31) && (local_c8[0] != (int *)0x0)) {
      operator_delete(local_c8[0]);
    }
  }
  QVariant::~QVariant((QVariant *)&local_e0);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_31 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10057018d;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_10057018d:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005701b5;
    }
    QListData::dispose(local_70);
  }
LAB_1005701b5:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005701db;
    }
    QListData::dispose(local_78);
  }
LAB_1005701db:
  pvVar8 = operator_new(0x50);
  local_f0 = (Data *)puVar4;
  local_f8 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x80);
  FUN_100359270(&local_f0,&local_f8);
  local_100 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x60);
  FUN_100359270(&local_f0,&local_100);
  local_e8 = local_f0;
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 == 0) {
      QListData::detach((int)&local_e8);
      lVar7 = (long)*(int *)(local_e8 + 8);
      if ((local_f0 + (long)*(int *)(local_f0 + 8) * 8 != local_e8 + lVar7 * 8) &&
         (lVar9 = *(int *)(local_e8 + 0xc) - lVar7, lVar9 != 0 && lVar7 <= *(int *)(local_e8 + 0xc))
         ) {
        _memcpy(local_e8 + lVar7 * 8 + 0x10,local_f0 + (long)*(int *)(local_f0 + 8) * 8 + 0x10,
                lVar9 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + 1;
      local_31 = *(int *)local_f0 != 0;
      UNLOCK();
    }
  }
  local_140 = (QArrayData *)QString::fromAscii_helper("1preprocessValueChanges()",0x19);
  local_148 = 0x80000000;
  local_150.field7 = 0;
  FUN_100a1c600(local_138,param_1,&local_140,&local_150);
  FUN_100577410(pvVar8,&local_e8,local_138,param_1);
  QVariant::~QVariant(local_118);
  if (local_138[0] != (int *)0x0) {
    LOCK();
    *local_138[0] = *local_138[0] + -1;
    local_31 = *local_138[0] != 0;
    UNLOCK();
    if ((!(bool)local_31) && (local_138[0] != (int *)0x0)) {
      operator_delete(local_138[0]);
    }
  }
  QVariant::~QVariant((QVariant *)&local_150);
  if (*(int *)local_140 != -1) {
    if (*(int *)local_140 != 0) {
      LOCK();
      *(int *)local_140 = *(int *)local_140 + -1;
      local_31 = *(int *)local_140 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10057038b;
    }
    QArrayData::deallocate(local_140,2,8);
  }
LAB_10057038b:
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_31 = *(int *)local_e8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005703b9;
    }
    QListData::dispose(local_e8);
  }
LAB_1005703b9:
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_31 = *(int *)local_f0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005703e5;
    }
    QListData::dispose(local_f0);
  }
LAB_1005703e5:
  if (bVar3) {
    uVar6 = QAbstractItemView::selectionModel();
    QObject::connect(&local_158,uVar6,"2selectionChanged(QItemSelection,QItemSelection)",param_1,
                     "1updatePortButtons()",0);
    if ((local_15c != '\0') && (local_158 != 0)) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_158);
  }
  return;
}

