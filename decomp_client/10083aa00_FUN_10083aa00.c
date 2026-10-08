
void FUN_10083aa00(long *param_1,int param_2,int param_3,undefined8 *param_4)

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
    if (param_3 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00010083aa4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1d8))();
      return;
    }
    if (param_3 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010083aa3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1d0))();
      return;
    }
    if (param_3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010083aa6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1e0))(param_1,*(undefined8 *)param_4[1]);
      return;
    }
  }
  return;
}

