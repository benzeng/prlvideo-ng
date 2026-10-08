
QVariant * FUN_10017bb70(QAction *param_1)

{
  QVariant *pQVar1;
  bool bVar2;
  Connection local_48 [8];
  QVariant local_40;
  QArrayData *local_30;
  undefined1 local_21;
  
  pQVar1 = operator_new(0x18);
  QMetaObject::tr((char *)&local_30,PTR_staticMetaObject_1021e1520,(int)PTR_s_Home_folder_10226fc58)
  ;
  FUN_1007b5750(pQVar1,0xd,param_1,&local_30);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10017bbf3;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10017bbf3:
  bVar2 = SUB81(pQVar1,0);
  QAction::setCheckable(bVar2);
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  CVmTools::getVmSharing();
  CVmSharing::getHostSharing();
  CVmHostSharing::isShareUserHomeDir();
  QAction::setChecked(bVar2);
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  CVmTools::getVmSharing();
  CVmSharing::getHostSharing();
  CVmHostSharing::isEnabled();
  QAction::setEnabled(bVar2);
  QVariant::QVariant(&local_40,4);
  QAction::setData(pQVar1);
  QVariant::~QVariant(&local_40);
  QObject::connect(local_48,pQVar1,"2triggered(bool)",param_1,"1onShareHomeFolder(bool)",0);
  QMetaObject::Connection::~Connection(local_48);
  QWidget::addAction(param_1);
  return pQVar1;
}

