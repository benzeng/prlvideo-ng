
void FUN_10006e840(QObject *param_1,int param_2)

{
  char cVar1;
  long lVar2;
  QTimeLine *this;
  long local_80;
  long local_78;
  long local_70;
  QVariant local_68;
  QVariant local_58;
  QVariant local_48;
  QArrayData *local_38;
  undefined1 local_29;
  
  local_38 = (QArrayData *)PTR_shared_null_1021e1288;
  lVar2 = qt_qFindChild_helper(param_1,&local_38,PTR_staticMetaObject_1021e1600,1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10006e8a8;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10006e8a8:
  if (lVar2 != 0) {
    return;
  }
  FUN_10006c960(param_1,param_2,1);
  this = operator_new(0x10);
  QTimeLine::QTimeLine(this,0x1a4,param_1);
  lVar2 = FUN_100524a60(*(undefined8 *)(param_1 + 0x28),param_2);
  QVariant::QVariant(&local_48,*(int *)(lVar2 + 0x14));
  QObject::setProperty((char *)this,(QVariant *)"ItemId");
  QVariant::~QVariant(&local_48);
  lVar2 = FUN_100524a60(*(undefined8 *)(param_1 + 0x28),param_2);
  QVariant::QVariant(&local_58,*(int *)(lVar2 + 0x10));
  QObject::setProperty((char *)this,(QVariant *)"ItemType");
  QVariant::~QVariant(&local_58);
  QVariant::QVariant(&local_68,param_2);
  QObject::setProperty((char *)this,(QVariant *)"ItemIndex");
  QVariant::~QVariant(&local_68);
  QTimeLine::setCurveShape(this,3);
  QTimeLine::setFrameRange((int)this,1);
  QObject::connect(&local_70,this,"2frameChanged(int)",param_1,"1onBlinkFrameChanged(int)",0);
  if (local_70 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_70);
    QObject::connect((Connection *)&local_78,this,"2finished()",param_1,"1onBlinkFinished()",0);
    QMetaObject::Connection::~Connection((Connection *)&local_78);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_70);
    QObject::connect(&local_78,this,"2finished()",param_1,"1onBlinkFinished()",0);
    if ((cVar1 != '\0') && (local_78 != 0)) {
      cVar1 = QMetaObject::Connection::isConnected_helper();
      QMetaObject::Connection::~Connection((Connection *)&local_78);
      QObject::connect(&local_80,this,"2finished()",this,"1deleteLater()",0);
      if ((cVar1 != '\0') && (local_80 != 0)) {
        QMetaObject::Connection::isConnected_helper();
      }
      goto LAB_10006eadb;
    }
    QMetaObject::Connection::~Connection((Connection *)&local_78);
  }
  QObject::connect(&local_80,this,"2finished()",this,"1deleteLater()",0);
LAB_10006eadb:
  QMetaObject::Connection::~Connection((Connection *)&local_80);
  QTimeLine::start();
  return;
}

