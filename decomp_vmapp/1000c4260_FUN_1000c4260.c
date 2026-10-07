
undefined8 FUN_1000c4260(long param_1,long param_2,ulong param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((((*(ushort *)(param_2 + 4) == *(ushort *)(param_1 + 10)) &&
       (*(ulong *)(param_1 + 0x148) <= param_3)) &&
      (param_3 < *(ulong *)(param_1 + 0x148) + *(long *)(param_1 + 0x150))) &&
     (((*(ushort *)(param_2 + 4) & 3) != 3 ||
      (uVar1 = 0, *(long *)(param_2 + 6) == *(long *)(param_1 + 0x140))))) {
    uVar1 = 1;
  }
  return uVar1;
}

