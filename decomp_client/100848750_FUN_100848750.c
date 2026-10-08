
void FUN_100848750(QObject *param_1,int param_2,undefined4 param_3,undefined8 *param_4)

{
  if (param_2 == 10) {
    if ((*(code **)param_4[1] == FUN_100848800) && (((long *)param_4[1])[1] == 0)) {
      *(undefined4 *)*param_4 = 0;
    }
  }
  else if (param_2 == 0) {
    switch(param_3) {
    case 0:
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_PTR_102223550,0,(void **)0x0);
      return;
    case 1:
      FUN_1006588c0();
      return;
    case 2:
      FUN_1006593a0();
      return;
    case 3:
      FUN_1006588a0();
      return;
    case 4:
      FUN_1006588b0();
      return;
    case 5:
      FUN_10065b830();
      return;
    case 6:
      FUN_100659840();
      return;
    }
  }
  return;
}

