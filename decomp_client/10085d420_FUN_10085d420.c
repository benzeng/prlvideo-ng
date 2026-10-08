
void FUN_10085d420(undefined8 param_1,int param_2,int param_3,undefined8 *param_4)

{
  if (param_2 != 0xc) {
    if (param_2 != 0) {
      return;
    }
    if (param_3 != 1) {
      if (param_3 != 0) {
        return;
      }
      FUN_1007825c0(param_1,param_4[1],param_4[2],param_4[3]);
      return;
    }
    FUN_100782400(param_1,param_4[1]);
    return;
  }
  if (param_3 == 0) {
    if (1 < *(int *)param_4[1] - 1U) {
LAB_10085d467:
      *(undefined4 *)*param_4 = 0xffffffff;
      return;
    }
  }
  else if ((param_3 != 1) || (*(int *)param_4[1] != 0)) goto LAB_10085d467;
  if (DAT_10227150c == 0) {
    DAT_10227150c = FUN_1001e4190("CLicenseWrap::LicenseInfo",0xffffffffffffffff,1);
  }
  *(int *)*param_4 = DAT_10227150c;
  return;
}

