
void FUN_1007c96b0(undefined8 param_1,int param_2,int param_3,undefined8 *param_4)

{
  if (param_2 == 0xc) {
    if (param_3 != 1) {
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
    if (param_3 == 1) {
      FUN_1007c8fc0(param_1,*(undefined4 *)param_4[1]);
      return;
    }
    if (param_3 == 0) {
      FUN_1007c8f60();
      return;
    }
  }
  return;
}

