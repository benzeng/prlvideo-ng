
int FUN_10068f1a0(undefined8 param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  
  iVar1 = QObject::qt_metacall();
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
          FUN_10068d970(param_1,*(undefined8 *)param_4[1]);
        }
        else if (iVar1 == 1) {
          FUN_10068d720(param_1,*(undefined8 *)param_4[1]);
        }
        else if (iVar1 == 0) {
          FUN_10068daf0(param_1);
        }
      }
    }
    iVar1 = iVar1 + -3;
  }
  return iVar1;
}

