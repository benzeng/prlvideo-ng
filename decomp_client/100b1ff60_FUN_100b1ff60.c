
ulong FUN_100b1ff60(long param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(*(long *)(**(long **)(param_1 + 0x38) + -0x18) + 0x38 +
                    (long)*(long **)(param_1 + 0x38));
  return (((((param_2 & 0xffffffff) * uVar1 * (ulong)*(uint *)(param_1 + 0xc)) / uVar1 - 1) -
          *(ulong *)(param_1 + 0x20) / uVar1) + (ulong)*(uint *)(param_1 + 0x10)) /
         (ulong)*(uint *)(param_1 + 0x10);
}

