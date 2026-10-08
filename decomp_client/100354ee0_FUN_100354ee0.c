
void FUN_100354ee0(long param_1,int param_2)

{
  undefined8 uVar1;
  QImage local_38 [32];
  
  *(undefined1 *)(param_1 + 0x9d) = 0;
  if (-1 < param_2) {
    QObject::sender();
    uVar1 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_102206c80);
    FUN_100293130(local_38,uVar1);
    FUN_100354140(param_1,local_38);
    QImage::~QImage(local_38);
  }
  return;
}

