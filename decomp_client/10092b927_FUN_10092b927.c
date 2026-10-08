
long FUN_10092b927(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  int local_c;
  
  plVar1 = *(long **)(*(long *)(param_1 + 0x30) + 0x10);
  if ((int)plVar1[1] != 0) {
    for (local_c = 0; local_c < (int)plVar1[1]; local_c = local_c + 1) {
      lVar2 = *(long *)(*plVar1 + (long)local_c * 8);
      if (*(long *)(lVar2 + 8) == param_2) {
        return lVar2;
      }
    }
  }
  return 0;
}

