
int FUN_1008119c0(undefined8 param_1,int param_2,undefined8 param_3,long *param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CAbstractTask::qt_metacall();
  if (-1 < iVar1) {
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
          uVar2 = FUN_100221d20(param_1);
          if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
            *(undefined4 *)*param_4 = uVar2;
          }
        }
        else if (iVar1 == 0) {
          FUN_100222810(param_1,*(undefined4 *)param_4[1],param_4[2]);
        }
      }
    }
    iVar1 = iVar1 + -2;
  }
  return iVar1;
}

