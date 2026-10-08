
void FUN_10081c1f0(undefined8 param_1,int param_2,undefined4 param_3,long *param_4)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    switch(param_3) {
    case 0:
      FUN_100285a70();
      return;
    case 1:
      FUN_100285b30();
      return;
    case 2:
      uVar1 = FUN_1002855d0();
      break;
    case 3:
      uVar1 = FUN_1002856b0();
      break;
    default:
      goto switchD_10081c212_default;
    }
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = uVar1;
    }
  }
switchD_10081c212_default:
  return;
}

