
void FUN_10081e920(undefined8 param_1,int param_2,undefined4 param_3,long *param_4)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    switch(param_3) {
    case 0:
      uVar1 = FUN_100299260();
      break;
    case 1:
      uVar1 = FUN_100299d60();
      break;
    case 2:
      uVar1 = FUN_100299b70();
      break;
    case 3:
      uVar1 = FUN_100299b00();
      break;
    default:
      goto switchD_10081e942_default;
    }
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = uVar1;
    }
  }
switchD_10081e942_default:
  return;
}

