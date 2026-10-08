
void FUN_100445580(QSize *param_1)

{
  QUrl *pQVar1;
  QSize *pQVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  char *pcVar8;
  QSize QVar9;
  Data *local_78;
  QVariant local_70;
  QVariant local_60;
  long local_50;
  long local_48;
  QArrayData *local_40;
  QUrl local_38 [8];
  QArrayData *local_30;
  undefined1 local_21;
  
  FUN_100445e20(param_1[0xc],param_1);
  FUN_1001c72e0(&local_30);
  QWidget::setWindowTitle((QString *)param_1);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004455e3;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1004455e3:
  bVar3 = (bool)QAbstractScrollArea::viewport();
  QWidget::setAutoFillBackground(bVar3);
  pQVar1 = *(QUrl **)((long)param_1[0xc] + 0x20);
  local_40 = (QArrayData *)QString::fromAscii_helper("qrc:/qml/VmProfile.qml",0x16);
  QUrl::QUrl(local_38,&local_40,0);
  QDeclarativeView::setSource(pQVar1);
  QUrl::~QUrl(local_38);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10044566b;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10044566b:
  uVar7 = QDeclarativeView::rootObject();
  QObject::connect(&local_48,uVar7,"2profileSelected(int)",param_1,"1updateOkButton()",0);
  if (local_48 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_48);
    uVar7 = QDeclarativeView::rootObject();
    QObject::connect(&local_50,uVar7,"2profileDoubleClicked(int)",param_1,
                     "1onProfileDoubleClicked()",0);
  }
  else {
    cVar4 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_48);
    uVar7 = QDeclarativeView::rootObject();
    QObject::connect(&local_50,uVar7,"2profileDoubleClicked(int)",param_1,
                     "1onProfileDoubleClicked()",0);
    if ((cVar4 != '\0') && (local_50 != 0)) {
      QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_50);
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmCommonOptions();
  CVmCommonOptions::getProfile();
  cVar4 = CVmProfile::isCustom();
  if (cVar4 == '\0') {
    pcVar8 = (char *)QDeclarativeView::rootObject();
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmCommonOptions();
    CVmCommonOptions::getProfile();
    iVar5 = CVmProfile::getType();
    QVariant::QVariant(&local_60,iVar5);
    QObject::setProperty(pcVar8,(QVariant *)"currentProfileType");
    QVariant::~QVariant(&local_60);
  }
  pcVar8 = (char *)QDeclarativeView::rootObject();
  QVar9.field0_0x0 = 0;
  QVar9.field1_0x4 = 0;
  if ((param_1[0x10] != (QSize)0x0) &&
     (QVar9.field0_0x0 = 0, QVar9.field1_0x4 = 0, *(int *)((long)param_1[0x10] + 4) != 0)) {
    QVar9 = param_1[0x11];
  }
  uVar7 = FUN_10018d490(QVar9);
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmCommonOptions();
  CVmCommonOptions::getProfile();
  uVar6 = CVmProfile::getType();
  FUN_1001bc100(&local_78,uVar7,uVar6);
  if (DAT_102273ff8 == 0) {
    DAT_102273ff8 = FUN_1004466c0("QList<QObject*>",0xffffffffffffffff,1);
  }
  QVariant::QVariant(&local_70,DAT_102273ff8,&local_78,0);
  QObject::setProperty(pcVar8,(QVariant *)"profilesModel");
  QVariant::~QVariant(&local_70);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_21 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004458a6;
    }
    QListData::dispose(local_78);
  }
LAB_1004458a6:
  pQVar2 = *(QSize **)((long)param_1[0xc] + 0x20);
  (**(code **)((long)*pQVar2 + 0x70))(pQVar2);
  QWidget::setFixedSize(pQVar2);
  (**(code **)((long)*param_1 + 0x78))(param_1);
  QWidget::setFixedSize(param_1);
  FUN_100445b70(param_1);
  return;
}

