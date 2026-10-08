
int FUN_10081eec0(undefined8 param_1,int param_2,undefined8 param_3,long *param_4)

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
        uVar2 = FUN_10029b810(param_1);
      }
      else {
        if (iVar1 != 0) goto LAB_10081ef23;
        uVar2 = FUN_10029b730(param_1);
      }
      if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
        *(undefined4 *)*param_4 = uVar2;
      }
    }
  }
LAB_10081ef23:
  return iVar1 + -2;
}

