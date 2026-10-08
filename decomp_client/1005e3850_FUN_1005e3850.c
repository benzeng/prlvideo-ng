
void FUN_1005e3850(long param_1,long param_2)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  long *plVar4;
  QString *pQVar5;
  QCursor *pQVar6;
  long local_d0;
  QCursor local_c8 [8];
  QLocale local_c0 [8];
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QVariant local_a0;
  QArrayData *local_90;
  QVariant local_88;
  QArrayData *local_78;
  undefined1 local_69;
  QVariant local_68;
  QArrayData *local_58;
  undefined1 local_49;
  QVariant local_48;
  QArrayData *local_38;
  undefined1 local_29;
  
  if (param_2 == 0) {
    return;
  }
  local_38 = (QArrayData *)QString::fromAscii_helper("btnIntegrated",0xd);
  pcVar2 = (char *)qt_qFindChild_helper(param_2,&local_38,PTR_staticMetaObject_1021e1390);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005e38d1;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1005e38d1:
  if (pcVar2 != (char *)0x0) {
    uVar3 = FUN_1005ec990(param_1 + 0x38);
    iVar1 = FUN_1005b9820(uVar3);
    local_49 = iVar1 == 0;
    QVariant::QVariant(&local_48,1,&local_49,0);
    QObject::setProperty(pcVar2,(QVariant *)"checked");
    QVariant::~QVariant(&local_48);
  }
  local_58 = (QArrayData *)QString::fromAscii_helper("btnIsolated",0xb);
  pcVar2 = (char *)qt_qFindChild_helper(param_2,&local_58,PTR_staticMetaObject_1021e1390);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005e397f;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1005e397f:
  if (pcVar2 != (char *)0x0) {
    uVar3 = FUN_1005ec990(param_1 + 0x38);
    iVar1 = FUN_1005b9820(uVar3);
    local_69 = iVar1 == 1;
    QVariant::QVariant(&local_68,1,&local_69,0);
    QObject::setProperty(pcVar2,(QVariant *)"checked");
    QVariant::~QVariant(&local_68);
  }
  local_78 = (QArrayData *)QString::fromAscii_helper("linkHelpMeChoose",0x10);
  plVar4 = (long *)qt_qFindChild_helper(param_2,&local_78,PTR_staticMetaObject_1021e1390,1);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_29 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005e3a2e;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1005e3a2e:
  if (plVar4 == (long *)0x0) goto LAB_1005e3c2b;
  QObject::property((char *)&local_a0);
  QVariant::toString();
  local_a8 = (QArrayData *)QString::fromAscii_helper("@@VER_VM_INTEGRATION_KB_ARTICLE",0x1f);
  local_b8 = (QArrayData *)
             QString::fromAscii_helper
                       ("http://www.parallels.com/products/desktop/pdfm12-kb-8727-@LOCALE@",0x41);
  QLocale::QLocale(local_c0);
  FUN_100d3f730(&local_b0,&local_b8,local_c0);
  pQVar5 = (QString *)QString::replace(&local_90,&local_a8,&local_b0,1);
  QVariant::QVariant(&local_88,pQVar5);
  QObject::setProperty((char *)plVar4,(QVariant *)"text");
  QVariant::~QVariant(&local_88);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_29 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005e3b32;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_1005e3b32:
  QLocale::~QLocale(local_c0);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_29 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005e3b74;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_1005e3b74:
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_29 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005e3baa;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_1005e3baa:
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_29 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005e3be0;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_1005e3be0:
  QVariant::~QVariant(&local_a0);
  pQVar6 = (QCursor *)(**(code **)(*plVar4 + 8))(plVar4,"org.qt-project.Qt.QGraphicsItem");
  QCursor::QCursor(local_c8,0xd);
  QGraphicsItem::setCursor(pQVar6);
  QCursor::~QCursor(local_c8);
LAB_1005e3c2b:
  QObject::connect(&local_d0,param_2,"2integrationToggled(bool)",param_1,
                   "1onIntegrationToggled(bool)",0);
  if (local_d0 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_d0);
  return;
}

