
void FUN_1005d8140(undefined8 param_1,int param_2,undefined4 param_3,long *param_4)

{
  undefined1 uVar1;
  
  if (param_2 == 0) {
    switch(param_3) {
    case 0:
      uVar1 = FUN_1005d6700();
      break;
    case 1:
      uVar1 = FUN_1005d6d80();
      break;
    case 2:
      FUN_1005d66a0();
      return;
    case 3:
      FUN_1005d6440();
      return;
    default:
      goto switchD_1005d8162_default;
    }
    if ((undefined1 *)*param_4 != (undefined1 *)0x0) {
      *(undefined1 *)*param_4 = uVar1;
    }
  }
switchD_1005d8162_default:
  return;
}

