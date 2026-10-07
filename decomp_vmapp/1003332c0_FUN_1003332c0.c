
void FUN_1003332c0(long param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 0x164 + (ulong)param_2 * 4) = param_3;
  *(undefined4 *)(param_1 + 0x174 + (ulong)param_2 * 4) = param_4;
  *(ulong *)(param_1 + 0x188) =
       *(ulong *)(param_1 + 0x188) | *(ulong *)(**(long **)(param_1 + 400) + 0x3010);
  return;
}

