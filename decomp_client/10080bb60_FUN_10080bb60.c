
int FUN_10080bb60(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = CAbstractProgressOperation::qt_metacall();
  if (-1 < iVar1) {
    switch(param_2) {
    case 1:
      if (iVar1 == 0) {
        param_4 = (undefined8 *)*param_4;
        uVar2 = FUN_1001ee790(param_1);
        *param_4 = uVar2;
      }
      break;
    case 2:
      if (iVar1 == 0) {
        FUN_1001ee7c0(param_1,*(undefined8 *)*param_4);
      }
      break;
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 0xb:
      break;
    default:
      goto switchD_10080bb95_caseD_9;
    }
    iVar1 = iVar1 + -1;
  }
switchD_10080bb95_caseD_9:
  return iVar1;
}

