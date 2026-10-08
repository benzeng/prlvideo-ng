
int FUN_1008582d0(undefined8 param_1,int param_2,undefined8 param_3,undefined8 *param_4)

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
          FUN_10073d0a0(param_1,param_4[1],param_4[2]);
        }
        else if (iVar1 == 1) {
          FUN_10073cdf0(param_1,param_4[1],*(undefined4 *)param_4[2]);
        }
        else if (iVar1 == 0) {
          FUN_10073cdd0(param_1,param_4[1]);
        }
      }
    }
    iVar1 = iVar1 + -3;
  }
  return iVar1;
}

