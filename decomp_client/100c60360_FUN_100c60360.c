
ulong FUN_100c60360(int *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long local_28;
  
  uVar3 = 0xffffffff;
  if (param_1 != (int *)0x0) {
    if (*(int **)(param_1 + 6) == (int *)0x0) {
      if (0 < (long)*param_1) {
        uVar2 = 0;
        do {
          if (*(long *)(*(long *)(param_1 + 2) + uVar2 * 8) == param_2) {
            return uVar2 & 0xffffffff;
          }
          uVar2 = uVar2 + 1;
        } while ((long)uVar2 < (long)*param_1);
      }
    }
    else {
      local_28 = param_2;
      if (param_1[4] == 0) {
        _qsort(*(void **)(param_1 + 2),(long)*param_1,8,*(int **)(param_1 + 6));
        param_1[4] = 1;
      }
      if ((param_2 != 0) &&
         (lVar1 = FUN_100bf7f50(&local_28,*(undefined8 *)(param_1 + 2),*param_1,8,
                                *(undefined8 *)(param_1 + 6),2), lVar1 != 0)) {
        uVar3 = (ulong)(lVar1 - *(long *)(param_1 + 2)) >> 3 & 0xffffffff;
      }
    }
  }
  return uVar3;
}

