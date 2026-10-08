
void FUN_100382d30(long *param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 10) = param_2;
                    /* WARNING: Could not recover jumptable at 0x000100382d3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa8))();
  return;
}

