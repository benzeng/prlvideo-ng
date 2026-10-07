
void FUN_10033d540(long param_1,ulong param_2,undefined8 param_3)

{
  FUN_10038df90(param_1 + 0x270 + (param_2 & 0xffffffff) * 0x40,param_3);
  *(ulong *)(param_1 + 0x188) =
       *(ulong *)(param_1 + 0x188) | *(ulong *)(**(long **)(param_1 + 400) + 0x3018);
  return;
}

