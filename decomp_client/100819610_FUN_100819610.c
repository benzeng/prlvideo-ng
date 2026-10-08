
void FUN_100819610(undefined8 param_1,int param_2,int param_3,long *param_4)

{
  undefined4 uVar1;
  
  if (param_2 == 0xc) {
    if (param_3 == 0) {
      if (*(int *)param_4[1] == 0) {
        *(undefined4 *)*param_4 = 2;
      }
      else {
        *(undefined4 *)*param_4 = 0xffffffff;
      }
    }
    else {
      *(undefined4 *)*param_4 = 0xffffffff;
    }
  }
  else if (param_2 == 0) {
    switch(param_3) {
    case 0:
      FUN_1002659f0(param_1,*(undefined4 *)param_4[1],param_4[2]);
      return;
    case 1:
      FUN_100265a60(param_1,param_4[1]);
      return;
    case 2:
      uVar1 = FUN_100264e30();
      if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
        *(undefined4 *)*param_4 = uVar1;
      }
      break;
    case 3:
      uVar1 = FUN_100264ec0();
      if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
        *(undefined4 *)*param_4 = uVar1;
      }
      break;
    case 4:
      uVar1 = FUN_100264f90();
      if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
        *(undefined4 *)*param_4 = uVar1;
      }
      break;
    case 5:
      uVar1 = FUN_100265840();
      if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
        *(undefined4 *)*param_4 = uVar1;
      }
      break;
    case 6:
      uVar1 = FUN_100265990();
      if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
        *(undefined4 *)*param_4 = uVar1;
      }
    }
  }
  return;
}

