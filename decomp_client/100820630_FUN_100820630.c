
void FUN_100820630(undefined8 param_1,int param_2,undefined4 param_3,long *param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if (param_2 != 0xc) {
    if (param_2 != 0) {
      return;
    }
    switch(param_3) {
    case 0:
      FUN_1002ac580(param_1,*(undefined4 *)param_4[1],*(undefined8 *)param_4[2]);
      return;
    case 1:
      FUN_1002ac7e0(param_1,*(undefined4 *)param_4[1]);
      return;
    case 2:
      FUN_1002acdf0(param_1,*(undefined4 *)param_4[1]);
      return;
    case 3:
      FUN_1002acfb0(param_1,*(undefined4 *)param_4[1]);
      return;
    case 4:
      FUN_1002ad090();
      return;
    case 5:
      goto switchD_10082068d_caseD_5;
    case 6:
      uVar1 = FUN_1002ac6a0();
      if ((undefined4 *)*param_4 == (undefined4 *)0x0) {
        return;
      }
      *(undefined4 *)*param_4 = uVar1;
      return;
    case 7:
      uVar1 = FUN_1002ac830();
      if ((undefined4 *)*param_4 == (undefined4 *)0x0) {
        return;
      }
      *(undefined4 *)*param_4 = uVar1;
      return;
    case 8:
      uVar1 = FUN_1002ace40();
      if ((undefined4 *)*param_4 == (undefined4 *)0x0) {
        return;
      }
      *(undefined4 *)*param_4 = uVar1;
      return;
    default:
      return;
    }
  }
  switch(param_3) {
  case 0:
    if (*(int *)param_4[1] != 0) {
      if (*(int *)param_4[1] == 1) {
        uVar1 = FUN_100820a40();
        *(undefined4 *)*param_4 = uVar1;
        return;
      }
      goto switchD_100820657_default;
    }
    puVar2 = (undefined4 *)*param_4;
    break;
  case 1:
    puVar2 = (undefined4 *)*param_4;
    if (*(int *)param_4[1] != 0) {
      *puVar2 = 0xffffffff;
      return;
    }
    break;
  case 2:
    puVar2 = (undefined4 *)*param_4;
    if (*(int *)param_4[1] != 0) {
      *puVar2 = 0xffffffff;
      return;
    }
    break;
  case 3:
    puVar2 = (undefined4 *)*param_4;
    if (*(int *)param_4[1] != 0) {
      *puVar2 = 0xffffffff;
      return;
    }
    break;
  default:
switchD_100820657_default:
    *(undefined4 *)*param_4 = 0xffffffff;
    return;
  }
  *puVar2 = 2;
  return;
switchD_10082068d_caseD_5:
  uVar1 = FUN_1002ac310();
  if ((undefined4 *)*param_4 == (undefined4 *)0x0) {
    return;
  }
  *(undefined4 *)*param_4 = uVar1;
  return;
}

