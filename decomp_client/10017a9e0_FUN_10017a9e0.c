
void FUN_10017a9e0(QAction *param_1)

{
  undefined8 uVar1;
  long lVar2;
  QVariant *pQVar3;
  Connection local_78 [8];
  QVariant local_70;
  QArrayData *local_60;
  Connection local_58 [8];
  QVariant local_50;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  uVar1 = FUN_100152280();
  CVmConfiguration::getVmIdentification();
  CVmIdentification::getVmUuid();
  lVar2 = FUN_1001548f0(uVar1,&local_38);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10017aa50;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10017aa50:
  if (lVar2 == 0) {
    FUN_100df99c0("","prl_client_app",0,
                  "(!)Error: can\'t get VM instance to create shared folders menu.");
    return;
  }
  pQVar3 = operator_new(0x18);
  QMetaObject::tr((char *)&local_40,PTR_staticMetaObject_1021e1520,(int)PTR_s_Connect_All_10226fc08)
  ;
  FUN_100132430(pQVar3,&local_40,param_1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10017aac7;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10017aac7:
  QAction::setCheckable(SUB81(pQVar3,0));
  FUN_10018f930(lVar2);
  QAction::setChecked(SUB81(pQVar3,0));
  QVariant::QVariant(&local_50,0);
  QAction::setData(pQVar3);
  QVariant::~QVariant(&local_50);
  QObject::connect(local_58,pQVar3,"2triggered(bool)",param_1,"1onConnectAll()",0);
  QMetaObject::Connection::~Connection(local_58);
  QWidget::addAction(param_1);
  pQVar3 = operator_new(0x18);
  QMetaObject::tr((char *)&local_60,PTR_staticMetaObject_1021e1520,
                  (int)PTR_s_Disconnect_All_10226fc10);
  FUN_100132430(pQVar3,&local_60,param_1);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10017abad;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10017abad:
  QAction::setCheckable(SUB81(pQVar3,0));
  FUN_10018fb40(lVar2);
  QAction::setChecked(SUB81(pQVar3,0));
  QVariant::QVariant(&local_70,1);
  QAction::setData(pQVar3);
  QVariant::~QVariant(&local_70);
  QObject::connect(local_78,pQVar3,"2triggered(bool)",param_1,"1onDisconnectAll()",0);
  QMetaObject::Connection::~Connection(local_78);
  QWidget::addAction(param_1);
  return;
}

