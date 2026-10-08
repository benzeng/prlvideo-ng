
int FUN_1008148a0(long *param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  iVar2 = CAbstractTask::qt_metacall();
  if (iVar2 < 0) {
    return iVar2;
  }
  if (param_2 == 0xc) {
    if (iVar2 < 3) {
      *(undefined4 *)*param_4 = 0xffffffff;
      return iVar2 + -3;
    }
LAB_10081490b:
    iVar2 = iVar2 + -3;
LAB_10081490f:
    if (param_2 != 0xc) {
      if (param_2 != 0) {
        return iVar2;
      }
      goto LAB_100814965;
    }
    if (8 < iVar2) goto LAB_10081497b;
    uVar4 = 0xc;
  }
  else {
    if (param_2 != 0) goto LAB_10081490f;
    if (2 < iVar2) goto LAB_10081490b;
    if (iVar2 == 2) {
      (**(code **)(*param_1 + 0x120))(param_1);
      return -1;
    }
    if (iVar2 == 1) {
      (**(code **)(*param_1 + 0x118))(param_1,*(undefined4 *)param_4[1]);
      return -2;
    }
    if (iVar2 == 0) {
      (**(code **)(*param_1 + 0x110))(param_1,*(undefined1 *)param_4[1]);
      return -3;
    }
    iVar3 = iVar2 + -3;
    bVar1 = iVar2 < 3;
    iVar2 = iVar3;
    if (bVar1) {
      return iVar3;
    }
LAB_100814965:
    if (8 < iVar2) goto LAB_10081497b;
    uVar4 = 0;
  }
  FUN_1008146e0(param_1,uVar4,iVar2,param_4);
LAB_10081497b:
  return iVar2 + -9;
}

