
void FUN_1008087c0(undefined8 param_1,int param_2,int param_3,undefined8 *param_4)

{
  if (param_2 == 0xc) {
    if ((param_3 == 3) && (*(int *)param_4[1] == 0)) {
      if (DAT_10227150c == 0) {
        DAT_10227150c = FUN_1001e4190("CLicenseWrap::LicenseInfo",0xffffffffffffffff,1);
      }
      *(int *)*param_4 = DAT_10227150c;
    }
    else {
      *(undefined4 *)*param_4 = 0xffffffff;
    }
  }
  else if (param_2 == 0) {
    switch(param_3) {
    case 0:
      FUN_1001b6cf0();
      return;
    case 1:
      FUN_1001b7a10(param_1,*(undefined4 *)param_4[1]);
      return;
    case 2:
      FUN_1001b7a50(param_1,param_4[1]);
      return;
    case 3:
      FUN_1001b7ac0(param_1,param_4[1]);
      return;
    }
  }
  return;
}

