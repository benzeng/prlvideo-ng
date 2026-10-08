
int FUN_100853120(undefined8 param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  
  iVar1 = QObject::qt_metacall();
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
        FUN_100726490(param_1);
        break;
      case 1:
        FUN_1007264f0(param_1);
        break;
      case 2:
        FUN_100726550(param_1);
        break;
      case 3:
        FUN_100726580(param_1);
        break;
      case 4:
        FUN_1007266f0(param_1);
      }
    }
    iVar1 = iVar1 + -5;
  }
  return iVar1;
}

