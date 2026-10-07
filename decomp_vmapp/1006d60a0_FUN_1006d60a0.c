
int FUN_1006d60a0(QObject *param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  
  iVar1 = QThread::qt_metacall();
  if (-1 < iVar1) {
    if (param_2 == 0xc) {
      if (iVar1 < 2) {
        *(undefined4 *)*param_4 = 0xffffffff;
      }
    }
    else {
      if (param_2 != 0) {
        return iVar1;
      }
      if (iVar1 < 2) {
        if (iVar1 == 1) {
          FUN_1006d46c0(param_1);
        }
        else if (iVar1 == 0) {
          QMetaObject::activate
                    (param_1,(QMetaObject *)&PTR_staticMetaObject_100bcd8f0,0,(void **)0x0);
        }
      }
    }
    iVar1 = iVar1 + -2;
  }
  return iVar1;
}

