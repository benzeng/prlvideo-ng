
void FUN_10085bbf0(QObject *param_1,int param_2,undefined4 param_3,undefined8 *param_4)

{
  if (param_2 == 10) {
    if ((*(code **)param_4[1] == FUN_10085bca0) && (((long *)param_4[1])[1] == 0)) {
      *(undefined4 *)*param_4 = 0;
    }
  }
  else if (param_2 == 0) {
    switch(param_3) {
    case 0:
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1022298f0,0,(void **)0x0);
      return;
    case 1:
                    /* WARNING: Could not recover jumptable at 0x00010085bc5b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)param_1 + 0x70))();
      return;
    case 2:
      FUN_100769f50(param_1,param_4[1]);
      return;
    case 3:
      FUN_10076a2d0(param_1,param_4[1]);
      return;
    case 4:
      FUN_10076a310(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2]);
      return;
    }
  }
  return;
}

