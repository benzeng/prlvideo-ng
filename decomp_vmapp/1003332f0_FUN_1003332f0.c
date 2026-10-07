
void FUN_1003332f0(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x184) = param_2;
  *(ulong *)(param_1 + 0x188) =
       *(ulong *)(param_1 + 0x188) | *(ulong *)(**(long **)(param_1 + 400) + 0x3010);
  return;
}

