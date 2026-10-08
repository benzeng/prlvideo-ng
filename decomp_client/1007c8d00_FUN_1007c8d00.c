
int FUN_1007c8d00(undefined8 param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  
  iVar1 = QObject::qt_metacall();
  if (-1 < iVar1) {
    if (param_2 == 0xc) {
      if (iVar1 < 3) {
        if (iVar1 == 1) {
          if (*(int *)param_4[1] == 0) {
            *(undefined4 *)*param_4 = 2;
          }
          else {
            *(undefined4 *)*param_4 = 0xffffffff;
          }
        }
        else {
          *(undefined4 *)*param_4 = 0xffffffff;
        }
      }
    }
    else {
      if (param_2 != 0) {
        return iVar1;
      }
      if (iVar1 < 3) {
        if (iVar1 == 2) {
          FUN_1007c8710(param_1,param_4[1],param_4[2]);
        }
        else if (iVar1 == 1) {
          FUN_1007c8650(param_1,*(undefined4 *)param_4[1]);
        }
        else if (iVar1 == 0) {
          FUN_1007c84b0(param_1);
        }
      }
    }
    iVar1 = iVar1 + -3;
  }
  return iVar1;
}

