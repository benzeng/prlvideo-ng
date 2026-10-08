
void FUN_10081ba30(long *param_1,int param_2,undefined4 param_3,long *param_4)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    switch(param_3) {
    case 0:
      FUN_10027ef30();
      return;
    case 1:
      FUN_10027f020();
      return;
    case 2:
      FUN_10027f110();
      return;
    case 3:
      FUN_10027ef00();
      return;
    case 4:
      FUN_10027e9e0(param_1,*(undefined4 *)param_4[1]);
      return;
    case 5:
      uVar1 = FUN_10027d860();
      break;
    case 6:
      uVar1 = FUN_10027d8f0();
      break;
    case 7:
      uVar1 = FUN_10027da80();
      break;
    case 8:
      uVar1 = (**(code **)(*param_1 + 0xc0))();
      break;
    case 9:
      uVar1 = (**(code **)(*param_1 + 200))();
      break;
    case 10:
      uVar1 = FUN_10027dc50();
      break;
    case 0xb:
      uVar1 = FUN_10027e080();
      break;
    case 0xc:
      uVar1 = FUN_10027ec30();
      break;
    case 0xd:
      uVar1 = FUN_10027e530();
      break;
    default:
      goto switchD_10081ba5a_default;
    }
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = uVar1;
    }
  }
switchD_10081ba5a_default:
  return;
}

