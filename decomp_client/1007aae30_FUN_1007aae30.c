
void FUN_1007aae30(QWidget *param_1)

{
  char *pcVar1;
  QString *pQVar2;
  long *plVar3;
  code *pcVar4;
  QSize *pQVar5;
  undefined *puVar6;
  char cVar7;
  undefined1 uVar8;
  void *pvVar9;
  void *pvVar10;
  CMacScrollArea *this;
  QVBoxLayout *this_00;
  size_t sVar11;
  QArrayData *pQVar12;
  undefined8 uVar13;
  int iVar14;
  long local_168;
  long local_160;
  long local_158;
  long local_150;
  long local_148;
  long local_140;
  long local_138;
  long local_130;
  long local_128;
  long local_120;
  long local_118;
  long local_110;
  long local_108;
  long local_100;
  QString local_f8;
  QVariant local_f0;
  QVariant local_e0;
  QVariant local_d0;
  QVariant local_c0;
  QVariant local_b0;
  QArrayData *local_a0;
  QArrayData *local_98;
  QString local_90;
  QVariant local_88;
  QArrayData *local_78;
  QPixmap local_70 [32];
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  uVar13 = 0;
  QWidget::setWindowModality(param_1,0);
  QWidget::setAttribute(param_1,0x37,1);
  FUN_1007b0ab0(param_1 + 0x60,param_1);
  pvVar9 = operator_new(0x38);
  if ((*(long *)(param_1 + 0x118) != 0) &&
     (uVar13 = 0, *(int *)(*(long *)(param_1 + 0x118) + 4) != 0)) {
    uVar13 = *(undefined8 *)(param_1 + 0x120);
  }
  FUN_1007b3640(pvVar9,param_1,uVar13,param_1,0);
  *(void **)(param_1 + 0x108) = pvVar9;
  pvVar10 = operator_new(0x30);
  FUN_10079e3b0(pvVar10,pvVar9);
  *(void **)(param_1 + 0x110) = pvVar10;
  this = operator_new(0x38);
  CMacScrollArea::CMacScrollArea(this,*(QWidget **)(param_1 + 0x78));
  *(CMacScrollArea **)(param_1 + 0xf8) = this;
  local_78 = (QArrayData *)
             QString::fromAscii_helper(":/pixmaps/SnapshotsIcons/Mac/bottom_gradient.png",0x30);
  QPixmap::QPixmap(local_70,&local_78,0);
  CMacScrollArea::setBottomOverlay((QPixmap *)this);
  QPixmap::~QPixmap(local_70);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_29 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007aaf5b;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1007aaf5b:
  pvVar9 = operator_new(0x78);
  FUN_1007a7480(pvVar9,*(undefined8 *)(param_1 + 0x110),*(undefined8 *)(param_1 + 0x78));
  *(void **)(param_1 + 0x100) = pvVar9;
  CMacScrollArea::setDocument(*(QWidget **)(param_1 + 0xf8));
  this_00 = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(this_00,*(QWidget **)(param_1 + 0x78));
  QLayout::setContentsMargins((int)this_00,0,0,0);
  QBoxLayout::addWidget(this_00,*(undefined8 *)(param_1 + 0xf8),0,0);
  pcVar1 = *(char **)(param_1 + 0x100);
  QVariant::QVariant(&local_88,true);
  QObject::setProperty(pcVar1,(QVariant *)"macNoSubpixelAA");
  QVariant::~QVariant(&local_88);
  QWidget::styleSheet();
  QString::fromUtf8_helper((char *)&local_50,0x1e17928);
  QString::append(&local_90);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007ab067;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1007ab067:
  QString::fromUtf8_helper((char *)&local_48,0x1e1797c);
  QString::append(&local_90);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007ab0bc;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1007ab0bc:
  QString::fromUtf8_helper((char *)&local_40,0x1e179d2);
  QString::append(&local_90);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007ab111;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1007ab111:
  QWidget::setStyleSheet((QString *)param_1);
  puVar6 = PTR_s_QWidget___color__rgba__255__255__102271080;
  pQVar2 = *(QString **)(param_1 + 0x80);
  iVar14 = -1;
  if (PTR_s_QWidget___color__rgba__255__255__102271080 != (undefined *)0x0) {
    sVar11 = _strlen(PTR_s_QWidget___color__rgba__255__255__102271080);
    iVar14 = (int)sVar11;
  }
  pQVar12 = (QArrayData *)QString::fromAscii_helper(puVar6,iVar14);
  local_a0 = pQVar12;
  FUN_100137810(&local_98,&local_a0,PTR_s_QPushButton___color__rgba__255__2_102271028);
  QWidget::setStyleSheet(pQVar2);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_29 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007ab1ba;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_1007ab1ba:
  if (*(int *)pQVar12 != -1) {
    if (*(int *)pQVar12 != 0) {
      LOCK();
      *(int *)pQVar12 = *(int *)pQVar12 + -1;
      local_29 = *(int *)pQVar12 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007ab1e7;
    }
    QArrayData::deallocate(pQVar12,2,8);
  }
LAB_1007ab1e7:
  CHelpButton::setStyle(*(undefined8 *)(param_1 + 0xc0),4);
  pcVar1 = *(char **)(param_1 + 0x90);
  QVariant::QVariant(&local_b0,true);
  QObject::setProperty(pcVar1,(QVariant *)"macNoSubpixelAA");
  QVariant::~QVariant(&local_b0);
  pcVar1 = *(char **)(param_1 + 0xe8);
  QVariant::QVariant(&local_c0,true);
  QObject::setProperty(pcVar1,(QVariant *)"macNoSubpixelAA");
  QVariant::~QVariant(&local_c0);
  pcVar1 = *(char **)(param_1 + 0xb8);
  QVariant::QVariant(&local_d0,true);
  QObject::setProperty(pcVar1,(QVariant *)"macNoSubpixelAA");
  QVariant::~QVariant(&local_d0);
  pcVar1 = *(char **)(param_1 + 0xe0);
  QVariant::QVariant(&local_e0,true);
  QObject::setProperty(pcVar1,(QVariant *)"macNoSubpixelAA");
  QVariant::~QVariant(&local_e0);
  pcVar1 = *(char **)(param_1 + 0xf0);
  QVariant::QVariant(&local_f0,true);
  QObject::setProperty(pcVar1,(QVariant *)"macNoSubpixelAA");
  QVariant::~QVariant(&local_f0);
  QObject::installEventFilter(*(QObject **)(param_1 + 0x78));
  QObject::installEventFilter(*(QObject **)(param_1 + 0xf8));
  QWidget::setMinimumSize((int)param_1,*(int *)PTR_PD10_Width_1021e14d0);
  cVar7 = (**(code **)(**(long **)(param_1 + 0x110) + 0x80))();
  if (cVar7 == '\0') {
    QWidget::setEnabled(SUB81(*(undefined8 *)(param_1 + 0xe8),0));
    QWidget::setEnabled(SUB81(*(undefined8 *)(param_1 + 0xe0),0));
    QWidget::setEnabled(SUB81(*(undefined8 *)(param_1 + 0xb8),0));
  }
  else {
    QWidget::setEnabled(SUB81(*(undefined8 *)(param_1 + 0xe8),0));
    QWidget::setEnabled(SUB81(*(undefined8 *)(param_1 + 0xe0),0));
    QWidget::setEnabled(SUB81(*(undefined8 *)(param_1 + 0xb8),0));
  }
  QWidget::setTabOrder(*(QWidget **)(param_1 + 0x90),*(QWidget **)(param_1 + 0xb8));
  QWidget::setTabOrder(*(QWidget **)(param_1 + 0xb8),*(QWidget **)(param_1 + 0xe8));
  QWidget::setTabOrder(*(QWidget **)(param_1 + 0xe8),*(QWidget **)(param_1 + 0xe0));
  QWidget::setTabOrder(*(QWidget **)(param_1 + 0xe0),*(QWidget **)(param_1 + 0xf0));
  QWidget::styleSheet();
  QString::fromUtf8_helper((char *)&local_38,0x1e02b55);
  QString::append(&local_f8);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007ab469;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1007ab469:
  QWidget::setStyleSheet(*(QString **)(param_1 + 0xc0));
  plVar3 = *(long **)(param_1 + 0xf0);
  pcVar4 = *(code **)(*plVar3 + 0x68);
  if (*(long *)(param_1 + 0x118) == 0) {
    uVar8 = 0;
  }
  else if (*(int *)(*(long *)(param_1 + 0x118) + 4) == 0) {
    uVar8 = 0;
  }
  else if (*(long *)(param_1 + 0x120) == 0) {
    uVar8 = 0;
  }
  else {
    uVar13 = FUN_10018d490();
    uVar8 = FUN_1001754c0(uVar13,0x15);
  }
  (*pcVar4)(plVar3,uVar8);
  FUN_1007abfb0(param_1);
  QWidget::setAttribute(param_1,0x78,1);
  uVar13 = CTitleBarControllerQt::createTitleBarController(param_1);
  if (DAT_102310820 == (void *)0x0) {
    pvVar9 = operator_new(0x18);
    FUN_10002bc90(pvVar9);
    DAT_10226c0b0 = 1;
    DAT_102310820 = pvVar9;
  }
  FUN_10002bf30(DAT_102310820,uVar13,4);
  uVar13 = 0;
  if ((*(long *)(param_1 + 0x118) != 0) &&
     (uVar13 = 0, *(int *)(*(long *)(param_1 + 0x118) + 4) != 0)) {
    uVar13 = *(undefined8 *)(param_1 + 0x120);
  }
  QObject::connect(&local_100,uVar13,"2vmConfigurationChanged(CVmConfiguration)",param_1,
                   "1updateWindowTitle()",0);
  if (local_100 == 0) {
    cVar7 = '\0';
  }
  else {
    cVar7 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_100);
  uVar13 = 0;
  if ((*(long *)(param_1 + 0x118) != 0) &&
     (uVar13 = 0, *(int *)(*(long *)(param_1 + 0x118) + 4) != 0)) {
    uVar13 = *(undefined8 *)(param_1 + 0x120);
  }
  QObject::connect(&local_108,uVar13,"2destroyed()",param_1,"1close()",0);
  if (cVar7 == '\0') {
    cVar7 = '\0';
  }
  else if (local_108 == 0) {
    cVar7 = '\0';
  }
  else {
    cVar7 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_108);
  QObject::connect(&local_110,*(undefined8 *)(param_1 + 0x100),"2ItemSelected(int,int)",param_1,
                   "1OnChangeItemSelection(int,int)",0);
  if (cVar7 == '\0') {
    cVar7 = '\0';
  }
  else if (local_110 == 0) {
    cVar7 = '\0';
  }
  else {
    cVar7 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_110);
  QObject::connect(&local_118,*(undefined8 *)(param_1 + 0x100),"2ItemDblClicked()",param_1,
                   "1OnGoTo()",0);
  if (cVar7 == '\0') {
    cVar7 = '\0';
  }
  else if (local_118 == 0) {
    cVar7 = '\0';
  }
  else {
    cVar7 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_118);
  QObject::connect(&local_120,*(undefined8 *)(param_1 + 0x100),
                   "2contextMenuRequested(SnapshotCellViewData, QPoint)",param_1,
                   "1onContextMenuRequested(SnapshotCellViewData, QPoint)",0);
  if (cVar7 == '\0') {
    cVar7 = '\0';
  }
  else if (local_120 == 0) {
    cVar7 = '\0';
  }
  else {
    cVar7 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_120);
  QObject::connect(&local_128,*(undefined8 *)(param_1 + 0x100),"2ModelRebuilded()",param_1,
                   "1updateGraphViewSize()",0);
  if (cVar7 == '\0') {
    cVar7 = '\0';
  }
  else if (local_128 == 0) {
    cVar7 = '\0';
  }
  else {
    cVar7 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_128);
  QObject::connect(&local_130,*(undefined8 *)(param_1 + 0x90),"2clicked()",param_1,"1OnNew()",0);
  if (cVar7 == '\0') {
    cVar7 = '\0';
  }
  else if (local_130 == 0) {
    cVar7 = '\0';
  }
  else {
    cVar7 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_130);
  QObject::connect(&local_138,*(undefined8 *)(param_1 + 0xb8),"2clicked()",param_1,"1OnEdit()",0);
  if (cVar7 == '\0') {
    cVar7 = '\0';
  }
  else if (local_138 == 0) {
    cVar7 = '\0';
  }
  else {
    cVar7 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_138);
  QObject::connect(&local_140,*(undefined8 *)(param_1 + 0xe8),"2clicked()",param_1,
                   "1OnDeleteSnapshot()",0);
  if (cVar7 == '\0') {
    cVar7 = '\0';
  }
  else if (local_140 == 0) {
    cVar7 = '\0';
  }
  else {
    cVar7 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_140);
  QObject::connect(&local_148,*(undefined8 *)(param_1 + 0xe0),"2clicked()",param_1,"1OnGoTo()",0);
  if (cVar7 == '\0') {
    cVar7 = '\0';
  }
  else if (local_148 == 0) {
    cVar7 = '\0';
  }
  else {
    cVar7 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_148);
  QObject::connect(&local_150,*(undefined8 *)(param_1 + 0xf0),"2clicked()",param_1,
                   "1OnLinkedClone()",0);
  if (cVar7 == '\0') {
    cVar7 = '\0';
  }
  else if (local_150 == 0) {
    cVar7 = '\0';
  }
  else {
    cVar7 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_150);
  QObject::connect(&local_158,*(undefined8 *)(param_1 + 0xc0),"2clicked()",param_1,
                   "1onHelpRequested()",0);
  if (cVar7 == '\0') {
    cVar7 = '\0';
  }
  else if (local_158 == 0) {
    cVar7 = '\0';
  }
  else {
    cVar7 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_158);
  QObject::connect(&local_160,*(undefined8 *)(param_1 + 0x108),"2operationStarted(const QString&)",
                   param_1,"1onOperationStarted(const QString& )",0);
  if (cVar7 == '\0') {
    cVar7 = '\0';
  }
  else if (local_160 == 0) {
    cVar7 = '\0';
  }
  else {
    cVar7 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_160);
  QObject::connect(&local_168,*(undefined8 *)(param_1 + 0x108),"2operationFinished(PRL_RESULT)",
                   param_1,"1onOperationFinished(PRL_RESULT)",0);
  if ((cVar7 != '\0') && (local_168 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_168);
  cVar7 = (**(code **)(**(long **)(param_1 + 0x110) + 0x80))();
  pQVar5 = *(QSize **)(param_1 + 0x100);
  if (cVar7 == '\0') {
    (**(code **)((long)*pQVar5 + 0x70))(pQVar5);
    QWidget::resize(pQVar5);
  }
  else {
    QWidget::resize(pQVar5);
  }
  if (*(int *)local_f8.field0_0x0 != -1) {
    if (*(int *)local_f8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_f8.field0_0x0 = *(int *)local_f8.field0_0x0 + -1;
      local_29 = *(int *)local_f8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007abbc6;
    }
    QArrayData::deallocate((QArrayData *)local_f8.field0_0x0,2,8);
  }
LAB_1007abbc6:
  if (*(int *)local_90.field0_0x0 != -1) {
    if (*(int *)local_90.field0_0x0 != 0) {
      LOCK();
      *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_90.field0_0x0 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
  }
  return;
}

