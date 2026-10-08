
int FUN_10082dea0(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = QObject::qt_metacall();
  if (iVar1 < 0) {
    return iVar1;
  }
  if (param_2 == 0xc) {
    if (5 < iVar1) goto LAB_10082deec;
    uVar2 = 0xc;
  }
  else {
    if (param_2 != 0) {
      return iVar1;
    }
    if (5 < iVar1) goto LAB_10082deec;
    uVar2 = 0;
  }
  FUN_10082dd70(param_1,uVar2,iVar1,param_4);
LAB_10082deec:
  return iVar1 + -6;
}

