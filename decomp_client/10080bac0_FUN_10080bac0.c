
void FUN_10080bac0(undefined8 param_1,int param_2,int param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  if (param_2 == 2) {
    if (param_3 == 0) {
      FUN_1001ee7c0(param_1,*(undefined8 *)*param_4);
      return;
    }
  }
  else if ((param_2 == 1) && (param_3 == 0)) {
    param_4 = (undefined8 *)*param_4;
    uVar1 = FUN_1001ee790();
    *param_4 = uVar1;
  }
  return;
}

