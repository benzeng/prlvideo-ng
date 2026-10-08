
int FUN_10081b9d0(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = CAbstractTask::qt_metacall();
  if (iVar1 < 0) {
    return iVar1;
  }
  if (param_2 == 0xc) {
    if (0x13 < iVar1) goto LAB_10081ba1c;
    uVar2 = 0xc;
  }
  else {
    if (param_2 != 0) {
      return iVar1;
    }
    if (0x13 < iVar1) goto LAB_10081ba1c;
    uVar2 = 0;
  }
  FUN_10081b3f0(param_1,uVar2,iVar1,param_4);
LAB_10081ba1c:
  return iVar1 + -0x14;
}

