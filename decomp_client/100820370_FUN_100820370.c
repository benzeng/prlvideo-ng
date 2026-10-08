
void FUN_100820370(undefined8 param_1,int param_2,undefined4 param_3,long *param_4)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    switch(param_3) {
    case 0:
      FUN_1002ab270(param_1,*(undefined4 *)param_4[1]);
      return;
    case 1:
      FUN_1002abc40(param_1,*(undefined4 *)param_4[1]);
      return;
    case 2:
      uVar1 = FUN_1002ab070();
      break;
    case 3:
      uVar1 = FUN_1002ab140();
      break;
    case 4:
      uVar1 = FUN_1002ab790();
      break;
    case 5:
      uVar1 = FUN_1002ab920();
      break;
    default:
      goto switchD_100820392_default;
    }
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = uVar1;
    }
  }
switchD_100820392_default:
  return;
}

