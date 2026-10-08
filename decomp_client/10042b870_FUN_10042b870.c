
void FUN_10042b870(long param_1)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  long local_30;
  
  QObject::connect(&local_30,*(undefined8 *)(param_1 + 0xe0),"2clicked(QAbstractButton*)",param_1,
                   "1onButtonClicked(QAbstractButton*)",0);
  if (local_30 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_30);
    QObject::connect((Connection *)&local_38,*(undefined8 *)(param_1 + 0x50),"2valueChanged(double)"
                     ,param_1,"1onSpinBoxValueChanged(double)",0);
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    uVar3 = *(undefined8 *)(param_1 + 0x60);
LAB_10042bab3:
    QObject::connect((Connection *)&local_40,uVar3,"2memoryValueChanged(int)",param_1,
                     "1onSliderValueChanged(int)",0);
    QMetaObject::Connection::~Connection((Connection *)&local_40);
    uVar3 = *(undefined8 *)(param_1 + 0x70);
LAB_10042badf:
    QObject::connect((Connection *)&local_48,uVar3,"2clicked(bool)",param_1,
                     "1onResizeTypeCheckBoxClicked(bool)",0);
    QMetaObject::Connection::~Connection((Connection *)&local_48);
    uVar3 = *(undefined8 *)(param_1 + 0x78);
LAB_10042bb07:
    QObject::connect((Connection *)&local_50,uVar3,"2clicked(bool)",param_1,
                     "1onExpandingCheckBoxClicked(bool)",0);
    QMetaObject::Connection::~Connection((Connection *)&local_50);
    uVar3 = *(undefined8 *)(param_1 + 0x80);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_30);
    QObject::connect(&local_38,*(undefined8 *)(param_1 + 0x50),"2valueChanged(double)",param_1,
                     "1onSpinBoxValueChanged(double)",0);
    if ((cVar1 == '\0') || (local_38 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_38);
      uVar3 = *(undefined8 *)(param_1 + 0x60);
      goto LAB_10042bab3;
    }
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    QObject::connect(&local_40,*(undefined8 *)(param_1 + 0x60),"2memoryValueChanged(int)",param_1,
                     "1onSliderValueChanged(int)",0);
    if ((cVar1 == '\0') || (local_40 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_40);
      uVar3 = *(undefined8 *)(param_1 + 0x70);
      goto LAB_10042badf;
    }
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_40);
    QObject::connect(&local_48,*(undefined8 *)(param_1 + 0x70),"2clicked(bool)",param_1,
                     "1onResizeTypeCheckBoxClicked(bool)",0);
    if ((cVar1 == '\0') || (local_48 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_48);
      uVar3 = *(undefined8 *)(param_1 + 0x78);
      goto LAB_10042bb07;
    }
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_48);
    QObject::connect(&local_50,*(undefined8 *)(param_1 + 0x78),"2clicked(bool)",param_1,
                     "1onExpandingCheckBoxClicked(bool)",0);
    if ((cVar1 != '\0') && (local_50 != 0)) {
      cVar2 = QMetaObject::Connection::isConnected_helper();
      QMetaObject::Connection::~Connection((Connection *)&local_50);
      cVar1 = '\0';
      QObject::connect(&local_58,*(undefined8 *)(param_1 + 0x80),"2clicked(bool)",param_1,
                       "1onSplitCheckBoxClicked(bool)",0);
      if (cVar2 != '\0') {
        if (local_58 == 0) {
          cVar1 = '\0';
        }
        else {
          cVar1 = QMetaObject::Connection::isConnected_helper();
        }
      }
      goto LAB_10042bb40;
    }
    QMetaObject::Connection::~Connection((Connection *)&local_50);
    uVar3 = *(undefined8 *)(param_1 + 0x80);
  }
  cVar1 = '\0';
  QObject::connect(&local_58,uVar3,"2clicked(bool)",param_1,"1onSplitCheckBoxClicked(bool)",0);
LAB_10042bb40:
  QMetaObject::Connection::~Connection((Connection *)&local_58);
  uVar3 = 0;
  if ((*(long *)(param_1 + 0xe8) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0xe8) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0xf0);
  }
  cVar2 = '\0';
  QObject::connect(&local_60,uVar3,"2hddResizeProgressChanged(int)",*(undefined8 *)(param_1 + 0xd0),
                   "1setValue(int)",0);
  if (cVar1 != '\0') {
    if (local_60 == 0) {
      cVar2 = '\0';
    }
    else {
      cVar2 = QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_60);
  uVar3 = 0;
  if ((*(long *)(param_1 + 0xe8) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0xe8) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0xf0);
  }
  cVar1 = '\0';
  QObject::connect(&local_68,uVar3,"2hddConvertProgressChanged(int)",*(undefined8 *)(param_1 + 0xd0)
                   ,"1setValue(int)",0);
  if (cVar2 != '\0') {
    if (local_68 == 0) {
      cVar1 = '\0';
    }
    else {
      cVar1 = QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_68);
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x128) != 0) &&
     (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x128) + 4) != 0)) {
    uVar3 = *(undefined8 *)(param_1 + 0x130);
  }
  QObject::connect(&local_70,uVar3,"2taskFinished(PRL_RESULT)",param_1,"1setupDiskInfo()",0);
  if ((cVar1 != '\0') && (local_70 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_70);
  return;
}

