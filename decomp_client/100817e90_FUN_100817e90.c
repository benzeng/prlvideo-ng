
int FUN_100817e90(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = CTaskCheckForProductUpdate::qt_metacall();
  if (iVar1 < 0) {
    return iVar1;
  }
  if (param_2 == 0xc) {
    if (10 < iVar1) goto LAB_100817edc;
    uVar2 = 0xc;
  }
  else {
    if (param_2 != 0) {
      return iVar1;
    }
    if (10 < iVar1) goto LAB_100817edc;
    uVar2 = 0;
  }
  FUN_100817b70(param_1,uVar2,iVar1,param_4);
LAB_100817edc:
  return iVar1 + -0xb;
}

