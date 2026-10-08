
int FUN_10081e050(long *param_1,int param_2,undefined8 param_3,long *param_4)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  iVar1 = CAbstractTask::qt_metacall();
  if (iVar1 < 0) {
    return iVar1;
  }
  if (param_2 == 0xc) {
    if (iVar1 < 5) {
      *(undefined4 *)*param_4 = 0xffffffff;
    }
    goto switchD_10081e0a7_default;
  }
  if (param_2 != 0) {
    return iVar1;
  }
  switch(iVar1) {
  case 0:
    lVar3 = *param_1;
    uVar2 = *(undefined4 *)param_4[1];
    goto LAB_10081e0bc;
  case 1:
    lVar3 = *param_1;
    uVar2 = 0x80000275;
LAB_10081e0bc:
    (**(code **)(lVar3 + 0x78))(param_1,uVar2);
    break;
  case 2:
    FUN_100292e90(param_1,*(undefined4 *)param_4[1]);
    break;
  case 3:
    FUN_100292ff0(param_1);
    break;
  case 4:
    uVar2 = FUN_1002929d0(param_1);
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = uVar2;
    }
  }
switchD_10081e0a7_default:
  return iVar1 + -5;
}

