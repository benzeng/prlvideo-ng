
void FUN_10037c0f0(long param_1)

{
  QUrl *pQVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  char *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  void *pvVar12;
  void *local_1f0;
  QVariant local_1e8;
  QArrayData *local_1d8;
  QArrayData *local_1d0;
  QString local_1c8;
  QVariant local_1c0;
  QArrayData *local_1b0;
  QArrayData *local_1a8;
  QString local_1a0;
  QVariant local_198;
  void *local_188;
  QVariant local_180;
  QArrayData *local_170;
  QArrayData *local_168;
  QArrayData *local_160;
  QArrayData *local_158;
  long local_150;
  QArrayData *local_148;
  QArrayData *local_140;
  long local_138;
  QArrayData *local_130;
  long local_128;
  QArrayData *local_120;
  long local_118;
  QArrayData *local_110;
  long local_108;
  undefined8 local_100;
  QVariant local_f8;
  QArrayData *local_e8;
  QUrl local_e0 [8];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  bool local_48;
  undefined7 uStack_47;
  undefined8 uStack_40;
  
  uVar8 = 0;
  if ((*(long *)(param_1 + 0x28) != 0) && (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0))
  {
    uVar8 = *(undefined8 *)(param_1 + 0x30);
  }
  uVar8 = FUN_100323e00(uVar8);
  uVar8 = FUN_100319390(uVar8);
  pQVar1 = *(QUrl **)(param_1 + 0x10);
  local_e8 = (QArrayData *)QString::fromAscii_helper("qrc:/qml/Overlay.qml",0x14);
  QUrl::QUrl(local_e0,&local_e8,0);
  QDeclarativeView::setSource(pQVar1);
  QUrl::~QUrl(local_e0);
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      UNLOCK();
      _local_48 = CONCAT71(uStack_47,*(int *)local_e8 != 0);
      if (*(int *)local_e8 != 0) goto LAB_10037c1b3;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_10037c1b3:
  pcVar9 = (char *)QDeclarativeView::rootObject();
  local_100 = 0;
  if ((*(long *)(param_1 + 0x38) != 0) &&
     (local_100 = 0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0)) {
    local_100 = *(undefined8 *)(param_1 + 0x40);
  }
  QVariant::QVariant(&local_f8,0x27,&local_100,1);
  QObject::setProperty(pcVar9,(QVariant *)"vmData");
  QVariant::~QVariant(&local_f8);
  uVar10 = 0;
  if ((*(long *)(param_1 + 0x38) != 0) && (uVar10 = 0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0)
     ) {
    uVar10 = *(undefined8 *)(param_1 + 0x40);
  }
  uVar11 = 0;
  if ((*(long *)(param_1 + 0x28) != 0) && (uVar11 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0)
     ) {
    uVar11 = *(undefined8 *)(param_1 + 0x30);
  }
  uVar6 = FUN_100323e20(uVar11);
  FUN_10072dfd0(uVar10,uVar6);
  uVar10 = 0;
  if ((*(long *)(param_1 + 0x38) != 0) && (uVar10 = 0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0)
     ) {
    uVar10 = *(undefined8 *)(param_1 + 0x40);
  }
  FUN_10072e510(uVar10,uVar8);
  uVar10 = QDeclarativeView::rootObject();
  cVar2 = '\0';
  QObject::connect(&local_108,uVar10,"2visibleChanged()",param_1,"1onRootObjectVisibleChanged()",0);
  if (local_108 != 0) {
    cVar2 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_108);
  local_110 = (QArrayData *)QString::fromAscii_helper("objVmStatePage",0xe);
  uVar11 = qt_qFindChild_helper(uVar10,&local_110,PTR_staticMetaObject_1021e1390,1);
  if (*(int *)local_110 != -1) {
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      UNLOCK();
      _local_48 = CONCAT71(uStack_47,*(int *)local_110 != 0);
      if (*(int *)local_110 != 0) goto LAB_10037c34e;
    }
    QArrayData::deallocate(local_110,2,8);
  }
LAB_10037c34e:
  cVar3 = '\0';
  QObject::connect(&local_118,uVar11,"2start()",uVar8,"1start()",0);
  if (cVar2 != '\0') {
    if (local_118 == 0) {
      cVar3 = '\0';
    }
    else {
      cVar3 = QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_118);
  local_120 = (QArrayData *)QString::fromAscii_helper("objVmCurtain",0xc);
  uVar11 = qt_qFindChild_helper(uVar10,&local_120,PTR_staticMetaObject_1021e1390,1);
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      UNLOCK();
      _local_48 = CONCAT71(uStack_47,*(int *)local_120 != 0);
      if (*(int *)local_120 != 0) goto LAB_10037c42a;
    }
    QArrayData::deallocate(local_120,2,8);
  }
