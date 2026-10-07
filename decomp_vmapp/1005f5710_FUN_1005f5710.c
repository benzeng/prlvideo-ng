
ulong FUN_1005f5710(long param_1,int param_2)

{
  return (ulong)(uint)(param_2 * 1000) /
         ((ulong)(uint)(*(int *)(param_1 + 8) << 10) / *(ulong *)(param_1 + 0x20));
}

