
void FUN_100859ac0(QObject *param_1,int param_2,undefined4 param_3,undefined8 *param_4)

{
  if (param_2 == 10) {
    if ((*(code **)param_4[1] == FUN_100859b50) && (((long *)param_4[1])[1] == 0)) {
      *(undefined4 *)*param_4 = 0;
    }
  }
  else if (param_2 == 0) {
    switch(param_3) {
    case 0:
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_102228af0,0,(void **)0x0);
      return;
    case 1:
      FUN_100072970(param_1,*(undefined1 *)param_4[1]);
      return;
    case 2:
      FUN_100072c30();
      return;
    case 3:
      FUN_100072d60();
      return;
    }
  }
  return;
}

