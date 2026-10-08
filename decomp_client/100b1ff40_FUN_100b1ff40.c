
ulong FUN_100b1ff40(long param_1)

{
  return *(ulong *)(param_1 + 0x20) /
         *(ulong *)(*(long *)(**(long **)(param_1 + 0x38) + -0x18) + 0x38 +
                   (long)*(long **)(param_1 + 0x38));
}

