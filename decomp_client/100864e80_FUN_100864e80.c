
void FUN_100864e80(QObject *param_1,int param_2,undefined4 param_3,undefined8 *param_4)

{
  if (param_2 == 10) {
    if ((*(code **)param_4[1] == FUN_100864f60) && (((long *)param_4[1])[1] == 0)) {
      *(undefined4 *)*param_4 = 0;
    }
  }
  else if (param_2 == 0) {
    switch(param_3) {
    case 0:
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10222e4b0,0,(void **)0x0);
      return;
    case 1:
      FUN_100030ed0(param_1,param_4[1],*(undefined1 *)param_4[2],*(undefined4 *)param_4[3]);
      return;
    case 2:
      FUN_10002d220(param_1,param_4[1]);
      return;
    case 3:
      FUN_10002d640(param_1,param_4[1]);
      return;
    case 4:
      FUN_10002da60();
      return;
    case 5:
      FUN_1000313f0(param_1,*(undefined8 *)param_4[1],*(undefined8 *)param_4[2]);
      return;
    case 6:
      FUN_100031290();
      return;
    case 7:
      FUN_1000317d0();
      return;
    }
  }
  return;
}

