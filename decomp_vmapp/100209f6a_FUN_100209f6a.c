
long * FUN_100209f6a(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *local_30;
  long *local_10;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0xa8) + (long)*(int *)(param_2 + 4) * 8);
  if (*(long *)(lVar2 + 0x60) == 0) {
    uVar1 = FUN_100209af1(*(undefined8 *)(*(long *)(param_2 + 0x10) + 8));
    *(undefined8 *)(lVar2 + 0x60) = uVar1;
    if (*(long *)(lVar2 + 0x60) == 0) {
      local_30 = (long *)0x0;
    }
    else {
      local_30 = *(long **)(lVar2 + 0x60);
    }
  }
  else {
    local_10 = *(long **)(lVar2 + 0x60);
    do {
      if (local_10[1] == *(long *)(*(long *)(param_2 + 0x10) + 8)) {
        return local_10;
      }
      if (*local_10 == 0) {
        lVar2 = FUN_100209af1(*(undefined8 *)(*(long *)(param_2 + 0x10) + 8));
        *local_10 = lVar2;
        if (*local_10 == 0) {
          return (long *)0x0;
        }
        return (long *)*local_10;
      }
      local_10 = (long *)*local_10;
    } while (local_10 != (long *)0x0);
    local_30 = (long *)0x0;
  }
  return local_30;
}

