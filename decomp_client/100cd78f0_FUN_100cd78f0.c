
void FUN_100cd78f0(QObject *param_1,QObject *param_2)

{
  QTimer *this;
  undefined8 uVar1;
  long local_88;
  QVariant local_80;
  QArrayData *local_70;
  QVariant local_68;
  QVariant local_58;
  QArrayData *local_48;
  QString local_40;
  undefined1 local_32;
  undefined1 local_31;
  
  uVar1 = 0;
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_10225a230;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (param_2 != (QObject *)0x0) {
    uVar1 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  }
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(QObject **)(param_1 + 0x20) = param_2;
  this = (QTimer *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  QTimer::QTimer(this,(QObject *)0x0);
  *(undefined8 *)(param_1 + 0x58) = 0;
  local_48 = (QArrayData *)PTR_shared_null_1021e1288;
  *(undefined **)(param_1 + 0x60) = PTR_shared_null_1021e1288;
  FUN_100cd7c70(&local_40,&local_48,&local_32);
  QString::operator=((QString *)(param_1 + 0x60),&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100cd79c6;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_100cd79c6:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100cd79f6;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100cd79f6:
  uVar1 = _CFNotificationCenterGetDistributedCenter();
  _CFNotificationCenterAddObserver
            (uVar1,param_1,FUN_100cd7ed0,
             *(undefined8 *)PTR__kTISNotifySelectedKeyboardInputSourceChanged_1021e1bc0,0,4);
  QSettings::QSettings((QSettings *)&local_68,(QObject *)0x0);
  local_70 = (QArrayData *)QString::fromAscii_helper("HID Host Hook/SwitchInputSource Timeout",0x27)
  ;
  QVariant::QVariant(&local_80,0xfa);
  QSettings::value((QString *)&local_58,&local_68);
  QVariant::toInt((bool *)&local_58);
  QTimer::setInterval((int)this);
  QVariant::~QVariant(&local_58);
  QVariant::~QVariant(&local_80);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100cd7aba;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100cd7aba:
  QSettings::~QSettings((QSettings *)&local_68);
  param_1[0x54] = (QObject)((byte)param_1[0x54] | 1);
  QObject::connect(&local_88,this,"2timeout()",param_1,"1onSwitchInputSourceTimeout()",0);
  if (local_88 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_88);
  return;
}

