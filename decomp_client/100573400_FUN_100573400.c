
int FUN_100573400(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = QObject::qt_metacall();
  if (iVar1 < 0) {
    return iVar1;
  }
  if (param_2 == 0xc) {
    if (0 < iVar1) goto LAB_10057344a;
    uVar2 = 0xc;
  }
  else {
    if (param_2 != 0) {
      return iVar1;
    }
    if (0 < iVar1) goto LAB_10057344a;
    uVar2 = 0;
  }
  FUN_1005732c0(param_1,uVar2,iVar1,param_4);
LAB_10057344a:
  return iVar1 + -1;
}

