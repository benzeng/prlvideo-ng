
void FUN_10083a620(long *param_1,int param_2,int param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  
  if (param_2 == 0xc) {
    if ((param_3 == 0) && (*(int *)param_4[1] == 0)) {
      uVar1 = FUN_1003dff90();
      *(undefined4 *)*param_4 = uVar1;
    }
    else {
      *(undefined4 *)*param_4 = 0xffffffff;
    }
  }
  else if (param_2 == 0) {
    switch(param_3) {
    case 0:
                    /* WARNING: Could not recover jumptable at 0x00010083a678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1e0))(param_1,*(undefined8 *)param_4[1]);
      return;
    case 1:
                    /* WARNING: Could not recover jumptable at 0x00010083a694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1d0))();
      return;
    case 2:
                    /* WARNING: Could not recover jumptable at 0x00010083a6a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1d8))();
      return;
    case 3:
      FUN_1004b7f80();
      return;
    }
  }
  return;
}

