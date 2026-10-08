
void FUN_100826940(undefined8 param_1,int param_2,undefined4 param_3,long *param_4)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    switch(param_3) {
    case 0:
      FUN_1002d37d0(param_1,*(undefined4 *)param_4[1]);
      return;
    case 1:
      FUN_1002d39a0(param_1,*(undefined4 *)param_4[1]);
      return;
    case 2:
      uVar1 = FUN_1002d3270();
      break;
    case 3:
      uVar1 = FUN_1002d3300();
      break;
    default:
      goto switchD_100826962_default;
    }
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = uVar1;
    }
  }
switchD_100826962_default:
  return;
}

