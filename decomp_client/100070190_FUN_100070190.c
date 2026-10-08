
void FUN_100070190(long param_1)

{
  if (*(long *)(param_1 + 0x50) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001000701a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_1021e1c68)(*(long *)(param_1 + 0x50),PTR_s_release_1022699b8);
    return;
  }
  return;
}

