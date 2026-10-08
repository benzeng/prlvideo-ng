
int FUN_10081da80(undefined8 param_1,int param_2,undefined8 param_3,long *param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CAbstractTask::qt_metacall();
  if (iVar1 < 0) {
    return iVar1;
  }
  if (param_2 == 0xc) {
    if (iVar1 < 2) {
      *(undefined4 *)*param_4 = 0xffffffff;
    }
  }
  else {
    if (param_2 != 0) {
      return iVar1;
    }
    if (iVar1 < 2) {
      if (iVar1 == 1) {
        uVar2 = FUN_1002916e0(param_1);
      }
      else {
        if (iVar1 != 0) goto LAB_10081dae3;
        uVar2 = FUN_100291660(param_1);
      }
      if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
        *(undefined4 *)*param_4 = uVar2;
      }
    }
  }
LAB_10081dae3:
  return iVar1 + -2;
}

