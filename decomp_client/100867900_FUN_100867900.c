
int FUN_100867900(QObject *param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = QObject::qt_metacall();
  if (iVar1 < 0) {
    return iVar1;
  }
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
        iVar2 = 1;
      }
      else {
        if (iVar1 != 0) goto LAB_100867968;
        iVar2 = 0;
      }
      QMetaObject::activate
                (param_1,(QMetaObject *)&PTR_staticMetaObject_10222fe70,iVar2,(void **)0x0);
    }
  }
LAB_100867968:
  return iVar1 + -2;
}

