
int FUN_10083bac0(long *param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  
  iVar1 = FUN_10083b240();
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
        (**(code **)(*param_1 + 0x210))(param_1);
        break;
      case 1:
        FUN_1004e0810(param_1);
        break;
      case 2:
        FUN_1004e13f0(param_1);
        break;
      case 3:
        FUN_1004e1300(param_1);
        break;
      case 4:
        FUN_1004e1320(param_1);
      }
    }
    iVar1 = iVar1 + -5;
  }
  return iVar1;
}

