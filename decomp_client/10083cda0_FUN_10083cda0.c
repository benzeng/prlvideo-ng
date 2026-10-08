
void FUN_10083cda0(long *param_1,int param_2,int param_3,undefined8 *param_4)

{
  if (param_2 == 0xc) {
    if ((param_3 == 3) && (*(int *)param_4[1] == 1)) {
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
                    /* WARNING: Could not recover jumptable at 0x00010083ce0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1d0))();
      return;
    case 1:
      FUN_10053e6c0();
      return;
    case 2:
      FUN_10053f9b0();
      return;
    case 3:
      FUN_10053f180(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2]);
      return;
    case 4:
      FUN_10053f1a0(param_1,*(undefined4 *)param_4[1]);
      return;
    case 5:
      FUN_10053dd40();
      return;
    case 6:
      FUN_10053fb90(param_1,*(undefined4 *)param_4[1]);
      return;
    }
  }
  return;
}

