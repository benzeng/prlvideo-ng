
int FUN_1009c11c0(undefined8 param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  
  iVar1 = QDialog::qt_metacall();
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
        FUN_1009b7ba0(param_1,param_4[1]);
      }
    }
    iVar1 = iVar1 + -1;
  }
  return iVar1;
}

