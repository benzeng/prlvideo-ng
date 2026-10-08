
void FUN_100859740(QObject *param_1,int param_2,int param_3,undefined8 *param_4)

{
  if (param_2 == 10) {
    if ((*(code **)param_4[1] == FUN_1008597b0) && (((long *)param_4[1])[1] == 0)) {
      *(undefined4 *)*param_4 = 0;
    }
  }
  else if (param_2 == 0) {
    if (param_3 == 2) {
      FUN_100759900(param_1,param_4[1]);
      return;
    }
    if (param_3 == 1) {
      FUN_1007599a0();
      return;
    }
    if (param_3 == 0) {
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1022287e0,0,(void **)0x0);
      return;
    }
  }
  return;
}

