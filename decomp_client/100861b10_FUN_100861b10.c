
int FUN_100861b10(undefined8 param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  
  iVar1 = QFrame::qt_metacall();
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
        FUN_1007a2e30(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2]);
      }
    }
    iVar1 = iVar1 + -1;
  }
  return iVar1;
}

