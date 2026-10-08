
int FUN_10080c5e0(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = CAbstractTask::qt_metacall();
  if (iVar1 < 0) {
    return iVar1;
  }
  if (param_2 == 0xc) {
    if (7 < iVar1) goto LAB_10080c62c;
    uVar2 = 0xc;
  }
  else {
    if (param_2 != 0) {
      return iVar1;
    }
    if (7 < iVar1) goto LAB_10080c62c;
    uVar2 = 0;
  }
  FUN_10080c460(param_1,uVar2,iVar1,param_4);
LAB_10080c62c:
  return iVar1 + -8;
}

