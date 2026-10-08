
int FUN_10083e0c0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  
  iVar1 = QMainWindow::qt_metacall();
  if (iVar1 < 0) {
    return iVar1;
  }
  switch(param_2) {
  case 0:
    if (iVar1 < 1) {
      param_2 = 0;
      goto LAB_10083e0fc;
    }
    break;
  case 1:
  case 2:
  case 3:
  case 0xb:
LAB_10083e0fc:
    FUN_10083df00(param_1,param_2,iVar1,param_4);
    break;
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
    break;
  default:
    goto switchD_10083e0f5_caseD_9;
  case 0xc:
    if (iVar1 < 1) {
      *(undefined4 *)*param_4 = 0xffffffff;
    }
  }
  iVar1 = iVar1 + -1;
switchD_10083e0f5_caseD_9:
  return iVar1;
}