LAB_10037c42a:
  cVar2 = '\0';
  QObject::connect(&local_128,uVar11,"2start()",uVar8,"1start()",0);
  if (cVar3 != '\0') {
    if (local_128 == 0) {
      cVar2 = '\0';
    }
    else {
      cVar2 = QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_128);
  local_130 = (QArrayData *)QString::fromAscii_helper("objInstallOsPage",0x10);
  uVar11 = qt_qFindChild_helper(uVar10,&local_130,PTR_staticMetaObject_1021e1390,1);
  if (*(int *)local_130 != -1) {
    if (*(int *)local_130 != 0) {
      LOCK();
      *(int *)local_130 = *(int *)local_130 + -1;
      UNLOCK();
      _local_48 = CONCAT71(uStack_47,*(int *)local_130 != 0);
      if (*(int *)local_130 != 0) goto LAB_10037c50d;
    }
    QArrayData::deallocate(local_130,2,8);
  }
LAB_10037c50d:
  bVar4 = 0;
  QObject::connect(&local_138,uVar11,"2vmRectChanged(QVariant)",param_1,
                   "1setLiveVmRectRect(QVariant)",0);
  if (cVar2 != '\0') {
    if (local_138 == 0) {
      bVar4 = 0;
    }
    else {
      bVar4 = QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_138);
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_48 = false;
  uStack_47 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  bVar5 = QMetaObject::invokeMethod(uVar11,"updateVmRect",0,0,0);
  local_140 = (QArrayData *)QString::fromAscii_helper("objVmUpgrageProgressPage",0x18);
  pcVar9 = (char *)qt_qFindChild_helper(uVar10,&local_140,PTR_staticMetaObject_1021e1390,1);
  if (*(int *)local_140 != -1) {
    if (*(int *)local_140 != 0) {
      LOCK();
      *(int *)local_140 = *(int *)local_140 + -1;
      local_48 = *(int *)local_140 != 0;
      UNLOCK();
      if (local_48) goto LAB_10037c712;
    }
    QArrayData::deallocate(local_140,2,8);
  }
LAB_10037c712:
  local_148 = (QArrayData *)QString::fromAscii_helper("objVmReadyToUsePage",0x13);
  uVar11 = qt_qFindChild_helper(uVar10,&local_148,PTR_staticMetaObject_1021e1390,1);
  if (*(int *)local_148 != -1) {
    if (*(int *)local_148 != 0) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + -1;
      local_48 = *(int *)local_148 != 0;
      UNLOCK();
      if (local_48) goto LAB_10037c788;
    }
    QArrayData::deallocate(local_148,2,8);
  }
LAB_10037c788:
  QObject::connect(&local_150,uVar11,"2clicked()",param_1,"1onReadyToUseClicked()",0);
  if (((bVar4 & bVar5) != 0) && (local_150 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_150);
  pvVar12 = operator_new(0x60);
  FUN_100188480(&local_158,uVar8);
  QMetaObject::tr((char *)&local_168,"",0x1def998);
  FUN_10018d830(&local_170,uVar8);
  QString::arg(&local_160,&local_168,&local_170,0,0x20);
  uVar11 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar11 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)
     ) {
    uVar11 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_10036ec50(pvVar12,&local_158,&local_160,uVar11);
  if (*(int *)local_160 != -1) {
    if (*(int *)local_160 != 0) {
      LOCK();
      *(int *)local_160 = *(int *)local_160 + -1;
      local_48 = *(int *)local_160 != 0;
      UNLOCK();
      if (local_48) goto LAB_10037c8c5;
    }
    QArrayData::deallocate(local_160,2,8);
  }
LAB_10037c8c5:
  if (*(int *)local_170 != -1) {
    if (*(int *)local_170 != 0) {
      LOCK();
      *(int *)local_170 = *(int *)local_170 + -1;
      local_48 = *(int *)local_170 != 0;
      UNLOCK();
      if (local_48) goto LAB_10037c8fd;
    }
    QArrayData::deallocate(local_170,2,8);
  }
LAB_10037c8fd:
  if (*(int *)local_168 != -1) {
    if (*(int *)local_168 != 0) {
      LOCK();
      *(int *)local_168 = *(int *)local_168 + -1;
      local_48 = *(int *)local_168 != 0;
      UNLOCK();
      if (local_48) goto LAB_10037c935;
    }
    QArrayData::deallocate(local_168,2,8);
  }
LAB_10037c935:
  if (*(int *)local_158 != -1) {
    if (*(int *)local_158 != 0) {
      LOCK();
      *(int *)local_158 = *(int *)local_158 + -1;
      local_48 = *(int *)local_158 != 0;
      UNLOCK();
      if (local_48) goto LAB_10037c96b;
    }
    QArrayData::deallocate(local_158,2,8);
  }
LAB_10037c96b:
  local_188 = pvVar12;
  QVariant::QVariant(&local_180,0x27,&local_188,1);
  QObject::setProperty(pcVar9,(QVariant *)"upgradeOperation");
  QVariant::~QVariant(&local_180);
  cVar2 = FUN_1001b86b0(uVar8,0);
  if (cVar2 == '\0') {
    QMetaObject::tr((char *)&local_1a8,"",0x1def998);
    FUN_10018d830(&local_1b0,uVar8);
    QString::arg(&local_1a0,&local_1a8,&local_1b0,0,0x20);
  }
  else {
    FUN_10018d830(&local_1a0,uVar8);
  }
  QVariant::QVariant(&local_198,&local_1a0);
  QObject::setProperty(pcVar9,(QVariant *)"pageTitle");
  QVariant::~QVariant(&local_198);
  if (*(int *)local_1a0.field0_0x0 != -1) {
    if (*(int *)local_1a0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1a0.field0_0x0 = *(int *)local_1a0.field0_0x0 + -1;
      local_48 = *(int *)local_1a0.field0_0x0 != 0;
      UNLOCK();
      if (local_48) goto LAB_10037ca91;
    }
    QArrayData::deallocate((QArrayData *)local_1a0.field0_0x0,2,8);
  }
LAB_10037ca91:
  if (cVar2 == '\0') {
    if (*(int *)local_1b0 != -1) {
      if (*(int *)local_1b0 != 0) {
        LOCK();
        *(int *)local_1b0 = *(int *)local_1b0 + -1;
        local_48 = *(int *)local_1b0 != 0;
        UNLOCK();
        if (local_48) goto LAB_10037cacb;
      }
      QArrayData::deallocate(local_1b0,2,8);
    }
LAB_10037cacb:
    if (*(int *)local_1a8 != -1) {
      if (*(int *)local_1a8 != 0) {
        LOCK();
        *(int *)local_1a8 = *(int *)local_1a8 + -1;
        local_48 = *(int *)local_1a8 != 0;
        UNLOCK();
        if (local_48) goto LAB_10037cb01;
      }
      QArrayData::deallocate(local_1a8,2,8);
    }
  }
LAB_10037cb01:
  cVar2 = FUN_1001b86b0(uVar8,0);
  if (cVar2 == '\0') {
    uVar6 = FUN_10018f860(uVar8);
    uVar7 = FUN_10018f890(uVar8);
    ResourceUtils::getOsIconPath(&local_1d0,uVar6,uVar7,6);
    QString::fromUtf8_helper((char *)&local_1c8,0x1def9df);
    QString::append(&local_1c8);
  }
  else {
    local_1c8.field0_0x0 =
         (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("qrc:/migrate.png",0x10);
  }
  QVariant::QVariant(&local_1c0,&local_1c8);
  QObject::setProperty(pcVar9,(QVariant *)"upgradePixmap");
  QVariant::~QVariant(&local_1c0);
  if (*(int *)local_1c8.field0_0x0 != -1) {
    if (*(int *)local_1c8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1c8.field0_0x0 = *(int *)local_1c8.field0_0x0 + -1;
      local_48 = *(int *)local_1c8.field0_0x0 != 0;
      UNLOCK();
      if (local_48) goto LAB_10037cbea;
    }
    QArrayData::deallocate((QArrayData *)local_1c8.field0_0x0,2,8);
  }
LAB_10037cbea:
  if ((cVar2 == '\0') && (*(int *)local_1d0 != -1)) {
    if (*(int *)local_1d0 != 0) {
      LOCK();
      *(int *)local_1d0 = *(int *)local_1d0 + -1;
      local_48 = *(int *)local_1d0 != 0;
      UNLOCK();
      if (local_48) goto LAB_10037cc24;
    }
    QArrayData::deallocate(local_1d0,2,8);
  }
LAB_10037cc24:
  cVar2 = FUN_1001b7c80(uVar8);
  if (cVar2 == '\0') {
    return;
  }
  local_1d8 = (QArrayData *)QString::fromAscii_helper("objDownloadProgressPage",0x17);
  pcVar9 = (char *)qt_qFindChild_helper(uVar10,&local_1d8,PTR_staticMetaObject_1021e1390,1);
  if (*(int *)local_1d8 != -1) {
    if (*(int *)local_1d8 != 0) {
      LOCK();
      *(int *)local_1d8 = *(int *)local_1d8 + -1;
      local_48 = *(int *)local_1d8 != 0;
      UNLOCK();
      if (local_48) goto LAB_10037ccae;
    }
    QArrayData::deallocate(local_1d8,2,8);
  }
LAB_10037ccae:
  pvVar12 = operator_new(0x48);
  FUN_1001ee780(pvVar12,param_1);
  FUN_1001ee7c0(pvVar12,uVar8);
  local_1f0 = pvVar12;
  QVariant::QVariant(&local_1e8,0x27,&local_1f0,1);
  QObject::setProperty(pcVar9,(QVariant *)"downloadOperation");
  QVariant::~QVariant(&local_1e8);
  return;
}

