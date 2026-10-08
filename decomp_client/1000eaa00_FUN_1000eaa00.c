
void FUN_1000eaa00(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x0001000eaa26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x58))
            (*(long **)(param_1 + 8),lVar1 + 0x20,*(undefined4 *)(lVar1 + 0x1c));
  return;
}

