
void FUN_100be4630(long param_1)

{
  if (*(int *)(param_1 + 0x2a4) == 0) {
    *(undefined4 *)(param_1 + 0x2a4) = 1;
  }
  *(undefined4 *)(param_1 + 0x3c) = 0;
                    /* WARNING: Could not recover jumptable at 0x000100be4653. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 8) + 0x50))();
  return;
}

