
void FUN_10003d6e0(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x18) + 0x90))();
                    /* WARNING: Could not recover jumptable at 0x00010003d707. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_1021e1c68)(DAT_102311d98,PTR_s_assignPort__1022699c0,0);
    return;
  }
  return;
}

