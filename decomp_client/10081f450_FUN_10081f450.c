
int FUN_10081f450(undefined8 param_1,int param_2,undefined8 param_3,long *param_4)

{
  int iVar1;
  undefined4 uVar2;
  
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
          uVar2 = FUN_10029e180(param_1);
          if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
            *(undefined4 *)*param_4 = uVar2;
          }
        }
        else if (iVar1 == 1) {
          FUN_10029eb40(param_1,*(undefined8 *)param_4[1],param_4[2]);
        }
        else if (iVar1 == 0) {
          FUN_10029edf0(param_1);
        }
      }
    }
    iVar1 = iVar1 + -3;
  }
  return iVar1;
}

