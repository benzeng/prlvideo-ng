
int FUN_10081e200(undefined8 param_1,int param_2,undefined8 param_3,long *param_4)

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
    goto switchD_10081e253_default;
  }
  if (param_2 != 0) {
    return iVar1;
  }
  switch(iVar1) {
  case 0:
    FUN_1002944b0(param_1);
    goto switchD_10081e253_default;
  case 1:
    uVar2 = FUN_1002936f0(param_1);
    break;
  case 2:
    uVar2 = FUN_100293890(param_1);
    break;
  case 3:
    uVar2 = FUN_1002942c0(param_1);
    break;
  default:
    goto switchD_10081e253_default;
  }
  if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
    *(undefined4 *)*param_4 = uVar2;
  }
switchD_10081e253_default:
  return iVar1 + -4;
}

