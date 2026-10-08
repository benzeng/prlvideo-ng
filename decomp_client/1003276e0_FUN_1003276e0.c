
void FUN_1003276e0(undefined8 param_1,int param_2)

{
  long lVar1;
  QImage local_58 [32];
  QImage local_38 [32];
  
  QImage::QImage(local_38);
  if (-1 < param_2) {
    QObject::sender();
    lVar1 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_102201100);
    if (lVar1 == 0) {
      FUN_100df99c0("","prl_client_app",0,
                    "(!)Error: can\'t get task object to update suspended screen");
      goto LAB_10032776b;
    }
    QImage::QImage(local_58,(QImage *)(lVar1 + 0x38));
    QImage::operator=(local_38,local_58);
    QImage::~QImage(local_58);
  }
  FUN_100326b80(param_1,local_38);
LAB_10032776b:
  QImage::~QImage(local_38);
  return;
}

