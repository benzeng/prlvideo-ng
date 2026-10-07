
void FUN_10033d3c0(long param_1,long param_2)

{
  FUN_10038e0c0(param_1 + 0x1b8);
  FUN_10038e0c0(param_1 + 0x1c8,param_2 + 0x20);
  FUN_10038e0c0(param_1 + 0x1d8,param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x1e8) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x1ec) = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x1f0) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 500) = *(undefined4 *)(param_2 + 0x40);
  *(ulong *)(param_1 + 0x188) =
       *(ulong *)(param_1 + 0x188) | *(ulong *)(**(long **)(param_1 + 400) + 0x3050);
  return;
}

