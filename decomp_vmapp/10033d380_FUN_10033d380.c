
void FUN_10033d380(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined8 *)(param_1 + 0xbb58) = param_2[1];
  *(undefined8 *)(param_1 + 0xbb50) = uVar1;
  *(ulong *)(param_1 + 0x188) =
       *(ulong *)(param_1 + 0x188) | *(ulong *)(**(long **)(param_1 + 400) + 0x570);
  return;
}

