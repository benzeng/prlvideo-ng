
void FUN_10081eb50(undefined8 param_1,int param_2,undefined4 param_3,long *param_4)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    switch(param_3) {
    case 0:
      uVar1 = FUN_10029a260();
      break;
    case 1:
      uVar1 = FUN_10029a330();
      break;
    case 2:
      uVar1 = FUN_10029a730();
      break;
    case 3:
      uVar1 = FUN_10029ad40();
      break;
    default:
      goto switchD_10081eb72_default;
    }
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = uVar1;
    }
  }
switchD_10081eb72_default:
  return;
}

