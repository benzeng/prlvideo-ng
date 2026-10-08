
void FUN_10017b290(QAction *param_1)

{
  undefined8 uVar1;
  int iVar2;
  QVariant *pQVar3;
  Connection local_68 [8];
  QVariant local_60;
  QString local_50;
  QString local_48;
  QString local_40;
  QString local_38;
  QString local_30;
  undefined1 local_21;
  
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmCommonOptions();
  iVar2 = CVmCommonOptions::getOsType();
  local_30.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  if (iVar2 == 8) {
    QMetaObject::tr((char *)&local_40,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_Share_OS_X_folders_with_Windows_10226e9b0);
    QString::operator=(&local_30,&local_40);
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_21 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10017b476;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
  }
  else if (iVar2 == 0xf) {
    QMetaObject::tr((char *)&local_48,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_Share_OS_X_folders_with_Chromium_10226e9c8);
    QString::operator=(&local_30,&local_48);
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_21 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10017b476;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
  }
  else if (iVar2 == 9) {
    QMetaObject::tr((char *)&local_38,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_Share_OS_X_folders_with_Linux_10226e9b8);
    QString::operator=(&local_30,&local_38);
    if (*(int *)local_38.field0_0x0 != -1) {
      if (*(int *)local_38.field0_0x0 != 0) {
        LOCK();
        *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
        local_21 = *(int *)local_38.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10017b476;
      }
      QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
    }
  }
  else {
    QMetaObject::tr((char *)&local_50,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_Share_OS_X_folders_with_guest_OS_10226e9c0);
    QString::operator=(&local_30,&local_50);
    if (*(int *)local_50.field0_0x0 != -1) {
      if (*(int *)local_50.field0_0x0 != 0) {
        LOCK();
        *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
        local_21 = *(int *)local_50.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10017b476;
      }
      QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
    }
  }
LAB_10017b476:
  pQVar3 = operator_new(0x18);
  FUN_100132430(pQVar3,&local_30,param_1);
  *(QVariant **)(param_1 + 0x128) = pQVar3;
  QVariant::QVariant(&local_60,7);
  QAction::setData(pQVar3);
  QVariant::~QVariant(&local_60);
  QAction::setEnabled(SUB81(*(undefined8 *)(param_1 + 0x128),0));
  QAction::setCheckable(SUB81(*(undefined8 *)(param_1 + 0x128),0));
  uVar1 = *(undefined8 *)(param_1 + 0x128);
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  CVmTools::getVmSharing();
  CVmSharing::getHostSharing();
  CVmHostSharing::isEnabled();
  QAction::setChecked(SUB81(uVar1,0));
  QObject::connect(local_68,*(undefined8 *)(param_1 + 0x128),"2triggered(bool)",param_1,
                   "1onChangeHostSharingState( bool )",0);
  QMetaObject::Connection::~Connection(local_68);
  QWidget::addAction(param_1);
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_30.field0_0x0 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
  return;
}

