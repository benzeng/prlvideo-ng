
ulong FUN_100adc6d0(long param_1,int param_2)

{
  ulong uVar1;
  
  if (*(uint *)(param_1 + 0x800) != 0) {
    uVar1 = 0;
    do {
      if (*(int *)(*(long *)(param_1 + 0x808) + uVar1 * 4) == param_2) {
        return uVar1 & 0xffffffff;
      }
      uVar1 = uVar1 + 1;
    } while ((uint)uVar1 < *(uint *)(param_1 + 0x800));
  }
  return 0x7fffffff;
}

