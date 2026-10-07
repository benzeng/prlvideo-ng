
ulong FUN_1006978d0(long param_1)

{
  return *(ulong *)(param_1 + 0x20) /
         *(ulong *)(*(long *)(**(long **)(param_1 + 0x38) + -0x18) + 0x38 +
                   (long)*(long **)(param_1 + 0x38));
}

