
QVariant * FUN_10017b6f0(QAction *param_1)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  QVariant *pQVar4;
  bool bVar5;
  Connection local_70 [8];
  QVariant local_68;
  QString local_58;
  QString local_50;
  QString local_48;
  QString local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  uVar2 = FUN_100152280();
  CVmConfiguration::getVmIdentification();
  CVmIdentification::getVmUuid();
  lVar3 = FUN_1001547d0(uVar2,&local_38);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10017b763;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10017b763:
  if (lVar3 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t get server instance to add shared folder."
                 );
    return (QVariant *)0x0;
  }
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  cVar1 = FUN_10015ab00(lVar3);
  if (cVar1 == '\0') {
    cVar1 = FUN_10015a680(lVar3);
    if (cVar1 == '\0') {
      QMetaObject::tr((char *)&local_58,PTR_staticMetaObject_1021e1520,
                      (int)PTR_s_All_Linux_disks_10226fc28);
      QString::operator=(&local_40,&local_58);
      if (*(int *)local_58.field0_0x0 != -1) {
        if (*(int *)local_58.field0_0x0 != 0) {
          LOCK();
          *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
          local_29 = *(int *)local_58.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_10017b8e8;
        }
        QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
      }
    }
    else {
      QMetaObject::tr((char *)&local_50,PTR_staticMetaObject_1021e1520,
                      (int)PTR_s_All_disks_10226fd08);
      QString::operator=(&local_40,&local_50);
      if (*(int *)local_50.field0_0x0 != -1) {
        if (*(int *)local_50.field0_0x0 != 0) {
          LOCK();
          *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
          local_29 = *(int *)local_50.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_10017b8e8;
        }
        QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
      }
    }
  }
  else {
    QMetaObject::tr((char *)&local_48,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_All_Mac_disks_10226fc30);
    QString::operator=(&local_40,&local_48);
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_29 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10017b8e8;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
  }
LAB_10017b8e8:
  pQVar4 = operator_new(0x18);
  FUN_1007b5750(pQVar4,0xd,param_1,&local_40);
  bVar5 = SUB81(pQVar4,0);
  QAction::setCheckable(bVar5);
  QVariant::QVariant(&local_68,2);
  QAction::setData(pQVar4);
  QVariant::~QVariant(&local_68);
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  CVmTools::getVmSharing();
  CVmSharing::getHostSharing();
  CVmHostSharing::isShareAllMacDisks();
  QAction::setChecked(bVar5);
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  CVmTools::getVmSharing();
  CVmSharing::getHostSharing();
  CVmHostSharing::isEnabled();
  QAction::setEnabled(bVar5);
  QObject::connect(local_70,pQVar4,"2triggered(bool)",param_1,"1onShareAllHostDisks(bool)",0);
  QMetaObject::Connection::~Connection(local_70);
  QWidget::addAction(param_1);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return pQVar4;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return pQVar4;
}

