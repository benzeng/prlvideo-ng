
void FUN_1005f9560(long param_1,QObject *param_2)

{
  char cVar1;
  char cVar2;
  long lVar3;
  QObject *pQVar4;
  undefined8 uVar5;
  long lVar6;
  char *pcVar7;
  long *plVar8;
  QCursor *pQVar9;
  undefined4 uVar10;
  QVariant local_160;
  QVariant local_150;
  QVariant local_140;
  QVariant local_130;
  QVariant local_120;
  QCursor local_110 [8];
  QArrayData *local_108;
  undefined1 local_f9;
  QVariant local_f8;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QVariant local_d8;
  undefined1 local_c1;
  QVariant local_c0;
  QVariant local_b0;
  QVariant local_a0;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  QArrayData *local_68;
  long local_60;
  long local_58;
  long local_50;
  QVariant local_48;
  undefined1 local_31;
  
  if (param_2 == (QObject *)0x0) {
    return;
  }
  QVariant::QVariant(&local_48,true);
  QObject::setProperty((char *)param_2,(QVariant *)"processPageContentChange");
  QVariant::~QVariant(&local_48);
  *(undefined4 *)(*(long *)(param_1 + 0x40) + 0x24) = 0;
  QGraphicsItem::setAcceptDrops((bool)((char)param_2 + '\x10'));
  QObject::installEventFilter(param_2);
  CAbstractWizardPage::wizardCtrl();
  lVar3 = CWizardController::parentWidget();
  if (lVar3 != 0) {
    CAbstractWizardPage::wizardCtrl();
    CWizardController::parentWidget();
    lVar3 = QWidget::window();
    if (lVar3 != 0) {
      CAbstractWizardPage::wizardCtrl();
      CWizardController::parentWidget();
      pQVar4 = (QObject *)QWidget::window();
      QObject::installEventFilter(pQVar4);
    }
  }
  QObject::connect(&local_50,param_2,"2currentAutodetectedIndexChanged()",
                   *(undefined8 *)(param_1 + 0x40),"1onCurrentAutodetectedIndexChanged()",0);
  if (local_50 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_50);
    cVar2 = '\0';
    QObject::connect(&local_58,param_2,"2showSourceInFinder(int)",*(undefined8 *)(param_1 + 0x40),
                     "1onShowSource(int)",0);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_50);
    cVar2 = '\0';
    QObject::connect(&local_58,param_2,"2showSourceInFinder(int)",*(undefined8 *)(param_1 + 0x40),
                     "1onShowSource(int)",0);
    if (cVar1 != '\0') {
      if (local_58 == 0) {
        cVar2 = '\0';
      }
      else {
        cVar2 = QMetaObject::Connection::isConnected_helper();
      }
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_58);
  local_68 = (QArrayData *)QString::fromAscii_helper("emptySource",0xb);
  uVar5 = qt_qFindChild_helper(param_2,&local_68,PTR_staticMetaObject_1021e1368,1);
  QObject::connect(&local_60,uVar5,"2checkedChanged()",*(undefined8 *)(param_1 + 0x40),
                   "1onNoSourcesChanged()",0);
  if (cVar2 == '\0') {
    cVar2 = '\0';
  }
  else if (local_60 == 0) {
    cVar2 = '\0';
  }
  else {
    cVar2 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_60);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005f97a6;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1005f97a6:
  QObject::connect(&local_70,param_2,"2currentManualItemChanged()",*(undefined8 *)(param_1 + 0x40),
                   "1onCurrentManualItemChanged()",0);
  if ((cVar2 == '\0') || (local_70 == 0)) {
    QMetaObject::Connection::~Connection((Connection *)&local_70);
    QObject::connect((Connection *)&local_78,param_2,"2automaticModeChanged()",
                     *(undefined8 *)(param_1 + 0x40),"1onAutomaticModeChanged()",0);
    QMetaObject::Connection::~Connection((Connection *)&local_78);
    uVar5 = *(undefined8 *)(param_1 + 0x40);
LAB_1005f9949:
    QObject::connect((Connection *)&local_80,param_2,"2openFileName()",uVar5,"1openFileName()",0);
    QMetaObject::Connection::~Connection((Connection *)&local_80);
    uVar5 = *(undefined8 *)(param_1 + 0x40);
LAB_1005f9975:
    cVar2 = '\0';
    QObject::connect(&local_88,param_2,"2autodetectedItemDoubleClicked(int)",uVar5,
                     "1onAutodetectedItemDoubleClicked(int)",0);
  }
  else {
    cVar2 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_70);
    QObject::connect(&local_78,param_2,"2automaticModeChanged()",*(undefined8 *)(param_1 + 0x40),
                     "1onAutomaticModeChanged()",0);
    if ((cVar2 == '\0') || (local_78 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_78);
      uVar5 = *(undefined8 *)(param_1 + 0x40);
      goto LAB_1005f9949;
    }
    cVar2 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_78);
    QObject::connect(&local_80,param_2,"2openFileName()",*(undefined8 *)(param_1 + 0x40),
                     "1openFileName()",0);
    if ((cVar2 == '\0') || (local_80 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_80);
      uVar5 = *(undefined8 *)(param_1 + 0x40);
      goto LAB_1005f9975;
    }
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_80);
    cVar2 = '\0';
    QObject::connect(&local_88,param_2,"2autodetectedItemDoubleClicked(int)",
                     *(undefined8 *)(param_1 + 0x40),"1onAutodetectedItemDoubleClicked(int)",0);
    if (cVar1 != '\0') {
      if (local_88 == 0) {
        cVar2 = '\0';
      }
      else {
        cVar2 = QMetaObject::Connection::isConnected_helper();
      }
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_88);
  lVar3 = param_1 + 0x38;
  uVar5 = FUN_1005ec980();
  QObject::connect(&local_90,uVar5,
                   "2detectedSourcesUpdated(QPair<QString,CTaskDetectOs::SourceType>)",
                   *(undefined8 *)(param_1 + 0x40),
                   "1onDetectedSourcesUpdated(QPair<QString,CTaskDetectOs::SourceType>)",0);
  if ((cVar2 != '\0') && (local_90 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_90);
  lVar6 = *(long *)(param_1 + 0x40);
  if (DAT_102273ff8 == 0) {
    DAT_102273ff8 = FUN_1004466c0("QList<QObject*>",0xffffffffffffffff,1);
  }
  QVariant::QVariant(&local_a0,DAT_102273ff8,(void *)(lVar6 + 0x18),0);
  QObject::setProperty((char *)param_2,(QVariant *)"detectedSources");
  QVariant::~QVariant(&local_a0);
  QVariant::QVariant(&local_b0,2,(void *)(*(long *)(param_1 + 0x40) + 0x20),0);
  QObject::setProperty((char *)param_2,(QVariant *)"currentAutodetectedIndex");
  QVariant::~QVariant(&local_b0);
  uVar5 = FUN_1005ec990(lVar3);
  local_c1 = FUN_1005bec20(uVar5);
  uVar10 = 0;
  QVariant::QVariant(&local_c0,1,&local_c1,0);
  QObject::setProperty((char *)param_2,(QVariant *)"autodetectInProgress");
  QVariant::~QVariant(&local_c0);
  lVar6 = FUN_1005ec990(lVar3);
  if (*(char *)(lVar6 + 0x148) == '\0') {
    lVar6 = FUN_1005ec990(lVar3);
    uVar10 = 2;
    if (*(int *)(lVar6 + 0x158) != 0) {
      lVar6 = FUN_1005ec990(lVar3);
      uVar10 = *(undefined4 *)(lVar6 + 0x158);
    }
  }
  FUN_1005f4a80(&local_e0,uVar10);
  QVariant::QVariant(&local_d8,10,&local_e0,0);
  QObject::setProperty((char *)param_2,(QVariant *)"currentManualItem");
  QVariant::~QVariant(&local_d8);
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_31 = *(int *)local_e0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005f9b91;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_1005f9b91:
  local_e8 = (QArrayData *)QString::fromAscii_helper("emptySource",0xb);
  pcVar7 = (char *)qt_qFindChild_helper(param_2,&local_e8,PTR_staticMetaObject_1021e1368);
  lVar6 = FUN_1005ec990(lVar3);
  local_f9 = *(undefined1 *)(lVar6 + 0x148);
  QVariant::QVariant(&local_f8,1,&local_f9,0);
  QObject::setProperty(pcVar7,(QVariant *)"checked");
  QVariant::~QVariant(&local_f8);
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_31 = *(int *)local_e8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005f9c4d;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_1005f9c4d:
  local_108 = (QArrayData *)QString::fromAscii_helper("dropTextSelectFile",0x12);
  plVar8 = (long *)qt_qFindChild_helper(param_2,&local_108,PTR_staticMetaObject_1021e1390,1);
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_31 = *(int *)local_108 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005f9cb9;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_1005f9cb9:
  if ((plVar8 != (long *)0x0) &&
     (pQVar9 = (QCursor *)(**(code **)(*plVar8 + 8))(plVar8), pQVar9 != (QCursor *)0x0)) {
    QCursor::QCursor(local_110,0xd);
    QGraphicsItem::setCursor(pQVar9);
    QCursor::~QCursor(local_110);
  }
  QVariant::QVariant(&local_120,0);
  QObject::setProperty((char *)param_2,(QVariant *)"animationDuration");
  QVariant::~QVariant(&local_120);
  lVar3 = FUN_1005ec990(lVar3);
  QVariant::QVariant(&local_130,*(int *)(lVar3 + 0x14c) == 1);
  QObject::setProperty((char *)param_2,(QVariant *)"automaticMode");
  QVariant::~QVariant(&local_130);
  QVariant::QVariant(&local_140,300);
  QObject::setProperty((char *)param_2,(QVariant *)"animationDuration");
  QVariant::~QVariant(&local_140);
  lVar3 = FUN_1005ec990(*(long *)(*(long *)(param_1 + 0x40) + 0x10) + 0x38);
  QVariant::QVariant(&local_150,*(int *)(lVar3 + 0x50) == 4);
  QObject::setProperty((char *)param_2,(QVariant *)"buyWindowsWay");
  QVariant::~QVariant(&local_150);
  QVariant::QVariant(&local_160,false);
  QObject::setProperty((char *)param_2,(QVariant *)"processPageContentChange");
  QVariant::~QVariant(&local_160);
  return;
}

