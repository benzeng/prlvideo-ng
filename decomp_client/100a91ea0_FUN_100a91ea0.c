
void FUN_100a91ea0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_102281968;
  if ((long *)param_1[2] != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100a91ebb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1[2] + 8))();
    return;
  }
  return;
}

