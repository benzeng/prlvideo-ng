
int FUN_10084ce20(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = QObject::qt_metacall();
  if (iVar1 < 0) {
    return iVar1;
  }
  if (param_2 == 0xc) {
    if (0x2f < iVar1) goto LAB_10084ce6c;
    uVar2 = 0xc;
  }
  else {
    if (param_2 != 0) {
      return iVar1;
    }
    if (0x2f < iVar1) goto LAB_10084ce6c;
    uVar2 = 0;
  }
  FUN_10084ae00(param_1,uVar2,iVar1,param_4);
LAB_10084ce6c:
  return iVar1 + -0x30;
}

