
void FUN_100132560(QComboBox *param_1,QWidget *param_2)

{
  char cVar1;
  undefined8 uVar2;
  Connection local_38 [8];
  Connection local_30 [16];
  
  QComboBox::QComboBox(param_1,param_2);
  *(undefined ***)param_1 = &PTR_FUN_1021f98f0;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_1021f9ab0;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  param_1[0x34] = (QComboBox)0x0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  QObject::blockSignals(SUB81(param_1,0));
  param_1[0x34] = (QComboBox)0x0;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  QComboBox::setCurrentIndex((int)param_1);
  param_1[0x34] = (QComboBox)0x0;
  QObject::blockSignals(SUB81(param_1,0));
  QObject::connect(local_30,param_1,"2currentIndexChanged(int)",param_1,
                   "1handleCurrentIndexChanging(int)",0);
  QMetaObject::Connection::~Connection(local_30);
  cVar1 = QComboBox::isEditable();
  if (cVar1 != '\0') {
    uVar2 = QComboBox::lineEdit();
    QObject::connect(local_38,uVar2,"2editingFinished()",param_1,"1handleTextChanging()",0);
    QMetaObject::Connection::~Connection(local_38);
  }
  return;
}

