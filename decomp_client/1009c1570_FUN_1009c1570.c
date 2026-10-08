
int FUN_1009c1570(undefined8 param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  
  iVar1 = FUN_1009bf3e0();
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
          FUN_1009bbe20(param_1,param_4[1]);
        }
        else if (iVar1 == 1) {
          FUN_1009bc0c0(param_1);
        }
        else if (iVar1 == 0) {
          FUN_1009bb720(param_1,param_4[1]);
        }
      }
    }
    iVar1 = iVar1 + -3;
  }
  return iVar1;
}

