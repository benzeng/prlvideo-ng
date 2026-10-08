
int FUN_1007f4460(undefined8 param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  
  iVar1 = QObject::qt_metacall();
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
        FUN_1000a50f0(param_1,param_4[1]);
        break;
      case 1:
        FUN_1000a5210(param_1,param_4[1]);
        break;
      case 2:
        FUN_1000a52b0(param_1,param_4[1]);
        break;
      case 3:
        FUN_1000a5360(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2]);
      }
    }
    iVar1 = iVar1 + -4;
  }
  return iVar1;
}

