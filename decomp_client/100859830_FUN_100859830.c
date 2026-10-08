
int FUN_100859830(QObject *param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  
  iVar1 = QMenu::qt_metacall();
  if (-1 < iVar1) {
    if (param_2 == 0xc) {
      if (iVar1 < 3) {
        *(undefined4 *)*param_4 = 0xffffffff;
      }
    }
    else {
      if (param_2 != 0) {
        return iVar1;
      }
      if (iVar1 < 3) {
        if (iVar1 == 2) {
          FUN_100759900(param_1,param_4[1]);
        }
        else if (iVar1 == 1) {
          FUN_1007599a0(param_1);
        }
        else if (iVar1 == 0) {
          QMetaObject::activate
                    (param_1,(QMetaObject *)&PTR_staticMetaObject_1022287e0,0,(void **)0x0);
        }
      }
    }
    iVar1 = iVar1 + -3;
  }
  return iVar1;
}

