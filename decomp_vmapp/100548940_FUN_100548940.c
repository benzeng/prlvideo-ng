
void FUN_100548940(long *param_1,undefined4 param_2)

{
  FUN_1005482e0(param_1,param_1[4],param_1[2],param_2);
  FUN_1005482e0(param_1,param_1[5],param_1[3],param_2);
                    /* WARNING: Could not recover jumptable at 0x000100548980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))(param_1,0);
  return;
}

