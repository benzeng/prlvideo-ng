
void FUN_100333260(undefined4 param_1,undefined4 param_2,long param_3)

{
  *(undefined4 *)(param_3 + 0x1a8) = param_1;
  *(undefined4 *)(param_3 + 0x1ac) = param_2;
  *(ulong *)(param_3 + 0x188) =
       *(ulong *)(param_3 + 0x188) | *(ulong *)(**(long **)(param_3 + 400) + 0x3008);
  return;
}

