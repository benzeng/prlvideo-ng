
void FUN_100038850(long param_1)

{
  if (((*(long *)(param_1 + 0x20) != 0) && (*(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) &&
     (*(long **)(param_1 + 0x28) != (long *)0x0)) {
    (**(code **)(**(long **)(param_1 + 0x28) + 0x20))();
  }
  return;
}

