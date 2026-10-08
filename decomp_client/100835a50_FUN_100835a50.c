
void FUN_100835a50(QObject *param_1,int param_2,undefined4 param_3,undefined8 *param_4)

{
  if (param_2 == 10) {
    if ((*(code **)param_4[1] == FUN_100835b30) && (((long *)param_4[1])[1] == 0)) {
      *(undefined4 *)*param_4 = 0;
    }
  }
  else if (param_2 == 0) {
    switch(param_3) {
    case 0:
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10220feb0,0,(void **)0x0);
      return;
    case 1:
      FUN_100397150();
      return;
    case 2:
      FUN_100397170();
      return;
    case 3:
      FUN_100397240();
      return;
    case 4:
      FUN_100397310();
      return;
    case 5:
      FUN_10039a390();
      return;
    case 6:
      FUN_10039a760();
      return;
    case 7:
      FUN_100399d90();
      return;
    case 8:
      FUN_10039a370();
      return;
    case 9:
      FUN_10039aa20(param_1,*(undefined4 *)param_4[1]);
      return;
    case 10:
      FUN_10039ae10();
      return;
    }
  }
  return;
}

