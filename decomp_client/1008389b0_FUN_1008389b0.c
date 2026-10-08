
int FUN_1008389b0(long *param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  
  iVar1 = CBaseDialog::qt_metacall();
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
        FUN_10043fad0(param_1,*(undefined4 *)param_4[1]);
        break;
      case 1:
        FUN_10043fb90(param_1,*(undefined4 *)param_4[1]);
        break;
      case 2:
        FUN_10043fb60(param_1);
        break;
      case 3:
        (**(code **)(*param_1 + 0x1b8))(param_1);
      }
    }
    iVar1 = iVar1 + -4;
  }
  return iVar1;
}

