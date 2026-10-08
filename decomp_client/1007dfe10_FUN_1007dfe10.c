
void FUN_1007dfe10(undefined8 param_1,char *param_2)

{
  long lVar1;
  char *pcVar2;
  long *plVar3;
  QString *pQVar4;
  QCursor *pQVar5;
  long local_e0;
  QCursor local_d8 [8];
  QLocale local_d0 [8];
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QVariant local_b0;
  QArrayData *local_a0;
  QString local_98;
  QString local_90;
  QArrayData *local_88;
  QString local_80;
  QVariant local_78;
  QString local_68;
  QVariant local_60;
  QVariant local_50;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  if (param_2 == (char *)0x0) {
    return;
  }
  lVar1 = CAbstractWizardPage::wizardModel();
  if (*(int *)(lVar1 + 0x20) != 0) {
    local_40 = (QArrayData *)QString::fromAscii_helper("doNotShowAgainItem",0x12);
    pcVar2 = (char *)qt_qFindChild_helper(param_2,&local_40,PTR_staticMetaObject_1021e1368,1);
    QVariant::QVariant(&local_50,false);
    QObject::setProperty(pcVar2,(QVariant *)"visible");
    QVariant::~QVariant(&local_50);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_29 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1007dfeca;
      }
      QArrayData::deallocate(local_40,2,8);
    }
  }
LAB_1007dfeca:
  QMetaObject::tr((char *)&local_68,(char *)&PTR_staticMetaObject_10222ea70,0x1e192db);
  QVariant::QVariant(&local_60,&local_68);
  QObject::setProperty(param_2,(QVariant *)"infoText");
  QVariant::~QVariant(&local_60);
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_29 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007dff44;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_1007dff44:
  QMetaObject::tr((char *)&local_80,(char *)&PTR_staticMetaObject_10222ea70,0x1e19304);
  QVariant::QVariant(&local_78,&local_80);
  QObject::setProperty(param_2,(QVariant *)"descriptionText");
  QVariant::~QVariant(&local_78);
  if (*(int *)local_80.field0_0x0 != -1) {
    if (*(int *)local_80.field0_0x0 != 0) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
      local_29 = *(int *)local_80.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007dffbe;
    }
    QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
  }
LAB_1007dffbe:
  local_88 = (QArrayData *)QString::fromAscii_helper("linkLearnMore",0xd);
  plVar3 = (long *)qt_qFindChild_helper(param_2,&local_88,PTR_staticMetaObject_1021e1390,1);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_29 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007e001e;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1007e001e:
  if (plVar3 == (long *)0x0) goto LAB_1007e0325;
  QMetaObject::tr((char *)&local_a0,(char *)&PTR_staticMetaObject_10222ea70,0x1e1941f);
  QString::fromUtf8_helper((char *)&local_98,0x1e193d3);
  QString::append(&local_98);
  local_90.field0_0x0 = local_98.field0_0x0;
  if (1 < *(int *)local_98.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + 1;
    local_29 = *(int *)local_98.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_38,0x1e1942a);
  QString::append(&local_90);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007e00e8;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1007e00e8:
  if (*(int *)local_98.field0_0x0 != -1) {
    if (*(int *)local_98.field0_0x0 != 0) {
      LOCK();
      *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
      local_29 = *(int *)local_98.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007e011e;
    }
    QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
  }
LAB_1007e011e:
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_29 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007e0154;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_1007e0154:
  local_b8 = (QArrayData *)QString::fromAscii_helper("@@VER_TOOLBOX_LEARN_MORE_URL",0x1c);
  local_c8 = (QArrayData *)
             QString::fromAscii_helper
                       ("http://www.parallels.com/products/desktop/pdfm12-toolbox-learn-more-@LOCALE@"
                        ,0x4c);
  QLocale::QLocale(local_d0);
  FUN_100d3f730(&local_c0,&local_c8,local_d0);
  pQVar4 = (QString *)QString::replace(&local_90,&local_b8,&local_c0,1);
  QVariant::QVariant(&local_b0,pQVar4);
  QObject::setProperty((char *)plVar3,(QVariant *)"text");
  QVariant::~QVariant(&local_b0);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_29 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007e0230;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_1007e0230:
  QLocale::~QLocale(local_d0);
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_29 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007e0272;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_1007e0272:
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_29 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007e02a8;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_1007e02a8:
  pQVar5 = (QCursor *)(**(code **)(*plVar3 + 8))(plVar3,"org.qt-project.Qt.QGraphicsItem");
  if (pQVar5 != (QCursor *)0x0) {
    QCursor::QCursor(local_d8,0xd);
    QGraphicsItem::setCursor(pQVar5);
    QCursor::~QCursor(local_d8);
  }
  if (*(int *)local_90.field0_0x0 != -1) {
    if (*(int *)local_90.field0_0x0 != 0) {
      LOCK();
      *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
      local_29 = *(int *)local_90.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007e0325;
    }
    QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
  }
LAB_1007e0325:
  QObject::connect(&local_e0,param_2,"2doNotShowAgainToggled(bool)",param_1,
                   "1onDoNotShowAgainToggled(bool)",0);
  if (local_e0 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_e0);
  return;
}

