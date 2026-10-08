
void FUN_10080d420(undefined8 param_1,int param_2,undefined4 param_3,long *param_4)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    switch(param_3) {
    case 0:
      FUN_1001fb200(param_1,*(undefined4 *)param_4[1]);
      return;
    case 1:
      FUN_1001fb180();
      return;
    case 2:
      FUN_1001fb420(param_1,*(undefined4 *)param_4[1]);
      return;
    case 3:
      FUN_1001fb5f0(param_1,*(undefined4 *)param_4[1]);
      return;
    case 4:
      FUN_1001fb7a0(param_1,*(undefined4 *)param_4[1]);
      return;
    case 5:
      uVar1 = FUN_1001fa3e0();
      break;
    case 6:
      uVar1 = FUN_1001fb290();
      break;
    case 7:
      uVar1 = FUN_1001fb440();
      break;
    case 8:
      uVar1 = FUN_1001fb640();
      break;
    case 9:
      uVar1 = FUN_1001fb810();
      break;
    default:
      goto switchD_10080d44a_default;
    }
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = uVar1;
    }
  }
switchD_10080d44a_default:
  return;
}

