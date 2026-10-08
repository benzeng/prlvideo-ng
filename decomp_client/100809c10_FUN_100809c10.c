
void FUN_100809c10(QObject *param_1,int param_2,undefined4 param_3,undefined8 *param_4)

{
  if (param_2 == 10) {
    if ((*(code **)param_4[1] == FUN_100809ce0) && (((long *)param_4[1])[1] == 0)) {
      *(undefined4 *)*param_4 = 0;
    }
  }
  else if (param_2 == 0) {
    switch(param_3) {
    case 0:
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1021ff4a0,0,(void **)0x0);
      return;
    case 1:
      FUN_1001d2740(param_1,*(undefined4 *)param_4[1]);
      return;
    case 2:
      FUN_1001d3130();
      return;
    case 3:
      FUN_1001d31a0();
      return;
    case 4:
      FUN_1001d3210(param_1,param_4[1],*(undefined4 *)param_4[2],*(undefined4 *)param_4[3]);
      return;
    case 5:
      FUN_1001d3280();
      return;
    case 6:
      FUN_1001d32f0(param_1,param_4[1]);
      return;
    case 7:
      FUN_1001d3400();
      return;
    }
  }
  return;
}

