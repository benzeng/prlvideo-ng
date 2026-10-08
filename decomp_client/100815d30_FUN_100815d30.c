
void FUN_100815d30(long *param_1,int param_2,undefined4 param_3,long *param_4)

{
  int iVar1;
  int *piVar2;
  
  if (param_2 == 0xc) {
    switch(param_3) {
    case 1:
      if (*(int *)param_4[1] == 0) {
        *(undefined4 *)*param_4 = 2;
      }
      else {
        *(undefined4 *)*param_4 = 0xffffffff;
      }
      break;
    case 2:
      if (*(int *)param_4[1] == 0) {
        *(undefined4 *)*param_4 = 2;
      }
      else {
        *(undefined4 *)*param_4 = 0xffffffff;
      }
      break;
    case 3:
      if (*(int *)param_4[1] == 0) {
        *(undefined4 *)*param_4 = 2;
      }
      else {
        *(undefined4 *)*param_4 = 0xffffffff;
      }
      break;
    case 4:
      if (*(int *)param_4[1] == 0) {
        if (DAT_102274888 == 0) {
          DAT_102274888 = FUN_100613da0("CLicenseManager::DialogType",0xffffffffffffffff,1);
        }
        piVar2 = (int *)*param_4;
        iVar1 = DAT_102274888;
        goto LAB_100815ebe;
      }
    default:
      *(undefined4 *)*param_4 = 0xffffffff;
    }
  }
  else {
    if (param_2 != 0) {
      return;
    }
    switch(param_3) {
    case 0:
                    /* WARNING: Could not recover jumptable at 0x000100815da0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x80))();
      return;
    case 1:
      FUN_1002455d0(param_1,*(undefined4 *)param_4[1]);
      return;
    case 2:
      FUN_1002456f0(param_1,*(undefined4 *)param_4[1]);
      return;
    case 3:
      FUN_100245ac0(param_1,*(undefined4 *)param_4[1]);
      return;
    case 4:
      FUN_100245ec0(param_1,*(undefined4 *)param_4[1],param_4[2],*(undefined4 *)param_4[3]);
      return;
    case 5:
      FUN_100245ba0();
      return;
    case 6:
      iVar1 = FUN_1002454d0();
      break;
    case 7:
      iVar1 = FUN_100245630();
      break;
    case 8:
      iVar1 = FUN_100245740();
      break;
    case 9:
      iVar1 = FUN_100245c00();
      break;
    case 10:
      iVar1 = FUN_100246010();
      break;
    default:
      return;
    }
    piVar2 = (int *)*param_4;
    if (piVar2 == (int *)0x0) {
      return;
    }
LAB_100815ebe:
    *piVar2 = iVar1;
  }
  return;
}

