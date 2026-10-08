
int FUN_100816560(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = CAbstractTask::qt_metacall();
  if (iVar1 < 0) {
    return iVar1;
  }
  if (param_2 == 0xc) {
    if (4 < iVar1) goto LAB_1008165ac;
    uVar2 = 0xc;
  }
  else {
    if (param_2 != 0) {
      return iVar1;
    }
    if (4 < iVar1) goto LAB_1008165ac;
    uVar2 = 0;
  }
  FUN_100816140(param_1,uVar2,iVar1,param_4);
LAB_1008165ac:
  return iVar1 + -5;
}

