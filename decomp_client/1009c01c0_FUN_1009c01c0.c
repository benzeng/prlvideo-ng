
int FUN_1009c01c0(long *param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  
  iVar1 = FUN_1009bffe0();
  if (-1 < iVar1) {
    if (param_2 == 0xc) {
      if (iVar1 < 4) {
        *(undefined4 *)*param_4 = 0xffffffff;
      }
    }
    else {
      if (param_2 != 0) {
        return iVar1;
      }
      switch(iVar1) {
      case 0:
        FUN_10099f0b0(param_1);
        break;
      case 1:
        FUN_10099f0c0(param_1);
        break;
      case 2:
        (**(code **)(*param_1 + 0xd0))(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2]);
        break;
      case 3:
        FUN_1009a2f60(param_1);
      }
    }
    iVar1 = iVar1 + -4;
  }
  return iVar1;
}

