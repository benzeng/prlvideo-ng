
void FUN_10008a610(long param_1)

{
  int *piVar1;
  char cVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  QArrayData *local_110;
  QArrayData *local_108;
  CTaskGenericId local_100 [24];
  Data_conflict local_e8;
  undefined4 local_e0;
  QArrayData *local_d8;
  undefined1 local_d0;
  undefined7 uStack_cf;
  QVariant local_b0 [2];
  long local_98;
  QArrayData *local_90;
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
  long local_38;
  undefined1 local_29;
  
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x20) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
  }
  cVar2 = '\0';
  QObject::connect(&local_38,uVar4,"2vmStateChanged(VIRTUAL_MACHINE_STATE,VIRTUAL_MACHINE_STATE)",
                   param_1,"1onVmStateChanged(VIRTUAL_MACHINE_STATE, VIRTUAL_MACHINE_STATE)",0);
  if (local_38 != 0) {
    cVar2 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_38);
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x20) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
  }
  cVar3 = '\0';
  QObject::connect(&local_40,uVar4,
                   "2vmAdditionStateChanged(VIRTUAL_MACHINE_ADDITION_STATE,VIRTUAL_MACHINE_ADDITION_STATE)"
                   ,param_1,
                   "1onVmAdditionStateChanged(VIRTUAL_MACHINE_ADDITION_STATE, VIRTUAL_MACHINE_ADDITION_STATE)"
                   ,0);
  if (cVar2 != '\0') {
    if (local_40 == 0) {
      cVar3 = '\0';
    }
    else {
      cVar3 = QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_40);
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x20) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
  }
  cVar2 = '\0';
  QObject::connect(&local_48,uVar4,"2vmTypeChanged(GUI::VmType)",param_1,
                   "1onVmTypeChanged(GUI::VmType)",0);
  if (cVar3 != '\0') {
    if (local_48 == 0) {
      cVar2 = '\0';
    }
    else {
      cVar2 = QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_48);
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x20) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
  }
  cVar3 = '\0';
  QObject::connect(&local_50,uVar4,"2vmConfigurationChanged(const CVmConfiguration&)",param_1,
                   "1onVmConfigChanged(CVmConfiguration)",0);
  if (cVar2 != '\0') {
    if (local_50 == 0) {
      cVar3 = '\0';
    }
    else {
      cVar3 = QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_50);
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x20) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
  }
  cVar2 = '\0';
  QObject::connect(&local_58,uVar4,"2osInstallingChanged(bool)",param_1,
                   "1onOsInstallingChanged(bool)",0);
  if (cVar3 != '\0') {
    if (local_58 == 0) {
      cVar2 = '\0';
    }
    else {
      cVar2 = QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_58);
  QObject::connect(&local_60,*(undefined8 *)(param_1 + 0x48),"2wizardStartedChanged(bool)",param_1,
                   "1onAntivirusWizardStarted(bool)",0);
  if ((cVar2 == '\0') || (local_60 == 0)) {
    QMetaObject::Connection::~Connection((Connection *)&local_60);
    QObject::connect((Connection *)&local_68,*(undefined8 *)(param_1 + 0x48),
                     "2antivirusInstalledChanged(bool)",param_1,"1onAntivirusInstalled(bool)",0);
    QMetaObject::Connection::~Connection((Connection *)&local_68);
    uVar4 = *(undefined8 *)(param_1 + 0x48);
LAB_10008a995:
    cVar2 = '\0';
    QObject::connect(&local_70,uVar4,"2antivirusSupportedChanged(bool)",param_1,
                     "1onAntivirusSupported(bool)",0);
  }
  else {
    cVar2 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_60);
    QObject::connect(&local_68,*(undefined8 *)(param_1 + 0x48),"2antivirusInstalledChanged(bool)",
                     param_1,"1onAntivirusInstalled(bool)",0);
    if ((cVar2 == '\0') || (local_68 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_68);
      uVar4 = *(undefined8 *)(param_1 + 0x48);
      goto LAB_10008a995;
    }
    cVar3 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_68);
    cVar2 = '\0';
    QObject::connect(&local_70,*(undefined8 *)(param_1 + 0x48),"2antivirusSupportedChanged(bool)",
                     param_1,"1onAntivirusSupported(bool)",0);
    if (cVar3 != '\0') {
      if (local_70 == 0) {
        cVar2 = '\0';
      }
      else {
        cVar2 = QMetaObject::Connection::isConnected_helper();
      }
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_70);
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x20) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
  }
  uVar4 = FUN_10018f5c0(uVar4);
  cVar3 = '\0';
  QObject::connect(&local_78,uVar4,"2execToolStateChanged(CVmToolsWatcher::ToolState)",param_1,
                   "1updateNetworkInfo()",0);
  if (cVar2 != '\0') {
    if (local_78 == 0) {
      cVar3 = '\0';
    }
    else {
      cVar3 = QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_78);
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x20) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
  }
  lVar5 = FUN_100190780(uVar4);
  cVar2 = cVar3;
  if (lVar5 != 0) {
    uVar4 = 0;
    if ((*(long *)(param_1 + 0x20) != 0) &&
       (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0x28);
    }
    uVar4 = FUN_100190780(uVar4);
    cVar2 = '\0';
    QObject::connect(&local_80,uVar4,"2networkAddressesChanged(QList<QHostAddress>)",param_1,
                     "1onVmNetworkAddressesChanged(QList<QHostAddress>)",0);
    if (cVar3 != '\0') {
      if (local_80 == 0) {
        cVar2 = '\0';
      }
      else {
        cVar2 = QMetaObject::Connection::isConnected_helper();
      }
    }
    QMetaObject::Connection::~Connection((Connection *)&local_80);
  }
  uVar6 = FUN_1006915d0();
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x20) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
  }
  uVar4 = FUN_100691620(uVar6,0xc,uVar4);
  cVar3 = '\0';
  QObject::connect(&local_88,uVar4,"2changed()",param_1,"1updateDevPanelAvailibility()",0);
  if (cVar2 != '\0') {
    if (local_88 == 0) {
      cVar3 = '\0';
    }
    else {
      cVar3 = QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_88);
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x20) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
  }
  FUN_10018c2b0(uVar4);
  CVmConfiguration::getVmIdentification();
  CVmIdentification::getLinkedVmUuid();
  if (*(int *)(local_90 + 4) != 0) {
    uVar4 = FUN_100152280();
    uVar4 = FUN_1001548f0(uVar4,&local_90);
    QObject::connect(&local_98,uVar4,"2vmConfigurationChanged(CVmConfiguration)",param_1,
                     "1onVmConfigChanged(CVmConfiguration)",0);
    if ((cVar3 != '\0') && (local_98 != 0)) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_98);
  }
  local_d8 = (QArrayData *)QString::fromAscii_helper("1onAuthorizationTaskFinished()",0x1e);
  local_e0 = 0x80000000;
  local_e8.field7 = 0;
  FUN_100a1c600(&local_d0,param_1,&local_d8,&local_e8);
  QVariant::~QVariant((QVariant *)&local_e8);
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_29 = *(int *)local_d8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10008ac6d;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_10008ac6d:
  uVar6 = CTaskManager::instance();
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x20) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
  }
  FUN_100188480(&local_108,uVar4);
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x20) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
  }
  FUN_1001884b0(&local_110,uVar4);
  FUN_10008d0d0(local_100,&local_108,&local_110);
  CTaskManager::addTaskWatcher(uVar6,&local_d0,local_100,0x24);
  CTaskGenericId::~CTaskGenericId(local_100);
  if (*(int *)local_110 != -1) {
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      local_29 = *(int *)local_110 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10008ad36;
    }
    QArrayData::deallocate(local_110,2,8);
  }
LAB_10008ad36:
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_29 = *(int *)local_108 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10008ad6c;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_10008ad6c:
  QVariant::~QVariant(local_b0);
  piVar1 = (int *)CONCAT71(uStack_cf,local_d0);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    local_29 = *piVar1 != 0;
    UNLOCK();
    if ((!(bool)local_29) && ((void *)CONCAT71(uStack_cf,local_d0) != (void *)0x0)) {
      operator_delete((void *)CONCAT71(uStack_cf,local_d0));
    }
  }
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      UNLOCK();
      if (*(int *)local_90 != 0) {
        return;
      }
      local_d0 = 0;
    }
    QArrayData::deallocate(local_90,2,8);
  }
  return;
}

