
void FUN_1007728b0(undefined8 param_1,char *param_2)

{
  int iVar1;
  char cVar2;
  long lVar3;
  char *pcVar4;
  QVariant local_120;
  Data_conflict local_110;
  QString local_108 [2];
  long local_f8;
  QVariant local_f0;
  QArrayData *local_e0;
  QString local_d8;
  QVariant local_d0;
  QArrayData *local_c0;
  QString local_b8;
  QVariant local_b0;
  undefined *local_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined *local_58;
  undefined *local_50;
  QVariant local_48;
  QArrayData *local_38;
  undefined1 local_29;
  
  if (param_2 == (char *)0x0) {
    return;
  }
  lVar3 = CAbstractWizardPage::wizardModel();
  if (*(int *)(lVar3 + 0x20) == 2) {
    local_38 = (QArrayData *)QString::fromAscii_helper("doNotShowAgainItem",0x12);
    pcVar4 = (char *)qt_qFindChild_helper(param_2,&local_38,PTR_staticMetaObject_1021e1368,1);
    QVariant::QVariant(&local_48,false);
    QObject::setProperty(pcVar4,(QVariant *)"visible");
    QVariant::~QVariant(&local_48);
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_29 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10077296e;
      }
      QArrayData::deallocate(local_38,2,8);
    }
  }
LAB_10077296e:
  local_58 = PTR_shared_null_1021e1288;
  local_a0 = PTR_shared_null_1021e1288;
  iVar1 = *(int *)PTR_shared_null_1021e1288;
  if (1 < iVar1 + 1U) {
    LOCK();
    *(int *)PTR_shared_null_1021e1288 = *(int *)PTR_shared_null_1021e1288 + 1;
    local_29 = *(int *)local_58 != 0;
    UNLOCK();
    iVar1 = *(int *)local_58;
  }
  local_98._8_4_ = (int)local_58;
  local_98._0_8_ = local_58;
  local_98._12_4_ = (int)((ulong)local_58 >> 0x20);
  local_50 = PTR_shared_null_1021e15d0;
  local_88 = local_98;
  local_78 = local_98;
  local_68 = local_98;
  if (iVar1 != -1) {
    if (iVar1 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007729ed;
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
  }
LAB_1007729ed:
  if (*(int *)(lVar3 + 0x24) == 1) {
    cVar2 = FUN_10076d530(&local_a0);
  }
  else {
    cVar2 = FUN_10076dab0(&local_a0);
  }
  if (cVar2 == '\0') goto LAB_100772ce9;
  local_c0 = (QArrayData *)
             QString::fromAscii_helper
                       ("<html><style>a { color: #aaddf0; }</style><body>%1</body></html>",0x40);
  QString::arg(&local_b8,&local_c0,local_88,0,0x20);
  QVariant::QVariant(&local_b0,&local_b8);
  QObject::setProperty(param_2,(QVariant *)"descriptionText");
  QVariant::~QVariant(&local_b0);
  if (*(int *)local_b8.field0_0x0 != -1) {
    if (*(int *)local_b8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
      local_29 = *(int *)local_b8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100772ab8;
    }
    QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
  }
LAB_100772ab8:
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_29 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100772aee;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_100772aee:
  local_e0 = (QArrayData *)QString::fromAscii_helper("Info",4);
  FUN_10073e510(&local_d8,&local_a0,&local_e0);
  QVariant::QVariant(&local_d0,&local_d8);
  QObject::setProperty(param_2,(QVariant *)"infoText");
  QVariant::~QVariant(&local_d0);
  if (*(int *)local_d8.field0_0x0 != -1) {
    if (*(int *)local_d8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_d8.field0_0x0 = *(int *)local_d8.field0_0x0 + -1;
      local_29 = *(int *)local_d8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100772b8b;
    }
    QArrayData::deallocate((QArrayData *)local_d8.field0_0x0,2,8);
  }
LAB_100772b8b:
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_29 = *(int *)local_e0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100772bc1;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_100772bc1:
  QVariant::QVariant(&local_f0,*(int *)(lVar3 + 0x24) == 0);
  QObject::setProperty(param_2,(QVariant *)"onlineType");
  QVariant::~QVariant(&local_f0);
  QObject::connect(&local_f8,param_2,"2doNotShowAgainToggled(bool)",param_1,
                   "1onDoNotShowAgainToggled(bool)",0);
  if (local_f8 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_f8);
  if (*(int *)(lVar3 + 0x20) != 1) goto LAB_100772ce9;
  QSettings::QSettings((QSettings *)local_108,(QObject *)0x0);
  local_110.field7 = QString::fromAscii_helper("AcronisOnlineStore/AcronisOnlineStorePromoOff",0x2d)
  ;
  QVariant::QVariant(&local_120,true);
  QSettings::setValue(local_108,(QVariant *)&local_110);
  QVariant::~QVariant(&local_120);
  if (*(int *)local_110.field15 != -1) {
    if (*(int *)local_110.field15 != 0) {
      LOCK();
      *(int *)local_110.field15 = *(int *)local_110.field15 + -1;
      local_29 = *(int *)local_110.field15 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100772cdd;
    }
    QArrayData::deallocate((QArrayData *)local_110.field15,2,8);
  }
LAB_100772cdd:
  QSettings::~QSettings((QSettings *)local_108);
LAB_100772ce9:
  FUN_100252e70(&local_a0);
  return;
}

