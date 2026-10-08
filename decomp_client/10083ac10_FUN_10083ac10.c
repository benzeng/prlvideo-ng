
int FUN_10083ac10(long *param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  
  iVar1 = FUN_100838ea0();
  if (-1 < iVar1) {
    if (param_2 == 0xc) {
      if (iVar1 < 1) {
        *(undefined4 *)*param_4 = 0xffffffff;
      }
    }
    else {
      if (param_2 != 0) {
        return iVar1;
      }
      if (iVar1 == 0) {
        (**(code **)(*param_1 + 0x1d0))(param_1);
      }
    }
    iVar1 = iVar1 + -1;
  }
  return iVar1;
}

