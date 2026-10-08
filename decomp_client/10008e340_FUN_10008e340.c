
void FUN_10008e340(long param_1)

{
  if ((int)(*(long **)(param_1 + 0x20))[2] == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010008e352. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x20) + 0x68))();
    return;
  }
  return;
}

