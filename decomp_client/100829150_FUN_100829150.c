
int FUN_100829150(undefined8 param_1,int param_2,undefined8 param_3,long *param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CAbstractTask::qt_metacall();
  if (iVar1 < 0) {
    return iVar1;
  }
  if (param_2 == 0xc) {
    if (iVar1 < 3) {
      *(undefined4 *)*param_4 = 0xffffffff;
    }
  }
  else {
    if (param_2 != 0) {
      return iVar1;
    }
    if (iVar1 < 3) {
      if (iVar1 == 2) {
        uVar2 = FUN_1002f65f0(param_1);
      }
      else {
        if (iVar1 != 1) {
          if (iVar1 == 0) {
            FUN_1002f6790(param_1,*(undefined4 *)param_4[1]);
          }
          goto LAB_1008291c9;
        }
        uVar2 = FUN_1002f6590(param_1);
      }
      if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
        *(undefined4 *)*param_4 = uVar2;
      }
    }
  }
LAB_1008291c9:
  return iVar1 + -3;
}

