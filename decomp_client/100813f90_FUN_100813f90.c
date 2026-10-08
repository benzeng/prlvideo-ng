
int FUN_100813f90(long *param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = CAbstractTask::qt_metacall();
  if (iVar1 < 0) {
    return iVar1;
  }
  if (param_2 == 0xc) {
    if (iVar1 < 3) {
      *(undefined4 *)*param_4 = 0xffffffff;
      return iVar1 + -3;
    }
LAB_100813ffb:
    iVar2 = iVar1 + -3;
LAB_100813fff:
    if (param_2 == 0xc) {
      if (iVar2 < 1) {
        *(undefined4 *)*param_4 = 0xffffffff;
      }
      goto LAB_10081406f;
    }
    if (param_2 != 0) {
      return iVar2;
    }
  }
  else {
    iVar2 = iVar1;
    if (param_2 != 0) goto LAB_100813fff;
    if (2 < iVar1) goto LAB_100813ffb;
    if (iVar1 == 2) {
      (**(code **)(*param_1 + 0x120))(param_1);
      return -1;
    }
    if (iVar1 == 1) {
      (**(code **)(*param_1 + 0x118))(param_1,*(undefined4 *)param_4[1]);
      return -2;
    }
    if (iVar1 == 0) {
      (**(code **)(*param_1 + 0x110))(param_1,*(undefined1 *)param_4[1]);
      return -3;
    }
    iVar2 = iVar1 + -3;
    if (iVar1 < 3) {
      return iVar2;
    }
  }
  if (iVar2 == 0) {
    (**(code **)(*param_1 + 0x118))(param_1,*(undefined4 *)param_4[1]);
  }
LAB_10081406f:
  return iVar2 + -1;
}

