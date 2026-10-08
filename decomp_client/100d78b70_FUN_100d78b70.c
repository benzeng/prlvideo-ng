
int FUN_100d78b70(QObject *param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  
  iVar1 = QObject::qt_metacall();
  if (-1 < iVar1) {
    if (param_2 == 0xc) {
      if (iVar1 < 1) {
        *(undefined4 *)*param_4 = 0xffffffff;
      }
    }
    else {
      if (param_2 != 0) {
        return iVar1;
      }
      if (iVar1 < 1) {
        QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10225bbe0,0,(void **)0x0)
        ;
      }
    }
    iVar1 = iVar1 + -1;
  }
  return iVar1;
}

