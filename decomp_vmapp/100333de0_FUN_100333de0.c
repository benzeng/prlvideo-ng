
void FUN_100333de0(long param_1,int param_2)

{
  if ((param_2 == 0) || (*(int *)(param_1 + 0xc) == 0)) {
    *(ulong *)(param_1 + 0x188) =
         *(ulong *)(param_1 + 0x188) | *(ulong *)(**(long **)(param_1 + 400) + 0x3080);
  }
  *(int *)(param_1 + 0xc) = param_2;
  return;
}

