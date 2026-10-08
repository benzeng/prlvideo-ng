
void FUN_10017ad60(QAction *param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  QVariant *pQVar4;
  Connection local_78 [8];
  QVariant local_70;
  QString local_60;
  QString local_58;
  QString local_50;
  QString local_48;
  QString local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  uVar2 = FUN_100152280();
  CVmConfiguration::getVmIdentification();
  CVmIdentification::getVmUuid();
  lVar3 = FUN_1001548f0(uVar2,&local_38);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10017add3;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10017add3:
  if (lVar3 == 0) {
    FUN_100df99c0("","prl_client_app",0,
                  "(!)Error: can\'t get VM instance to create shared folders menu.");
    return;
  }
  iVar1 = FUN_10018f860(lVar3);
  if (iVar1 == 9) {
    return;
  }
  iVar1 = FUN_10018f860(lVar3);
  if (iVar1 == 0xf) {
    return;
  }
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  iVar1 = FUN_10018f860(lVar3);
  if (iVar1 == 7) {
    QMetaObject::tr((char *)&local_48,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_All_Mac_disks_10226fc48);
    QString::operator=(&local_40,&local_48);
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_29 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10017aff3;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
  }
  else {
    iVar1 = FUN_10018f860(lVar3);
    if (iVar1 == 8) {
      QMetaObject::tr((char *)&local_50,PTR_staticMetaObject_1021e1520,
                      (int)PTR_s_All_Windows_disks_10226fc38);
      QString::operator=(&local_40,&local_50);
      if (*(int *)local_50.field0_0x0 != -1) {
        if (*(int *)local_50.field0_0x0 != 0) {
          LOCK();
          *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
          local_29 = *(int *)local_50.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_10017aff3;
        }
        QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
      }
    }
    else {
      iVar1 = FUN_10018f860(lVar3);
      if (iVar1 == 0xf) {
        QMetaObject::tr((char *)&local_58,PTR_staticMetaObject_1021e1520,
                        (int)PTR_s_All_Chromium_OS_disks_10226fc50);
        QString::operator=(&local_40,&local_58);
        if (*(int *)local_58.field0_0x0 != -1) {
          if (*(int *)local_58.field0_0x0 != 0) {
            LOCK();
            *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
            local_29 = *(int *)local_58.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_10017aff3;
          }
          QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
        }
      }
      else {
        QMetaObject::tr((char *)&local_60,PTR_staticMetaObject_1021e1520,
                        (int)PTR_s_All_Linux_disks_10226fc40);
        QString::operator=(&local_40,&local_60);
        if (*(int *)local_60.field0_0x0 != -1) {
          if (*(int *)local_60.field0_0x0 != 0) {
            LOCK();
            *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
            local_29 = *(int *)local_60.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_10017aff3;
          }
          QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
        }
      }
    }
  }
LAB_10017aff3:
  pQVar4 = operator_new(0x18);
  FUN_100132430(pQVar4,&local_40,param_1);
  QAction::setCheckable(SUB81(pQVar4,0));
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  CVmTools::getVmSharing();
  CVmSharing::getGuestSharing();
  CVmGuestSharing::isEnabled();
  QAction::setChecked(SUB81(pQVar4,0));
  QVariant::QVariant(&local_70,3);
  QAction::setData(pQVar4);
  QVariant::~QVariant(&local_70);
  QObject::connect(local_78,pQVar4,"2triggered(bool)",param_1,"1onShareAllGuestDisks(bool)",0);
  QMetaObject::Connection::~Connection(local_78);
  QWidget::addAction(param_1);
  QMenu::addSeparator();
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return;
}

