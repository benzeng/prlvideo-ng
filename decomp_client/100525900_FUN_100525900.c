
void FUN_100525900(QWidget *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  long local_30;
  
  QWidget::QWidget(param_1,param_5,0);
  *(undefined ***)param_1 = &PTR_FUN_10221a0e0;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_10221a2c8;
  *(undefined8 *)(param_1 + 0x30) = param_2;
  *(undefined8 *)(param_1 + 0x38) = param_3;
  *(undefined4 *)(param_1 + 0x40) = param_4;
  QWidget::setContentsMargins((int)param_1,5,0,5);
  QObject::connect(&local_30,param_2,"2lockedStateChanged()",param_1,"1onLockedStateChanged()",0);
  if (local_30 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_30);
  return;
}

