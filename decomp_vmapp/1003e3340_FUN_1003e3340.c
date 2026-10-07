
void FUN_1003e3340(long *param_1)

{
  if ((*(byte *)(param_1[0xb] + 1) & 2) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001003e3352. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x108))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001003e3359. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb8))();
  return;
}

