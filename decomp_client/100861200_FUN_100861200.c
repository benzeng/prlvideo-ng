
void FUN_100861200(undefined8 param_1,int param_2,int param_3,undefined8 *param_4)

{
  if (param_2 == 0xc) {
    if ((param_3 == 1) && (*(int *)param_4[1] == 1)) {
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
    if (param_3 == 1) {
      FUN_10079cec0(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2],param_4[3]);
      return;
    }
    if (param_3 == 0) {
      FUN_10079cc20(param_1,param_4[1]);
      return;
    }
  }
  return;
}

