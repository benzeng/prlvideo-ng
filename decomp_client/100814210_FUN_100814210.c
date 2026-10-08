
int FUN_100814210(long *param_1,int param_2,undefined8 param_3,undefined8 *param_4)

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
LAB_10081427b:
    iVar2 = iVar2 + -3;
LAB_10081427f:
    if (param_2 != 0xc) {
      if (param_2 != 0) {
        return iVar2;
      }
      goto LAB_1008142d5;
    }
    if (6 < iVar2) goto LAB_1008142eb;
    uVar4 = 0xc;
  }
  else {
    if (param_2 != 0) goto LAB_10081427f;
    if (2 < iVar2) goto LAB_10081427b;
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
LAB_1008142d5:
    if (6 < iVar2) goto LAB_1008142eb;
    uVar4 = 0;
  }
  FUN_100814080(param_1,uVar4,iVar2,param_4);
LAB_1008142eb:
  return iVar2 + -7;
}

