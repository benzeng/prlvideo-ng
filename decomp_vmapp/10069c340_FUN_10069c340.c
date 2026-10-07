
void FUN_10069c340(long *param_1)

{
  *(undefined4 *)((long)param_1 + 0x14) = 0xffffffff;
  param_1 = (long *)*param_1;
                    /* WARNING: Could not recover jumptable at 0x00010069c35e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)((long)param_1 + *(long *)(*param_1 + -0x18)) + 0x1a0))
            ((long)param_1 + *(long *)(*param_1 + -0x18));
  return;
}

