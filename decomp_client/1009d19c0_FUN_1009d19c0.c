
ulong FUN_1009d19c0(long param_1)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = (int)((ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8)) >> 3);
  if (0 < iVar1) {
    uVar2 = 0;
    do {
      if (*(int *)(**(long **)(*(long *)(param_1 + 8) + uVar2 * 8) + 0xc) == 2) {
        return uVar2 & 0xffffffff;
      }
      uVar2 = uVar2 + 1;
    } while ((long)uVar2 < (long)iVar1);
  }
  return 0xffffffff;
}

