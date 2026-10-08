
void FUN_10077d990(undefined8 param_1,undefined8 param_2,int param_3,undefined8 *param_4)

{
  if ((int)param_2 != 0xc) {
    if ((int)param_2 != 0) {
      return;
    }
    if (param_3 != 0) {
      return;
    }
    FUN_10077b2f0(param_1,param_2,*(undefined4 *)param_4[2]);
    return;
  }
  if (param_3 == 0) {
    if (*(int *)param_4[1] == 0) {
      *(undefined4 *)*param_4 = 2;
      return;
    }
    if (*(int *)param_4[1] == 1) {
      if (DAT_10226db58 == 0) {
        DAT_10226db58 = FUN_100087320("Messaging::ButtonID",0xffffffffffffffff,1);
      }
      *(int *)*param_4 = DAT_10226db58;
      return;
    }
  }
  *(undefined4 *)*param_4 = 0xffffffff;
  return;
}

