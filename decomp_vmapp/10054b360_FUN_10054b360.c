
undefined8 FUN_10054b360(long param_1,uint param_2,int param_3)

{
  int *piVar1;
  
  if (param_3 != 0) {
    piVar1 = (int *)((ulong)param_2 * 4 + *(long *)(param_1 + 0x80));
    do {
      if (*piVar1 != 0) {
        return 1;
      }
      piVar1 = piVar1 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return 0;
}

