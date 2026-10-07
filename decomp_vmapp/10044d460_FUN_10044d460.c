
void FUN_10044d460(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_1 < 0x14) {
    switch(param_1) {
    case 4:
      *param_2 = 3;
      *param_3 = 2;
      return;
    case 5:
      *param_2 = 0;
      *param_3 = 2;
      return;
    case 6:
      *param_2 = 3;
      *param_3 = 0;
      return;
    case 7:
      *param_2 = 0;
      goto LAB_10044d4ea;
    }
  }
  else {
    if (param_1 == 0x14) {
      *param_2 = 0;
      *param_3 = 3;
      return;
    }
    if (param_1 == 0x15) {
      *param_2 = 0;
      *param_3 = 4;
      return;
    }
  }
  *param_2 = 0;
  if (param_1 == 0x16) {
    *param_3 = 5;
    return;
  }
LAB_10044d4ea:
  *param_3 = 1;
  return;
}

