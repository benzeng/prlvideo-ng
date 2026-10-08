
void FUN_10081d0e0(long *param_1,int param_2,int param_3,long *param_4)

{
  int iVar1;
  int *piVar2;
  
  if (param_2 == 0xc) {
    if ((param_3 != 1) || (*(int *)param_4[1] != 0)) {
      *(undefined4 *)*param_4 = 0xffffffff;
      return;
    }
    if (DAT_102274888 == 0) {
      DAT_102274888 = FUN_100613da0("CLicenseManager::DialogType",0xffffffffffffffff,1);
    }
    piVar2 = (int *)*param_4;
    iVar1 = DAT_102274888;
  }
  else {
    if (param_2 != 0) {
      return;
    }
    switch(param_3) {
    case 0:
                    /* WARNING: Could not recover jumptable at 0x00010081d132. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x80))();
      return;
    case 1:
      FUN_10028c250(param_1,*(undefined4 *)param_4[1],param_4[2],*(undefined4 *)param_4[3]);
      return;
    case 2:
      iVar1 = FUN_10028b570();
      break;
    case 3:
      iVar1 = FUN_10028bfb0();
      break;
    default:
      return;
    }
    piVar2 = (int *)*param_4;
    if (piVar2 == (int *)0x0) {
      return;
    }
  }
  *piVar2 = iVar1;
  return;
}

