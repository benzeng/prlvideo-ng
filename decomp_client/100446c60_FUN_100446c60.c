
void FUN_100446c60(QSize *param_1)

{
  char cVar1;
  QString *pQVar2;
  long local_40;
  long local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  pQVar2 = (QString *)QDialogButtonBox::button(*(undefined8 *)((long)param_1[0xc] + 0x98),0x400);
  QMetaObject::tr((char *)&local_30,(char *)&PTR_staticMetaObject_102212bd0,0x1df4c67);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100446ce5;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100446ce5:
  QObject::connect(&local_38,*(undefined8 *)((long)param_1[0xc] + 0x98),"2accepted()",param_1,
                   "1accept()",0);
  if (local_38 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    QObject::connect(&local_40,*(undefined8 *)((long)param_1[0xc] + 0x98),"2rejected()",param_1,
                     "1reject()",0);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    QObject::connect(&local_40,*(undefined8 *)((long)param_1[0xc] + 0x98),"2rejected()",param_1,
                     "1reject()",0);
    if ((cVar1 != '\0') && (local_40 != 0)) {
      QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_40);
  FUN_1004470d0(param_1);
  (**(code **)((long)*param_1 + 0x70))(param_1);
  QWidget::setFixedSize(param_1);
  return;
}

