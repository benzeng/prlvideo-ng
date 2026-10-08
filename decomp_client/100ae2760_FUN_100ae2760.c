
int FUN_100ae2760(undefined8 param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  
  iVar1 = QObject::qt_metacall();
  if (-1 < iVar1) {
    if (param_2 == 0xc) {
      if (iVar1 < 0xf) {
        *(undefined4 *)*param_4 = 0xffffffff;
      }
    }
    else {
      if (param_2 != 0) {
        return iVar1;
      }
      if (iVar1 < 0xf) {
        FUN_100ae1330(param_1,0,iVar1,param_4);
      }
    }
    iVar1 = iVar1 + -0xf;
  }
  return iVar1;
}

