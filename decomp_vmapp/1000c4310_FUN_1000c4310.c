
undefined8 FUN_1000c4310(long param_1,long param_2,ulong param_3)

{
  undefined8 uVar1;
  
  if (((*(short *)(param_2 + 4) != *(short *)(param_1 + 10)) ||
      (param_3 < *(ulong *)(param_1 + 0x148))) ||
     (uVar1 = 1, *(ulong *)(param_1 + 0x148) + *(long *)(param_1 + 0x150) <= param_3)) {
    uVar1 = 0;
  }
  return uVar1;
}

