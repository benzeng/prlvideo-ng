
int FUN_10008c240(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = QObject::qt_metacall();
  if (iVar1 < 0) {
    return iVar1;
  }
  if (param_2 == 0xc) {
    if (0xd < iVar1) goto LAB_10008c28c;
    uVar2 = 0xc;
  }
  else {
    if (param_2 != 0) {
      return iVar1;
    }
    if (0xd < iVar1) goto LAB_10008c28c;
    uVar2 = 0;
  }
  FUN_10008bfa0(param_1,uVar2,iVar1,param_4);
LAB_10008c28c:
  return iVar1 + -0xe;
}

