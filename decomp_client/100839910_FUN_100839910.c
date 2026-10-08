
void FUN_100839910(long *param_1,int param_2,int param_3,undefined8 *param_4)

{
  if (param_2 == 0xc) {
    if ((param_3 == 5) && (*(int *)param_4[1] == 1)) {
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
                    /* WARNING: Could not recover jumptable at 0x00010083997f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1d0))();
      return;
    case 1:
                    /* WARNING: Could not recover jumptable at 0x00010083999e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1d8))();
      return;
    case 2:
      FUN_100471a60();
      return;
    case 3:
      FUN_100476ac0();
      return;
    case 4:
      FUN_100475fe0();
      return;
    case 5:
      FUN_1004765c0(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2]);
      return;
    }
  }
  return;
}

