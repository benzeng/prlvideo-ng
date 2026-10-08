
int FUN_10083d040(undefined8 param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  
  iVar1 = FUN_10083c3d0();
  if (-1 < iVar1) {
    if (param_2 == 0xc) {
      if (iVar1 < 6) {
        *(undefined4 *)*param_4 = 0xffffffff;
      }
    }
    else {
      if (param_2 != 0) {
        return iVar1;
      }
      if (iVar1 < 6) {
        FUN_10083cf60(param_1,0,iVar1,param_4);
      }
    }
    iVar1 = iVar1 + -6;
  }
  return iVar1;
}

