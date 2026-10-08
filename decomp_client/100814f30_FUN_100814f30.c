
int FUN_100814f30(undefined8 param_1,int param_2,undefined8 param_3,undefined8 *param_4)

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
    if (param_2 != 0) goto LAB_100814f95;
    if (iVar1 < 6) {
      FUN_100814c00(param_1,0,iVar1,param_4);
      return iVar1 + -6;
    }
  }
  iVar1 = iVar1 + -6;
LAB_100814f95:
  if (param_2 == 0xc) {
    if (iVar1 < 5) {
      *(undefined4 *)*param_4 = 0xffffffff;
    }
  }
  else {
    if (param_2 != 0) {
      return iVar1;
    }
    switch(iVar1) {
    case 0:
      FUN_10023ded0(param_1);
      break;
    case 1:
      FUN_10023e5e0(param_1);
      break;
    case 2:
      FUN_10023e180(param_1);
      break;
    case 3:
      FUN_10023e370(param_1);
      break;
    case 4:
      FUN_10023d400(param_1,*(undefined1 *)param_4[1]);
    }
  }
  return iVar1 + -5;
}

