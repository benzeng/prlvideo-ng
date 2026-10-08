
int FUN_10083a300(long *param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  
  iVar1 = FUN_100838ea0();
  if (-1 < iVar1) {
    if (param_2 == 0xc) {
      if (iVar1 < 5) {
        *(undefined4 *)*param_4 = 0xffffffff;
      }
    }
    else {
      if (param_2 != 0) {
        return iVar1;
      }
      switch(iVar1) {
      case 0:
        (**(code **)(*param_1 + 0x1d0))(param_1);
        break;
      case 1:
        (**(code **)(*param_1 + 0x1d8))(param_1);
        break;
      case 2:
        (**(code **)(*param_1 + 0x1b0))(param_1);
        break;
      case 3:
        FUN_1004aabe0(param_1);
        break;
      case 4:
        FUN_1004aad70(param_1,*(undefined4 *)param_4[1]);
      }
    }
    iVar1 = iVar1 + -5;
  }
  return iVar1;
}

