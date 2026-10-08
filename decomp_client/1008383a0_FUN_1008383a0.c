
int FUN_1008383a0(long *param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  
  iVar1 = CBaseDialog::qt_metacall();
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
        FUN_10042edf0(param_1,*(undefined4 *)param_4[1]);
        break;
      case 1:
        FUN_10042ef00(param_1,param_4[1]);
        break;
      case 2:
        FUN_10042ee10(param_1,param_4[1]);
        break;
      case 3:
        FUN_10042ea00(param_1);
        break;
      case 4:
        (**(code **)(*param_1 + 0x1b8))(param_1);
      }
    }
    iVar1 = iVar1 + -5;
  }
  return iVar1;
}

