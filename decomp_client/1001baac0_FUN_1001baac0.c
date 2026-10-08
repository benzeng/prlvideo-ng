
void FUN_1001baac0(undefined8 param_1,int param_2,int param_3,undefined8 *param_4)

{
  if (param_2 == 0xc) {
    if (param_3 != 0) {
      *(undefined4 *)*param_4 = 0xffffffff;
      return;
    }
    if (*(int *)param_4[1] != 0) {
      *(undefined4 *)*param_4 = 0xffffffff;
      return;
    }
    *(undefined4 *)*param_4 = 2;
  }
  else if (param_2 == 0) {
    switch(param_3) {
    case 0:
      FUN_1001b9e10(param_1,*(undefined4 *)param_4[1]);
      return;
    case 1:
      FUN_1001ba620();
      return;
    case 2:
      FUN_1001ba700();
      return;
    case 3:
      FUN_1001b9460(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2]);
      return;
    }
  }
  return;
}

