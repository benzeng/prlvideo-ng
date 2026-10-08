
int FUN_100850d80(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = QObject::qt_metacall();
  if (iVar1 < 0) {
    return iVar1;
  }
  if (param_2 == 0xc) {
    if (9 < iVar1) goto LAB_100850dcc;
    uVar2 = 0xc;
  }
  else {
    if (param_2 != 0) {
      return iVar1;
    }
    if (9 < iVar1) goto LAB_100850dcc;
    uVar2 = 0;
  }
  FUN_100850850(param_1,uVar2,iVar1,param_4);
LAB_100850dcc:
  return iVar1 + -10;
}

