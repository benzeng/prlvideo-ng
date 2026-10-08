
int FUN_10081c2c0(undefined8 param_1,int param_2,undefined8 param_3,long *param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CAbstractTask::qt_metacall();
  if (iVar1 < 0) {
    return iVar1;
  }
  if (param_2 == 0xc) {
    if (iVar1 < 4) {
      *(undefined4 *)*param_4 = 0xffffffff;
    }
    goto switchD_10081c313_default;
  }
  if (param_2 != 0) {
    return iVar1;
  }
  switch(iVar1) {
  case 0:
    FUN_100285a70(param_1);
    break;
  case 1:
    FUN_100285b30(param_1);
    break;
  case 2:
    uVar2 = FUN_1002855d0(param_1);
    goto LAB_10081c33b;
  case 3:
    uVar2 = FUN_1002856b0(param_1);
LAB_10081c33b:
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = uVar2;
    }
  }
switchD_10081c313_default:
  return iVar1 + -4;
}

