
void FUN_100333220(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  *(undefined4 *)(param_1 + 0x198) = param_2;
  *(undefined4 *)(param_1 + 0x19c) = param_3;
  *(undefined4 *)(param_1 + 0x1a0) = param_4;
  *(undefined4 *)(param_1 + 0x1a4) = param_5;
  *(ulong *)(param_1 + 0x188) =
       *(ulong *)(param_1 + 0x188) | *(ulong *)(**(long **)(param_1 + 400) + 0x3000);
  return;
}

