
long FUN_100b1ffb0(long param_1)

{
  return (ulong)*(uint *)(param_1 + 0x10) *
         *(long *)(*(long *)(**(long **)(param_1 + 0x38) + -0x18) + 0x38 +
                  (long)*(long **)(param_1 + 0x38));
}

