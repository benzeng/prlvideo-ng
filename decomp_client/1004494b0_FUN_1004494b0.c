
void FUN_1004494b0(QObject *param_1,QObject *param_2,QObject *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  void *pvVar7;
  undefined1 auVar8 [16];
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  Connection local_78 [8];
  QArrayData *local_70;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  undefined1 local_31;
  
  QObject::QObject(param_1,param_2);
  *(undefined ***)param_1 = &PTR_FUN_1021f27b0;
  *(QObject **)(param_1 + 0x10) = param_2;
  uVar5 = QtSharedPointer::ExternalRefCountData::getAndRef(param_3);
  *(undefined8 *)(param_1 + 0x18) = uVar5;
  *(QObject **)(param_1 + 0x20) = param_3;
  *(undefined8 *)(param_1 + 0x28) = param_4;
  uVar4 = FUN_1003a4d50(param_3);
  *(undefined4 *)(param_1 + 0x30) = uVar4;
  uVar4 = FUN_1003a4db0(param_3);
  *(undefined4 *)(param_1 + 0x34) = uVar4;
  puVar2 = PTR_shared_null_1021e15e8;
  auVar8._8_4_ = (int)PTR_shared_null_1021e15e8;
  auVar8._0_8_ = PTR_shared_null_1021e15e8;
  auVar8._12_4_ = (int)((ulong)PTR_shared_null_1021e15e8 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x38) = auVar8;
  puVar1 = PTR_shared_null_1021e12f0;
  *(undefined **)(param_1 + 0x48) = PTR_shared_null_1021e12f0;
  *(undefined **)(param_1 + 0x50) = puVar1;
  *(undefined **)(param_1 + 0x58) = puVar2;
  QObject::connect(&local_40,param_3,"2destroyed()",param_1,"1removeMappings()",0);
  if (local_40 == 0) {
    cVar3 = '\0';
  }
  else {
    cVar3 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_40);
  QObject::connect(&local_48,param_3,
                   "2attributesChanged(CVmEditorItem::Attributes,CVmEditorItem::Attributes)",param_1
                   ,"1updatePageUI()",0);
  if (cVar3 == '\0') {
    cVar3 = '\0';
  }
  else if (local_48 == 0) {
    cVar3 = '\0';
  }
  else {
    cVar3 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_48);
  lVar6 = FUN_1003b0a30(param_4);
  if (lVar6 == 0) goto LAB_100449824;
  uVar5 = FUN_1003b0a30(param_4);
  QObject::connect(&local_50,uVar5,"2vmStateChanged(VIRTUAL_MACHINE_STATE, VIRTUAL_MACHINE_STATE)",
                   param_1,"1updatePageUI()",0);
  if (cVar3 == '\0') {
    cVar3 = '\0';
  }
  else if (local_50 == 0) {
    cVar3 = '\0';
  }
  else {
    cVar3 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_50);
  uVar5 = FUN_1003b0a30(param_4);
  QObject::connect(&local_58,uVar5,
                   "2vmAdditionStateChanged(VIRTUAL_MACHINE_ADDITION_STATE,VIRTUAL_MACHINE_ADDITION_STATE)"
                   ,param_1,"1updatePageUI()",0);
  if (cVar3 == '\0') {
    cVar3 = '\0';
  }
  else if (local_58 == 0) {
    cVar3 = '\0';
  }
  else {
    cVar3 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_58);
  uVar5 = FUN_1003b0a30(param_4);
  QObject::connect(&local_60,uVar5,"2vmToolsStateChanged (PRL_VM_TOOLS_STATE, PRL_VM_TOOLS_STATE)",
                   param_1,"1updatePageUI()",0);
  if (cVar3 == '\0') {
    cVar3 = '\0';
  }
  else if (local_60 == 0) {
    cVar3 = '\0';
  }
  else {
    cVar3 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_60);
  uVar5 = FUN_1003b0a30(param_4);
  QObject::connect(&local_68,uVar5,"2vmAccessRightsChanged()",param_1,"1updatePageUI()",0);
  if (cVar3 == '\0') {
    cVar3 = '\0';
  }
  else if (local_68 == 0) {
    cVar3 = '\0';
  }
  else {
    cVar3 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_68);
  uVar5 = FUN_1003b0a30(param_4);
  uVar5 = FUN_10018c280(uVar5);
  uVar5 = FUN_100319bf0(uVar5);
  local_70 = (QArrayData *)QString::fromAscii_helper("parallels.VideoDevicesInfo.guest.cross",0x26);
  lVar6 = FUN_10032d8b0(uVar5,&local_70);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004497f6;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1004497f6:
  if (lVar6 != 0) {
    QObject::connect(local_78,lVar6,"2tisRecordChanged(SdkHandleWrap,PRL_UINT32)",param_1,
                     "1updatePageUI()",0);
    QMetaObject::Connection::~Connection(local_78);
  }
LAB_100449824:
  lVar6 = FUN_1003b0a60(param_4);
  if (lVar6 != 0) {
    uVar5 = FUN_1003b0a60(param_4);
    QObject::connect(&local_80,uVar5,"2serverHardwareChanged(const CHostHardwareInfo& )",param_1,
                     "1updatePageUI()",0);
    if (cVar3 == '\0') {
      cVar3 = '\0';
    }
    else if (local_80 == 0) {
      cVar3 = '\0';
    }
    else {
      cVar3 = QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_80);
  }
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar7 = operator_new(0x18);
    FUN_1001a61d0(pvVar7);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar7;
  }
  QObject::connect(&local_88,DAT_1023108e0,
                   "2vmPrimaryDisplayViewModeChanged(const QString&, GUI::VmDisplayViewMode, GUI::VmDisplayViewMode)"
                   ,param_1,"1updatePageUI()",0);
  if (cVar3 == '\0') {
    cVar3 = '\0';
  }
  else if (local_88 == 0) {
    cVar3 = '\0';
  }
  else {
    cVar3 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_88);
  uVar5 = FUN_1003b0ae0(param_4);
  QObject::connect(&local_90,uVar5,"2initWidgetsFinished()",*(undefined8 *)(param_1 + 0x10),
                   "1initControlsFinished()",0);
  if (cVar3 == '\0') {
    cVar3 = '\0';
  }
  else if (local_90 == 0) {
    cVar3 = '\0';
  }
  else {
    cVar3 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_90);
  uVar5 = FUN_1003b0ae0(param_4);
  QObject::connect(&local_98,uVar5,"2initWidgetsFinished()",param_1,"1updatePageUI()",0);
  if (cVar3 == '\0') {
    cVar3 = '\0';
  }
  else if (local_98 == 0) {
    cVar3 = '\0';
  }
  else {
    cVar3 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_98);
  uVar5 = FUN_1003b0ad0(param_4);
  QObject::connect(&local_a0,uVar5,"2dataChanged()",param_1,"1updatePageUI()",0);
  if (cVar3 == '\0') {
    cVar3 = '\0';
  }
  else if (local_a0 == 0) {
    cVar3 = '\0';
  }
  else {
    cVar3 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_a0);
  uVar5 = FUN_1003b0ad0(param_4);
  QObject::connect(&local_a8,uVar5,"2submitStarted()",param_1,"1updatePageUI()",0);
  if (cVar3 == '\0') {
    cVar3 = '\0';
  }
  else if (local_a8 == 0) {
    cVar3 = '\0';
  }
  else {
    cVar3 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_a8);
  uVar5 = FUN_1003b0ad0(param_4);
  QObject::connect(&local_b0,uVar5,"2submitFinished(PRL_RESULT)",param_1,"1updatePageUI()",0);
  if ((cVar3 != '\0') && (local_b0 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_b0);
  return;
}

