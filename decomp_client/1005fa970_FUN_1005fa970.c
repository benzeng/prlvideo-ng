
void FUN_1005fa970(long param_1,long param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  QString *pQVar3;
  long local_c8;
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
  byte local_49;
  QVariant local_48;
  QArrayData *local_38;
  undefined1 local_29;
  
  if (param_2 == 0) {
    return;
  }
  local_38 = (QArrayData *)QString::fromAscii_helper("btnWin7LookDisabled",0x13);
  pcVar1 = (char *)qt_qFindChild_helper(param_2,&local_38,PTR_staticMetaObject_1021e1390);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005fa9f1;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1005fa9f1:
  if (pcVar1 != (char *)0x0) {
    uVar2 = FUN_1005ec990(param_1 + 0x38);
    local_49 = FUN_1005bf400(uVar2);
    local_49 = local_49 ^ 1;
    QVariant::QVariant(&local_48,1,&local_49,0);
    QObject::setProperty(pcVar1,(QVariant *)"checked");
    QVariant::~QVariant(&local_48);
  }
  local_58 = (QArrayData *)QString::fromAscii_helper("btnWin7LookEnabled",0x12);
  pcVar1 = (char *)qt_qFindChild_helper(param_2,&local_58,PTR_staticMetaObject_1021e1390);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005faa9e;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1005faa9e:
  if (pcVar1 != (char *)0x0) {
    uVar2 = FUN_1005ec990(param_1 + 0x38);
    local_69 = FUN_1005bf400(uVar2);
    QVariant::QVariant(&local_68,1,&local_69,0);
    QObject::setProperty(pcVar1,(QVariant *)"checked");
    QVariant::~QVariant(&local_68);
  }
  local_78 = (QArrayData *)QString::fromAscii_helper("objTextNote",0xb);
  pcVar1 = (char *)qt_qFindChild_helper(param_2,&local_78,PTR_staticMetaObject_1021e1390,1);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_29 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005fab49;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1005fab49:
  if (pcVar1 == (char *)0x0) goto LAB_1005fad07;
  QObject::property((char *)&local_a0);
  QVariant::toString();
  local_a8 = (QArrayData *)QString::fromAscii_helper("@@VER_WINDOWS7_LOOK_KB_ARTICLE",0x1e);
  local_b8 = (QArrayData *)
             QString::fromAscii_helper
                       ("http://www.parallels.com/products/desktop/pdfm12-kb-116716-@LOCALE@",0x43);
  QLocale::QLocale(local_c0);
  FUN_100d3f730(&local_b0,&local_b8,local_c0);
  pQVar3 = (QString *)QString::replace(&local_90,&local_a8,&local_b0,1);
  QVariant::QVariant(&local_88,pQVar3);
  QObject::setProperty(pcVar1,(QVariant *)"text");
  QVariant::~QVariant(&local_88);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_29 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005fac4d;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_1005fac4d:
  QLocale::~QLocale(local_c0);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_29 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005fac8f;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_1005fac8f:
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_29 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005facc5;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_1005facc5:
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_29 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005facfb;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_1005facfb:
  QVariant::~QVariant(&local_a0);
LAB_1005fad07:
  QObject::connect(&local_c8,param_2,"2windows7LookToggled(bool)",param_1,
                   "1onWindows7LookToggled(bool)",0);
  if (local_c8 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_c8);
  return;
}

