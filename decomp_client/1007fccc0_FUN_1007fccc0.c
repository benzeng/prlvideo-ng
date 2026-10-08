
void FUN_1007fccc0(QObject *param_1,int param_2,undefined4 param_3,undefined8 *param_4)

{
  if (param_2 == 10) {
    if ((*(code **)param_4[1] == FUN_1007fcd60) && (((long *)param_4[1])[1] == 0)) {
      *(undefined4 *)*param_4 = 0;
    }
  }
  else if (param_2 == 0) {
    switch(param_3) {
    case 0:
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1021fbf20,0,(void **)0x0);
      return;
    case 1:
      FUN_1001440f0(param_1,*(undefined4 *)param_4[1]);
      return;
    case 2:
                    /* WARNING: Could not recover jumptable at 0x0001007fcd44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)param_1 + 0x1b0))(param_1,*(undefined4 *)param_4[1]);
      return;
    case 3:
      FUN_100144130(param_1,param_4[1]);
      return;
    }
  }
  return;
}

