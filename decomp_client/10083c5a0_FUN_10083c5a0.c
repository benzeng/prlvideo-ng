
int FUN_10083c5a0(long *param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  
  iVar1 = FUN_10083c3d0();
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
        (**(code **)(*param_1 + 0x1d0))(param_1);
        break;
      case 1:
        FUN_100529010(param_1);
        break;
      case 2:
        FUN_100529070(param_1,*(undefined4 *)param_4[1]);
        break;
      case 3:
        FUN_100528de0(param_1);
      }
    }
    iVar1 = iVar1 + -4;
  }
  return iVar1;
}

