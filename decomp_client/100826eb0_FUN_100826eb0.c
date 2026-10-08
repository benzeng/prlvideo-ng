
void FUN_100826eb0(undefined8 param_1,int param_2,undefined4 param_3,long *param_4)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    switch(param_3) {
    case 0:
      FUN_1000698d0(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2]);
      return;
    case 1:
      FUN_100069b70(param_1,*(undefined4 *)param_4[1]);
      return;
    case 2:
      uVar1 = FUN_100069bc0();
      break;
    case 3:
      uVar1 = FUN_100069d60();
      break;
    default:
      goto switchD_100826ed2_default;
    }
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = uVar1;
    }
  }
switchD_100826ed2_default:
  return;
}

