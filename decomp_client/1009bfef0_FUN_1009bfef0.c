
int FUN_1009bfef0(undefined8 param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  
  iVar1 = FUN_1009bf3e0();
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
          FUN_10099c0f0(param_1);
        }
        else if (iVar1 == 0) {
          FUN_10099b750(param_1,*(undefined1 *)param_4[1]);
        }
      }
    }
    iVar1 = iVar1 + -2;
  }
  return iVar1;
}

