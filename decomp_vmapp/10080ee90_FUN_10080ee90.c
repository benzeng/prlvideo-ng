
void FUN_10080ee90(long param_1)

{
  if (*(int *)(param_1 + 0x2a4) == 0) {
    *(undefined4 *)(param_1 + 0x2a4) = 1;
  }
  *(undefined4 *)(param_1 + 0x3c) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010080eeb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 8) + 0x50))();
  return;
}

