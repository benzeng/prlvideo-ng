
void FUN_1009b7880(QFont *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  QString *pQVar1;
  char cVar2;
  long local_70;
  long local_68;
  long local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QFont local_48 [23];
  undefined1 local_31;
  
  QDialog::QDialog((QDialog *)param_1,param_4,0);
  *(undefined ***)param_1 = &PTR_FUN_102235c10;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_102235de8;
  FUN_1009b83c0(param_1 + 0x30,param_1);
  FontUtils::getNormalFont(SUB81(local_48,0));
  QWidget::setFont(param_1);
  QFont::~QFont(local_48);
  QWidget::setWindowTitle((QString *)param_1);
  pQVar1 = *(QString **)(param_1 + 0x38);
  QLabel::text();
  QString::arg(&local_50,&local_58,param_3,0,0x20);
  QLabel::setText(pQVar1);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009b795b;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1009b795b:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009b798b;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1009b798b:
  QWidget::setWindowFlags(param_1,5);
  if (param_4 != 0) {
    QWidget::setWindowModality(param_1,1);
  }
  (**(code **)(*(long *)param_1 + 0x70))(param_1);
  QWidget::setFixedWidth((int)param_1);
  (**(code **)(*(long *)param_1 + 0x70))(param_1);
  QWidget::setFixedHeight((int)param_1);
  QObject::connect(&local_60,*(undefined8 *)(param_1 + 0x68),"2textEdited(const QString&)",param_1,
                   "1OnUsernameChanged(const QString&)",0);
  if (local_60 == 0) {
    cVar2 = '\0';
  }
  else {
    cVar2 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_60);
  QObject::connect(&local_68,*(undefined8 *)(param_1 + 0x90),"2accepted()",param_1,"1accept()",0);
  if (cVar2 == '\0') {
    cVar2 = '\0';
  }
  else if (local_68 == 0) {
    cVar2 = '\0';
  }
  else {
    cVar2 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_68);
  QObject::connect(&local_70,*(undefined8 *)(param_1 + 0x90),"2rejected()",param_1,"1reject()",0);
  if ((cVar2 != '\0') && (local_70 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_70);
  return;
}

