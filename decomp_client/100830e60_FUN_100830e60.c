
void FUN_100830e60(QObject *param_1,int param_2,int param_3,undefined8 *param_4)

{
  if (param_2 != 0xc) {
    if (param_2 == 10) {
      if ((*(code **)param_4[1] == FUN_100830fb0) && (((long *)param_4[1])[1] == 0)) {
        *(undefined4 *)*param_4 = 0;
      }
    }
    else if (param_2 == 0) {
      switch(param_3) {
      case 0:
        QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10220d4a0,0,(void **)0x0)
        ;
        return;
      case 1:
        FUN_100350910(param_1,*(undefined4 *)param_4[1]);
        return;
      case 2:
        FUN_100350920(param_1,*(undefined4 *)param_4[1]);
        return;
      case 3:
        FUN_100351210();
        return;
      case 4:
        FUN_100351220();
        return;
      case 5:
        FUN_100351240(param_1,*(undefined4 *)param_4[1]);
        return;
      case 6:
        FUN_1003519d0(param_1,*(undefined4 *)param_4[1]);
        return;
      case 7:
        FUN_100350220(param_1,param_4[1],param_4[2]);
        return;
      case 8:
        FUN_100351b30(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2]);
        return;
      case 9:
        FUN_100350200(param_1,*(undefined4 *)param_4[1]);
        return;
      }
    }
    return;
  }
  if (param_3 == 5) {
    if (*(int *)param_4[1] == 0) {
      *(undefined4 *)*param_4 = 2;
      return;
    }
    *(undefined4 *)*param_4 = 0xffffffff;
    return;
  }
  if (param_3 != 6) {
    *(undefined4 *)*param_4 = 0xffffffff;
    return;
  }
  if (*(int *)param_4[1] == 0) {
    *(undefined4 *)*param_4 = 2;
    return;
  }
  *(undefined4 *)*param_4 = 0xffffffff;
  return;
}

