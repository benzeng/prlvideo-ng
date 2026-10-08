
void FUN_10083c9d0(long *param_1,int param_2,int param_3,undefined8 *param_4)

{
  if (param_2 == 0xc) {
    if ((param_3 == 9) && (*(int *)param_4[1] == 1)) {
      if (DAT_10226db58 == 0) {
        DAT_10226db58 = FUN_100087320("Messaging::ButtonID",0xffffffffffffffff,1);
      }
      *(int *)*param_4 = DAT_10226db58;
    }
    else {
      *(undefined4 *)*param_4 = 0xffffffff;
    }
  }
  else if (param_2 == 0) {
    switch(param_3) {
    case 0:
                    /* WARNING: Could not recover jumptable at 0x00010083ca3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1c0))();
      return;
    case 1:
      FUN_1005379f0();
      return;
    case 2:
      FUN_100537fd0();
      return;
    case 3:
      FUN_100538090();
      return;
    case 4:
      FUN_1005375f0();
      return;
    case 5:
      FUN_100537710();
      return;
    case 6:
      FUN_100537750();
      return;
    case 7:
      FUN_1005380e0();
      return;
    case 8:
      FUN_100538180(param_1,param_4[1],param_4[2],param_4[3]);
      return;
    case 9:
      FUN_100538740(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2],param_4[3]);
      return;
    case 10:
                    /* WARNING: Could not recover jumptable at 0x00010083cadd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1d0))();
      return;
    }
  }
  return;
}

