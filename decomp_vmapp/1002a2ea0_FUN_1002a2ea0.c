
void FUN_1002a2ea0(long *param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x0001002a2eba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))(param_1,0,1);
  return;
}

