
int FUN_10084e8a0(undefined8 param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  
  iVar1 = FUN_10084dd10();
  if (-1 < iVar1) {
    if (param_2 == 0xc) {
      if (iVar1 < 0x2d) {
        *(undefined4 *)*param_4 = 0xffffffff;
      }
    }
    else {
      if (param_2 != 0) {
        return iVar1;
      }
      if (iVar1 < 0x2d) {
        FUN_10084e070(param_1,0,iVar1,param_4);
      }
    }
    iVar1 = iVar1 + -0x2d;
  }
  return iVar1;
}

