
int FUN_100813e50(long *param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  
  iVar1 = CAbstractTask::qt_metacall();
  if (-1 < iVar1) {
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
          (**(code **)(*param_1 + 0x120))(param_1);
        }
        else if (iVar1 == 1) {
          (**(code **)(*param_1 + 0x118))(param_1,*(undefined4 *)param_4[1]);
        }
        else if (iVar1 == 0) {
          (**(code **)(*param_1 + 0x110))(param_1,*(undefined1 *)param_4[1]);
        }
      }
    }
    iVar1 = iVar1 + -3;
  }
  return iVar1;
}

