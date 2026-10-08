
void FUN_10083e310(QObject *param_1,int param_2,int param_3,undefined8 *param_4)

{
  if (param_2 == 0xc) {
    if ((param_3 == 2) && (*(int *)param_4[1] == 0)) {
      if (DAT_102273e78 == 0) {
        DAT_102273e78 = FUN_1003df970("Mappings::Values",0xffffffffffffffff,1);
      }
      *(int *)*param_4 = DAT_102273e78;
    }
    else {
      *(undefined4 *)*param_4 = 0xffffffff;
    }
  }
  else if (param_2 == 10) {
    if ((*(code **)param_4[1] == FUN_10083e480) && (((long *)param_4[1])[1] == 0)) {
      *(undefined4 *)*param_4 = 0;
    }
  }
  else if (param_2 == 0) {
    switch(param_3) {
    case 0:
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10221d5d0,0,(void **)0x0);
      return;
    case 1:
                    /* WARNING: Could not recover jumptable at 0x00010083e3f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)param_1 + 0x70))(param_1,param_4[1],param_4[2],param_4[3]);
      return;
    case 2:
                    /* WARNING: Could not recover jumptable at 0x00010083e405. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)param_1 + 0x78))(param_1,param_4[1]);
      return;
    case 3:
      FUN_1005a5aa0(param_1,*(undefined4 *)param_4[1]);
      return;
    case 4:
      FUN_1005a6470(param_1,*(undefined4 *)param_4[1]);
      return;
    case 5:
      FUN_1005a6770(param_1,*(undefined4 *)param_4[1]);
      return;
    case 6:
      FUN_1005a5d50();
      return;
    case 7:
      FUN_1005a5e40();
      return;
    case 8:
      FUN_1005a67a0();
      return;
    }
  }
  return;
}

