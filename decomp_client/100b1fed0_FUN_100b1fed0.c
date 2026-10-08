
long FUN_100b1fed0(long param_1,ulong param_2)

{
  return (param_2 & 0xffffffff) *
         *(long *)(*(long *)(**(long **)(param_1 + 0x38) + -0x18) + 0x38 +
                  (long)*(long **)(param_1 + 0x38)) * (ulong)*(uint *)(param_1 + 0x10) +
         *(long *)(param_1 + 0x20);
}

