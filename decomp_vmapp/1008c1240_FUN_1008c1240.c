
undefined8 FUN_1008c1240(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x18) | param_2;
  uVar2 = uVar1 | 0x80;
  if ((param_2 & 0x780) == 0) {
    uVar2 = uVar1;
  }
  *(ulong *)(param_1 + 0x18) = uVar2;
  return 1;
}

