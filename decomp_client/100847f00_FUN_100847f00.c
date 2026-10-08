
void FUN_100847f00(long *param_1,int param_2,int param_3,undefined8 *param_4)

{
  if (param_2 == 0xc) {
    if ((param_3 == 2) && (*(int *)param_4[1] == 0)) {
      if (DAT_102274888 == 0) {
        DAT_102274888 = FUN_100613da0("CLicenseManager::DialogType",0xffffffffffffffff,1);
      }
      *(int *)*param_4 = DAT_102274888;
    }
    else {
      *(undefined4 *)*param_4 = 0xffffffff;
    }
  }
  else if (param_2 == 0) {
    switch(param_3) {
    case 0:
      FUN_100639c70(param_1,param_4[1]);
      return;
    case 1:
      FUN_10063a010(param_1,param_4[1]);
      return;
    case 2:
      FUN_10063a630(param_1,*(undefined4 *)param_4[1],param_4[2],*(undefined4 *)param_4[3]);
      return;
    case 3:
                    /* WARNING: Could not recover jumptable at 0x000100847fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1b8))();
      return;
    }
  }
  return;
}

