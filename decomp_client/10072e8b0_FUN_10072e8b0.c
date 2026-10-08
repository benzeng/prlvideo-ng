
void FUN_10072e8b0(long param_1)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  Data_conflict local_118;
  undefined4 local_110;
  QArrayData *local_108;
  int *local_100 [4];
  QVariant local_e0 [2];
  Connection local_c8 [8];
  QArrayData *local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
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
  long local_38;
  undefined1 local_29;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x10) + 4) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x18) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x20) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x20) + 4) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x28) == 0) {
    return;
  }
  cVar1 = '\0';
  QObject::connect(&local_38,*(long *)(param_1 + 0x18),"2vmConfigurationChanged(CVmConfiguration)",
                   param_1,"1onVmConfigurationChanged(CVmConfiguration)",0);
  if (local_38 != 0) {
    cVar1 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_38);
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  cVar2 = '\0';
  QObject::connect(&local_40,uVar3,"2vmStateChanged(VIRTUAL_MACHINE_STATE,VIRTUAL_MACHINE_STATE)",
                   param_1,"1onStateChanged(VIRTUAL_MACHINE_STATE)",0);
  if (cVar1 != '\0') {
    if (local_40 == 0) {
      cVar2 = '\0';
    }
    else {
      cVar2 = QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_40);
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  cVar1 = '\0';
  QObject::connect(&local_48,uVar3,"2vmTypeChanged(GUI::VmType)",param_1,
                   "1onVmTypeChanged(GUI::VmType)",0);
  if (cVar2 != '\0') {
    if (local_48 == 0) {
      cVar1 = '\0';
    }
    else {
      cVar1 = QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_48);
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  cVar2 = '\0';
  QObject::connect(&local_50,uVar3,"2vmAttributesChanged(CVmWrap::VmAttributes)",param_1,"1update()"
                   ,0);
  if (cVar1 != '\0') {
    if (local_50 == 0) {
      cVar2 = '\0';
    }
    else {
      cVar2 = QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_50);
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  cVar1 = '\0';
  QObject::connect(&local_58,uVar3,"2osInstallingChanged(bool)",param_1,"1update()",0);
  if (cVar2 != '\0') {
    if (local_58 == 0) {
      cVar1 = '\0';
    }
    else {
      cVar1 = QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_58);
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  cVar2 = '\0';
  QObject::connect(&local_60,uVar3,"2vmHWUpgradeStarted()",param_1,"1update()",0);
  if (cVar1 != '\0') {
    if (local_60 == 0) {
      cVar2 = '\0';
    }
    else {
      cVar2 = QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_60);
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  cVar1 = '\0';
  QObject::connect(&local_68,uVar3,"2vmHWUpgradeFinished()",param_1,"1update()",0);
  if (cVar2 != '\0') {
    if (local_68 == 0) {
      cVar1 = '\0';
    }
    else {
      cVar1 = QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_68);
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  cVar2 = '\0';
  QObject::connect(&local_70,uVar3,"2compactProgressChanged(uint)",param_1,
                   "1onProgressChanged(uint)",0);
  if (cVar1 != '\0') {
    if (local_70 == 0) {
      cVar2 = '\0';
    }
    else {
      cVar2 = QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_70);
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  cVar1 = '\0';
  QObject::connect(&local_78,uVar3,"2suspendProgressChanged(uint)",param_1,
                   "1onProgressChanged(uint)",0);
  if (cVar2 != '\0') {
    if (local_78 == 0) {
      cVar1 = '\0';
    }
    else {
      cVar1 = QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_78);
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  cVar2 = '\0';
  QObject::connect(&local_80,uVar3,"2resumeProgressChanged(uint)",param_1,"1onProgressChanged(uint)"
                   ,0);
  if (cVar1 != '\0') {
    if (local_80 == 0) {
      cVar2 = '\0';
    }
    else {
      cVar2 = QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_80);
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  cVar1 = '\0';
  QObject::connect(&local_88,uVar3,"2createSnapshotProgressChanged(uint)",param_1,
                   "1onProgressChanged(uint)",0);
  if (cVar2 != '\0') {
    if (local_88 == 0) {
      cVar1 = '\0';
    }
    else {
      cVar1 = QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_88);
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  cVar2 = '\0';
  QObject::connect(&local_90,uVar3,"2revertToSnapshotProgressChanged(uint)",param_1,
                   "1onProgressChanged(uint)",0);
  if (cVar1 != '\0') {
    if (local_90 == 0) {
      cVar2 = '\0';
    }
    else {
      cVar2 = QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_90);
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  cVar1 = '\0';
  QObject::connect(&local_98,uVar3,"2deleteSnapshotProgressChanged(uint)",param_1,
                   "1onProgressChanged(uint)",0);
  if (cVar2 != '\0') {
    if (local_98 == 0) {
      cVar1 = '\0';
    }
    else {
      cVar1 = QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_98);
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x20) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x28);
  }
  cVar2 = '\0';
  QObject::connect(&local_a0,uVar3,"2hddResizeProgressChanged(int)",uVar5,"1setProgress(int)",0);
  if (cVar1 != '\0') {
    if (local_a0 == 0) {
      cVar2 = '\0';
    }
    else {
      cVar2 = QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_a0);
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x20) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x28);
  }
  cVar1 = '\0';
  QObject::connect(&local_a8,uVar3,"2hddConvertProgressChanged(int)",uVar5,"1setProgress(int)",0);
  if (cVar2 != '\0') {
    if (local_a8 == 0) {
      cVar1 = '\0';
    }
    else {
      cVar1 = QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_a8);
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  uVar3 = FUN_10018c280(uVar3);
  cVar2 = '\0';
  QObject::connect(&local_b0,uVar3,
                   "2vmPrimaryDisplayViewModeChanged(const QString&,GUI::VmDisplayViewMode,GUI::VmDisplayViewMode)"
                   ,param_1,
                   "1onVmPrimaryDisplayViewModeChanged(const QString&,GUI::VmDisplayViewMode,GUI::VmDisplayViewMode)"
                   ,0);
  if (cVar1 != '\0') {
    if (local_b0 == 0) {
      cVar2 = '\0';
    }
    else {
      cVar2 = QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_b0);
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x20) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x28);
  }
  QObject::connect(&local_b8,uVar3,"2autopausedChanged(bool)",uVar5,"1setAutopaused(bool)",0);
  if ((cVar2 != '\0') && (local_b8 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_b8);
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  uVar3 = FUN_10018c280(uVar3);
  uVar3 = FUN_100319bf0(uVar3);
  local_c0 = (QArrayData *)QString::fromAscii_helper("parallels.VideoDevicesInfo.guest.cross",0x26);
  lVar4 = FUN_10032d8b0(uVar3,&local_c0);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_29 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10072f12d;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_10072f12d:
  if (lVar4 != 0) {
    QObject::connect(local_c8,lVar4,"2tisRecordChanged(SdkHandleWrap, PRL_UINT32)",param_1,
                     "1updateMode()",2);
    QMetaObject::Connection::~Connection(local_c8);
  }
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  FUN_10018d490(uVar3);
  uVar3 = CSdkCommunicator::eventHandlers();
  local_108 = (QArrayData *)QString::fromAscii_helper("handleLowHostMemory",0x13);
  local_110 = 0x80000000;
  local_118.field7 = 0;
  FUN_100a1c6b0(local_100,&local_108,param_1,&local_118);
  CEventHandlerStorage::addHandler(uVar3,0x186e9,local_100);
  QVariant::~QVariant(local_e0);
  if (local_100[0] != (int *)0x0) {
    LOCK();
    *local_100[0] = *local_100[0] + -1;
    local_29 = *local_100[0] != 0;
    UNLOCK();
    if ((!(bool)local_29) && (local_100[0] != (int *)0x0)) {
      operator_delete(local_100[0]);
    }
  }
  QVariant::~QVariant((QVariant *)&local_118);
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_29 = *(int *)local_108 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10072f261;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_10072f261:
  FUN_10072f470(param_1);
  return;
}

