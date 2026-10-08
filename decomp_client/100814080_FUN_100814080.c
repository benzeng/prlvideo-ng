
void FUN_100814080(long *param_1,int param_2,int param_3,undefined8 *param_4)

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
      FUN_100234c30();
      return;
    case 1:
      FUN_100234db0();
      return;
    case 2:
      FUN_100234fb0(param_1,*(undefined4 *)param_4[1]);
      return;
    case 3:
                    /* WARNING: Could not recover jumptable at 0x000100814134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x110))(param_1,*(undefined1 *)param_4[1]);
      return;
    case 4:
      FUN_100234bb0(param_1,*(undefined4 *)param_4[1]);
      return;
    case 5:
      FUN_100234a60(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2]);
      return;
    case 6:
      FUN_100235690(param_1,param_4[1]);
      return;
    }
  }
  return;
}

