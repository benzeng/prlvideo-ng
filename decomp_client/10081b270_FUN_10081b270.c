
int FUN_10081b270(long *param_1,int param_2,undefined8 param_3,long *param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CAbstractTask::qt_metacall();
  if (iVar1 < 0) {
    return iVar1;
  }
  if (param_2 == 0xc) {
    if (iVar1 < 4) {
      *(undefined4 *)*param_4 = 0xffffffff;
    }
    goto switchD_10081b2c3_default;
  }
  if (param_2 != 0) {
    return iVar1;
  }
  switch(iVar1) {
  case 0:
    (**(code **)(*param_1 + 0x80))(param_1);
    goto switchD_10081b2c3_default;
  case 1:
    uVar2 = FUN_100276100(param_1);
    break;
  case 2:
    uVar2 = FUN_1002761f0(param_1);
    break;
  case 3:
    uVar2 = FUN_100276340(param_1);
    break;
  default:
    goto switchD_10081b2c3_default;
  }
  if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
    *(undefined4 *)*param_4 = uVar2;
  }
switchD_10081b2c3_default:
  return iVar1 + -4;
}

