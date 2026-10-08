
void FUN_100810900(undefined8 param_1,int param_2,undefined4 param_3,long *param_4)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    switch(param_3) {
    case 0:
      FUN_100216160(param_1,param_4[1]);
      return;
    case 1:
      FUN_100215ad0(param_1,*(undefined4 *)param_4[1]);
      return;
    case 2:
      FUN_100216780();
      return;
    case 3:
      uVar1 = FUN_100215940();
      break;
    case 4:
      uVar1 = FUN_100215f60();
      break;
    case 5:
      uVar1 = FUN_1002162d0();
      break;
    case 6:
      uVar1 = FUN_1002167a0();
      break;
    case 7:
      uVar1 = FUN_100216b60();
      break;
    case 8:
      uVar1 = FUN_100216ce0();
      break;
    default:
      goto switchD_100810922_default;
    }
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = uVar1;
    }
  }
switchD_100810922_default:
  return;
}

