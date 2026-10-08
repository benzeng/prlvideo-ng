
int FUN_1008664b0(undefined8 param_1,int param_2,undefined8 param_3,long *param_4)

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
        uVar2 = FUN_1007e4910(param_1);
      }
      else {
        if (iVar1 != 1) {
          if (iVar1 == 0) {
            FUN_1007e4b50(param_1);
          }
          goto LAB_100866523;
        }
        uVar2 = FUN_1007e48a0(param_1);
      }
      if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
        *(undefined4 *)*param_4 = uVar2;
      }
    }
  }
LAB_100866523:
  return iVar1 + -3;
}

