
void FUN_10039a390(long param_1)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  long local_98;
  QVariant local_90;
  QVariant local_80;
  QVariant local_70;
  QVariant local_60;
  QVariant local_50;
  QVariant local_40;
  QVariant local_30;
  
  uVar4 = FUN_100152280();
  lVar5 = FUN_1001554a0(uVar4);
  if (lVar5 == 0) goto LAB_10039a6b5;
  uVar4 = FUN_10016f500(lVar5);
  FUN_10061abe0(&local_30,uVar4,0);
  iVar3 = QVariant::toInt((bool *)&local_30);
  if (iVar3 == 0) {
    QVariant::~QVariant(&local_30);
  }
  else {
    uVar4 = FUN_10016f500(lVar5);
    FUN_10061abe0(&local_40,uVar4,0);
    iVar3 = QVariant::toInt((bool *)&local_40);
    bVar9 = true;
    if (iVar3 != -0x7ffeefa8) {
      uVar4 = FUN_10016f500(lVar5);
      FUN_10061abe0(&local_50,uVar4,0);
      iVar3 = QVariant::toInt((bool *)&local_50);
      bVar9 = true;
      if (iVar3 != -0x7ffeefff) {
        uVar4 = FUN_10016f500(lVar5);
        FUN_10061abe0(&local_60,uVar4,0);
        iVar3 = QVariant::toInt((bool *)&local_60);
        bVar9 = true;
        if (iVar3 != -0x7ffeef8c) {
          uVar4 = FUN_10016f500(lVar5);
          FUN_10061abe0(&local_70,uVar4,0);
          iVar3 = QVariant::toInt((bool *)&local_70);
          bVar9 = true;
          if (iVar3 != -0x7ffeef89) {
            uVar4 = FUN_10016f500(lVar5);
            FUN_10061abe0(&local_80,uVar4,0);
            iVar3 = QVariant::toInt((bool *)&local_80);
            bVar9 = iVar3 == -0x7ffeef9b;
            QVariant::~QVariant(&local_80);
          }
          QVariant::~QVariant(&local_70);
        }
        QVariant::~QVariant(&local_60);
      }
      QVariant::~QVariant(&local_50);
    }
    QVariant::~QVariant(&local_40);
    QVariant::~QVariant(&local_30);
    if (!bVar9) goto LAB_10039a6b5;
  }
  uVar4 = FUN_10016f500(lVar5);
  cVar2 = FUN_10061b4d0(uVar4,0x2010);
  if (cVar2 == '\0') {
    uVar4 = FUN_10016f500(lVar5);
    cVar2 = FUN_10061b4d0(uVar4,0x8000);
    if (cVar2 == '\0') {
      uVar4 = FUN_1006915d0();
      puVar1 = PTR_self_1021e1388;
      FUN_100691620(uVar4,0x60,*(undefined8 *)PTR_self_1021e1388);
      cVar2 = QAction::isEnabled();
      if ((cVar2 != '\0') && (cVar2 = QAction::isVisible(), cVar2 != '\0')) {
        uVar7 = FUN_1006915d0();
        uVar4 = *(undefined8 *)puVar1;
        uVar8 = 0x60;
LAB_10039a6a1:
        uVar4 = FUN_100691620(uVar7,uVar8,uVar4);
        QAction::activate(uVar4,0);
        return;
      }
      uVar4 = FUN_10016f500(lVar5);
      cVar2 = FUN_10061b4d0(uVar4,0x20);
      if (cVar2 == '\0') {
        uVar4 = FUN_1006915d0();
        FUN_100691620(uVar4,0x52,*(undefined8 *)puVar1);
        cVar2 = QAction::isEnabled();
        if ((cVar2 != '\0') && (cVar2 = QAction::isVisible(), cVar2 != '\0')) {
          uVar7 = FUN_1006915d0();
          uVar4 = *(undefined8 *)puVar1;
          uVar8 = 0x52;
          goto LAB_10039a6a1;
        }
      }
LAB_10039a6b5:
      FUN_1006085d0(7,0);
      return;
    }
  }
  pcVar6 = operator_new(0x50);
  FUN_10028b200(pcVar6,lVar5);
  iVar3 = FUN_1006268d0();
  QVariant::QVariant(&local_90,iVar3);
  QObject::setProperty(pcVar6,(QVariant *)"ProductEdition");
  QVariant::~QVariant(&local_90);
  QObject::connect(&local_98,pcVar6,"2taskFinished(PRL_RESULT)",param_1,
                   "1onRenewalLicenseFinished(PRL_RESULT)",0);
  if (local_98 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_98);
  CAbstractTask::execute();
  QWidget::setDisabled(SUB81(*(undefined8 *)(param_1 + 0x30),0));
  CProgressIndicator::toggleAnimation(SUB81(*(undefined8 *)(param_1 + 0x90),0));
  CProgressIndicator::show();
  return;
}

