
void FUN_100095920(QDialog *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  char cVar2;
  void *pvVar3;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  long local_30;
  long local_28;
  long local_20;
  
  QDialog::QDialog(param_1,param_3,param_4);
  *(undefined ***)param_1 = &PTR_FUN_1021f8000;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_1021f81d8;
  pvVar3 = operator_new(0xa8);
  *(void **)(param_1 + 0x30) = pvVar3;
  *(undefined8 *)(param_1 + 0x38) = param_2;
  param_1[0x40] = (QDialog)0x0;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  FUN_100097590(pvVar3,param_1);
  QObject::connect(&local_20,*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x10),"2clicked()",param_1,
                   "1buttonPressed()",0);
  if (local_20 == 0) {
    cVar2 = '\0';
  }
  else {
    cVar2 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_20);
  QObject::connect(&local_28,*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x40),"2clicked()",param_1,
                   "1buttonPressed()",0);
  if (cVar2 == '\0') {
    cVar2 = '\0';
  }
  else if (local_28 == 0) {
    cVar2 = '\0';
  }
  else {
    cVar2 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_28);
  QObject::connect(&local_30,*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x48),"2clicked()",param_1,
                   "1buttonPressed()",0);
  if (cVar2 == '\0') {
    cVar2 = '\0';
  }
  else if (local_30 == 0) {
    cVar2 = '\0';
  }
  else {
    cVar2 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_30);
  QObject::connect(&local_38,*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x38),"2clicked()",param_1,
                   "1buttonPressed()",0);
  if (cVar2 == '\0') {
    cVar2 = '\0';
  }
  else if (local_38 == 0) {
    cVar2 = '\0';
  }
  else {
    cVar2 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_38);
  QObject::connect(&local_40,*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x78),"2clicked()",param_1,
                   "1buttonPressed()",0);
  if (cVar2 == '\0') {
    cVar2 = '\0';
  }
  else if (local_40 == 0) {
    cVar2 = '\0';
  }
  else {
    cVar2 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_40);
  QObject::connect(&local_48,*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x68),"2clicked()",param_1,
                   "1buttonPressed()",0);
  if (cVar2 == '\0') {
    cVar2 = '\0';
  }
  else if (local_48 == 0) {
    cVar2 = '\0';
  }
  else {
    cVar2 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_48);
  QObject::connect(&local_50,*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x90),"2clicked()",param_1,
                   "1buttonPressed()",0);
  if ((cVar2 != '\0') && (local_50 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_50);
  lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x30) + 0x20) + 0x28);
  *(int *)(param_1 + 0x890) = (*(int *)(lVar1 + 0x1c) + 1) - *(int *)(lVar1 + 0x14);
  QWidget::show();
  return;
}

