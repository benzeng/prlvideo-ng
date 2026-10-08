
int FUN_10085b690(undefined8 param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  
  iVar1 = FUN_10085bd20();
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
          FUN_1007669b0(param_1,*(undefined4 *)param_4[1]);
        }
        else if (iVar1 == 0) {
          FUN_1007665a0(param_1,*(undefined4 *)param_4[1]);
        }
      }
    }
    iVar1 = iVar1 + -2;
  }
  return iVar1;
}

