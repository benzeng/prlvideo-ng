
void FUN_100cdeb10(long param_1)

{
  if (*(int *)(param_1 + 0x10) == 0) {
    if (DAT_102311940 != (long *)0x0) {
      (**(code **)(*DAT_102311940 + 0x20))();
    }
    DAT_102311940 = (long *)0x0;
  }
  return;
}

