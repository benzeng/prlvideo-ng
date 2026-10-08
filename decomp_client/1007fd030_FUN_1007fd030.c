
int FUN_1007fd030(QObject *param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  
  iVar1 = CBaseDialog::qt_metacall();
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
        QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1021fbf80,0,(void **)0x0)
        ;
      }
    }
    iVar1 = iVar1 + -1;
  }
  return iVar1;
}

