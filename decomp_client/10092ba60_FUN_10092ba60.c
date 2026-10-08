
long FUN_10092ba60(long param_1,long param_2,int param_3)

{
  long *plVar1;
  long lVar2;
  int local_c;
  
  plVar1 = *(long **)(*(long *)(param_1 + 0x30) + 0x10);
  if ((int)plVar1[1] != 0) {
    for (local_c = 0; local_c < (int)plVar1[1]; local_c = local_c + 1) {
      lVar2 = *(long *)(*plVar1 + (long)local_c * 8);
      if (((*(long *)(lVar2 + 0x20) != 0) || (*(long *)(lVar2 + 8) == 0)) &&
         (*(long *)(lVar2 + 0x10) == param_2)) {
        if ((param_3 != 0) && (*(int *)(lVar2 + 0x38) != 0)) {
          return lVar2;
        }
        if ((param_3 == 0) && (*(int *)(lVar2 + 0x38) == 0)) {
          return lVar2;
        }
      }
    }
  }
  return 0;
}

