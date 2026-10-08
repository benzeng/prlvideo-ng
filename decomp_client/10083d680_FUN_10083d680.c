
void FUN_10083d680(QObject *param_1,int param_2,int param_3,undefined8 *param_4)

{
  if (param_2 == 10) {
    if ((*(code **)param_4[1] == FUN_10083d6e0) && (((long *)param_4[1])[1] == 0)) {
      *(undefined4 *)*param_4 = 0;
    }
  }
  else if (param_2 == 0) {
    if (param_3 == 1) {
      FUN_100565b60();
      return;
    }
    if (param_3 == 0) {
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10221bd30,0,(void **)0x0);
      return;
    }
  }
  return;
}

