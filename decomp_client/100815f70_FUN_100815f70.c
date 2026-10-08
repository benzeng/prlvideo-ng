
int FUN_100815f70(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = CAbstractTask::qt_metacall();
  if (iVar1 < 0) {
    return iVar1;
  }
  if (param_2 == 0xc) {
    if (10 < iVar1) goto LAB_100815fbc;
    uVar2 = 0xc;
  }
  else {
    if (param_2 != 0) {
      return iVar1;
    }
    if (10 < iVar1) goto LAB_100815fbc;
    uVar2 = 0;
  }
  FUN_100815d30(param_1,uVar2,iVar1,param_4);
LAB_100815fbc:
  return iVar1 + -0xb;
}

