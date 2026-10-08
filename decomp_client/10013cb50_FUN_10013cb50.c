
void FUN_10013cb50(QComboBox *param_1,QWidget *param_2)

{
  long local_20;
  
  QComboBox::QComboBox(param_1,param_2);
  *(undefined ***)param_1 = &PTR_FUN_1021fb2f0;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_1021fb4b0;
  *(undefined **)(param_1 + 0x30) = PTR_shared_null_1021e15e8;
  *(undefined4 *)(param_1 + 0x40) = 0x80000000;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  param_1[0x50] = (QComboBox)0x1;
  QObject::connect(&local_20,param_1,"2currentIndexChanged(int)",param_1,"1setCurrentByIndex(int)",0
                  );
  if (local_20 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_20);
  return;
}

