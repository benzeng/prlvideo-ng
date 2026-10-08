
void FUN_100822f30(undefined8 param_1,int param_2,undefined4 param_3,long *param_4)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    switch(param_3) {
    case 0:
      FUN_1002c16f0(param_1,*(undefined4 *)param_4[1]);
      return;
    case 1:
      FUN_1002c1e60();
      return;
    case 2:
      uVar1 = FUN_1002c0fd0();
      break;
    case 3:
      uVar1 = FUN_1002c1040();
      break;
    case 4:
      uVar1 = FUN_1002c15b0();
      break;
    case 5:
      uVar1 = FUN_1002c1c20();
      break;
    default:
      goto switchD_100822f52_default;
    }
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = uVar1;
    }
  }
switchD_100822f52_default:
  return;
}

