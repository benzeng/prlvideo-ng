
long FUN_10093cac5(long param_1,int param_2)

{
  long lVar1;
  int local_14;
  
  if (*(int *)(param_1 + 0x118) != 0) {
    for (local_14 = 0; local_14 < *(int *)(param_1 + 0x118); local_14 = local_14 + 1) {
      lVar1 = *(long *)(*(long *)(param_1 + 0x110) + (long)local_14 * 8);
      if (*(int *)(lVar1 + 0x5c) == param_2) {
        return lVar1;
      }
    }
  }
  return 0;
}

