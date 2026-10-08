
int FUN_1008152b0(undefined8 param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  
  iVar1 = CAbstractTask::qt_metacall();
  if (iVar1 < 0) {
    return iVar1;
  }
  if (param_2 == 0xc) {
    if (iVar1 < 6) {
      *(undefined4 *)*param_4 = 0xffffffff;
      return iVar1 + -6;
    }
  }
  else {
    if (param_2 != 0) goto LAB_10081530e;
    if (iVar1 < 6) {
      FUN_100814c00(param_1,0,iVar1,param_4);
      return iVar1 + -6;
    }
  }
  iVar1 = iVar1 + -6;
LAB_10081530e:
  if (param_2 == 0xc) {
    if (iVar1 < 1) {
      *(undefined4 *)*param_4 = 0xffffffff;
    }
  }
  else {
    if (param_2 != 0) {
      return iVar1;
    }
    if (iVar1 == 0) {
      FUN_10023f5e0(param_1,param_4[1],*(undefined4 *)param_4[2]);
    }
  }
  return iVar1 + -1;
}

