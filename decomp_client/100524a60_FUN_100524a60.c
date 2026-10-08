
long FUN_100524a60(long param_1,int param_2)

{
  long lVar1;
  
  if (-1 < param_2) {
    lVar1 = *(long *)(param_1 + 0x40);
    if (param_2 < *(int *)(lVar1 + 0xc) - *(int *)(lVar1 + 8)) {
      return *(long *)(*(long *)(param_1 + 0x38) + 0x10 +
                      ((long)*(int *)(lVar1 + 0x10 + ((long)*(int *)(lVar1 + 8) + (long)param_2) * 8
                                     ) + (long)*(int *)(*(long *)(param_1 + 0x38) + 8)) * 8);
    }
  }
  return param_1 + 0x20;
}

