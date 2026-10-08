
void FUN_1009a8340(long *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (1 < DAT_10230ffd0) {
    FUN_100df99c0("","TransporterWizardModel",2,"Migration progress notify %d, %d, %d",param_2,
                  param_3,param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x0001009a83b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x108))(param_1,param_2,param_3,param_4);
  return;
}

