
void FUN_100a1c3b0(undefined8 param_1,int param_2,int param_3,long *param_4)

{
  undefined4 uVar1;
  void *pvVar2;
  
  if (param_2 == 0) {
    switch(param_3) {
    case 0:
      FUN_100a19a30(param_1,*(undefined4 *)param_4[1],param_4[2]);
      return;
    case 1:
      FUN_100a1a7d0(param_1,*(undefined4 *)param_4[1],param_4[2]);
      return;
    case 2:
      FUN_100a1b050(param_1,*(undefined4 *)param_4[1],param_4[2]);
      return;
    case 3:
      uVar1 = FUN_100a18990();
      break;
    case 4:
      uVar1 = FUN_100a1a0b0();
      break;
    case 5:
      uVar1 = FUN_100a1aae0();
      break;
    default:
      goto switchD_100a1c3d7_default;
    }
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = uVar1;
    }
  }
  else if ((param_2 == 9) && (param_3 == 0)) {
    pvVar2 = operator_new(0x68);
    FUN_100a18330(pvVar2,*(undefined8 *)param_4[1]);
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = pvVar2;
    }
  }
switchD_100a1c3d7_default:
  return;
}

