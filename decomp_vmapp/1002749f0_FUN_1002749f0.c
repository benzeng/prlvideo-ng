
void FUN_1002749f0(long param_1)

{
  FUN_1002ef6d0(*(undefined8 *)(param_1 + -0x158));
  FUN_1007d8b40(param_1 + 0x54);
  if (*(long **)(param_1 + -0x10) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100274a20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + -0x10) + 0x40))();
    return;
  }
  return;
}

