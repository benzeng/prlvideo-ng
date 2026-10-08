
void FUN_100a38100(long param_1)

{
  if (*(long **)(param_1 + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x10) + 8))();
    if (*(long **)(param_1 + 0x10) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x10) + 0x48))();
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100a38141. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}

