
int FUN_1009c0910(undefined8 param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  
  iVar1 = FUN_1009bf3e0();
  if (-1 < iVar1) {
    if (param_2 == 0xc) {
      if (iVar1 < 8) {
        *(undefined4 *)*param_4 = 0xffffffff;
      }
    }
    else {
      if (param_2 != 0) {
        return iVar1;
      }
      if (iVar1 < 8) {
        FUN_1009c05e0(param_1,0,iVar1,param_4);
      }
    }
    iVar1 = iVar1 + -8;
  }
  return iVar1;
}

