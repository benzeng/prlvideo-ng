
void FUN_1007827e0(QSize *param_1)

{
  char cVar1;
  QSize *pQVar2;
  QCheckBox *this;
  CImageButtonComplex *this_00;
  Connection local_70 [8];
  QString local_68;
  Connection local_60 [8];
  QString local_58;
  long local_50;
  long local_48;
  QUrl local_40 [8];
  QArrayData *local_38;
  undefined1 local_29;
  
  FUN_1001c72e0(&local_38);
  QWidget::setWindowTitle((QString *)param_1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100782839;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100782839:
  QDialog::setModal(SUB81(param_1,0));
  pQVar2 = operator_new(0x38);
  CAbstractWebView::CAbstractWebView((CAbstractWebView *)pQVar2,param_1,0,0);
  if ((param_1[0x10].field0_0x0 != 0) || (param_1[0x10].field1_0x4 != 0)) {
    QWidget::setFixedSize(pQVar2);
  }
  QUrl::QUrl(local_40,param_1 + 0xe,0);
  CAbstractWebView::load((QUrl *)pQVar2);
  QUrl::~QUrl(local_40);
  FUN_1003812a0(param_1,pQVar2);
  QObject::connect(&local_48,pQVar2,"2loadFinished(bool)",param_1,"2pageLoaded(bool)",0);
  if (local_48 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_48);
    QObject::connect(&local_50,pQVar2,"2linkClicked(const QUrl&)",param_1,
                     "1onLinkClicked(const QUrl&)",0);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_48);
    QObject::connect(&local_50,pQVar2,"2linkClicked(const QUrl&)",param_1,
                     "1onLinkClicked(const QUrl&)",0);
    if ((cVar1 != '\0') && (local_50 != 0)) {
      QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_50);
  this = operator_new(0x30);
  QMetaObject::tr((char *)&local_58,PTR_staticMetaObject_1021e1520,0x1e166d3);
  QCheckBox::QCheckBox(this,&local_58,(QWidget *)param_1);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_29 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007829d7;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_1007829d7:
  QWidget::setFocusPolicy(this,0);
  QObject::connect(local_60,this,"2toggled(bool)",param_1,"1onDoNotShowClicked(bool)",0);
  QMetaObject::Connection::~Connection(local_60);
  this_00 = operator_new(0x78);
  QMetaObject::tr((char *)&local_68,PTR_staticMetaObject_1021e1520,0x1db9681);
  CImageButtonComplex::CImageButtonComplex(this_00,&local_68,(QWidget *)param_1);
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_29 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100782a77;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_100782a77:
  QObject::connect(local_70,this_00,"2clicked()",param_1,"1close()",0);
  QMetaObject::Connection::~Connection(local_70);
  FUN_100381310(param_1,this,0xffffffff);
  FUN_100381330(param_1,1,0xffffffff);
  FUN_100381310(param_1,this_00,0xffffffff);
  (**(code **)((long)*param_1 + 0x70))(param_1);
  QWidget::setFixedSize(param_1);
  return;
}

