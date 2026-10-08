
void FUN_100833720(QObject *param_1,int param_2,int param_3,undefined8 *param_4)

{
  if (param_2 == 0xc) {
    if ((param_3 == 6) && (*(int *)param_4[1] == 1)) {
      if (DAT_10226db58 == 0) {
        DAT_10226db58 = FUN_100087320("Messaging::ButtonID",0xffffffffffffffff,1);
      }
      *(int *)*param_4 = DAT_10226db58;
    }
    else {
      *(undefined4 *)*param_4 = 0xffffffff;
    }
  }
  else if (param_2 == 10) {
    if ((*(code **)param_4[1] == FUN_100833870) && (((long *)param_4[1])[1] == 0)) {
      *(undefined4 *)*param_4 = 0;
    }
  }
  else if (param_2 == 0) {
    switch(param_3) {
    case 0:
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10220e340,0,(void **)0x0);
      return;
    case 1:
                    /* WARNING: Could not recover jumptable at 0x0001008337f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)param_1 + 0x60))();
      return;
    case 2:
                    /* WARNING: Could not recover jumptable at 0x0001008337fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)param_1 + 0x68))();
      return;
    case 3:
      FUN_10036fa80();
      return;
    case 4:
      FUN_10036fb10(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2]);
      return;
    case 5:
      FUN_10036fc40();
      return;
    case 6:
      FUN_10036f940(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2],param_4[3]);
      return;
    }
  }
  return;
}

