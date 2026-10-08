
void FUN_100826800(undefined8 param_1,int param_2,undefined4 param_3,long *param_4)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    switch(param_3) {
    case 0:
      FUN_1002d2140(param_1,*(undefined4 *)param_4[1]);
      return;
    case 1:
      FUN_1002d2410(param_1,*(undefined4 *)param_4[1]);
      return;
    case 2:
      uVar1 = FUN_1002d1f90();
      break;
    case 3:
      uVar1 = FUN_1002d2360();
      break;
    case 4:
      uVar1 = FUN_1002d2b30();
      break;
    default:
      goto switchD_100826822_default;
    }
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = uVar1;
    }
  }
switchD_100826822_default:
  return;
}

