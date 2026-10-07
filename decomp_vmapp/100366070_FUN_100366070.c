
ulong FUN_100366070(long param_1,uint param_2,uint param_3)

{
  ulong uVar1;
  
  uVar1 = 0;
  if (param_2 != 0) {
    do {
      if (param_3 <= *(uint *)(param_1 + uVar1 * 4)) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
    } while ((uint)uVar1 < param_2);
    uVar1 = (ulong)param_2;
  }
  return uVar1;
}

