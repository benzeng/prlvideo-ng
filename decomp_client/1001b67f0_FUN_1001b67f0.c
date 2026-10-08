
void FUN_1001b67f0(QObject *param_1,QObject *param_2)

{
  char cVar1;
  QTimer *this;
  undefined8 uVar2;
  long local_80;
  long local_78;
  QArrayData *local_70;
  QDateTime local_68;
  QString local_60;
  QVariant local_58;
  Data_conflict local_48;
  QArrayData *local_40;
  QString local_38 [2];
  undefined1 local_21;
  
  QObject::QObject(param_1,param_2);
  *(undefined ***)param_1 = &PTR_FUN_1021feaf0;
  this = operator_new(0x20);
  QTimer::QTimer(this,param_1);
  *(QTimer **)(param_1 + 0x10) = this;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  QSettings::QSettings((QSettings *)local_38,(QObject *)0x0);
  local_40 = (QArrayData *)QString::fromAscii_helper("Antivirus/FirstStartApp",0x17);
  cVar1 = QSettings::contains(local_38);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001b689e;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1001b689e:
  if (cVar1 != '\0') goto LAB_1001b69aa;
  local_48.field7 = QString::fromAscii_helper("Antivirus/FirstStartApp",0x17);
  QDateTime::currentDateTime();
  local_70 = (QArrayData *)QString::fromAscii_helper("yyyy-MM-dd hh:mm:ss",0x13);
  QDateTime::toString(&local_60);
  QVariant::QVariant(&local_58,&local_60);
  QSettings::setValue(local_38,(QVariant *)&local_48);
  QVariant::~QVariant(&local_58);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_21 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001b6941;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_1001b6941:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_21 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001b6971;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1001b6971:
  QDateTime::~QDateTime(&local_68);
  if (*(int *)local_48.field15 != -1) {
    if (*(int *)local_48.field15 != 0) {
      LOCK();
      *(int *)local_48.field15 = *(int *)local_48.field15 + -1;
      local_21 = *(int *)local_48.field15 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001b69aa;
    }
    QArrayData::deallocate((QArrayData *)local_48.field15,2,8);
  }
LAB_1001b69aa:
  QObject::connect(&local_78,*(undefined8 *)(param_1 + 0x10),"2timeout()",param_1,"1showPromo()",0);
  if (local_78 == 0) {
    cVar1 = '\0';
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_78);
  uVar2 = FUN_100152280();
  QObject::connect(&local_80,uVar2,"2afterServerAdded(CServerWrap&)",param_1,
                   "1onServerAdded(CServerWrap&)",0);
  if ((cVar1 != '\0') && (local_80 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_80);
  QTimer::singleShot(60000,param_1,"1showPromo()");
  QSettings::~QSettings((QSettings *)local_38);
  return;
}

