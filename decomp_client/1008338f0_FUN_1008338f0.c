
int FUN_1008338f0(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = CAbstractProgressOperation::qt_metacall();
  if (iVar1 < 0) {
    return iVar1;
  }
  if (param_2 == 0xc) {
    if (6 < iVar1) goto LAB_10083393c;
    uVar2 = 0xc;
  }
  else {
    if (param_2 != 0) {
      return iVar1;
    }
    if (6 < iVar1) goto LAB_10083393c;
    uVar2 = 0;
  }
  FUN_100833720(param_1,uVar2,iVar1,param_4);
LAB_10083393c:
  return iVar1 + -7;
}

