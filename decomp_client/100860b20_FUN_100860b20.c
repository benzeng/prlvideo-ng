
int FUN_100860b20(undefined8 param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  
  iVar1 = FUN_100860790();
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
          FUN_100794290(param_1,param_4[1]);
        }
        else if (iVar1 == 0) {
          FUN_100793ee0(param_1,*(undefined8 *)param_4[1],*(undefined8 *)param_4[2]);
        }
      }
    }
    iVar1 = iVar1 + -2;
  }
  return iVar1;
}

