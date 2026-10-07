
undefined8 FUN_10088bdd0(long param_1,int param_2)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x70) & 0xfffffffffffffeff;
  if (param_2 == 0) {
    uVar1 = *(ulong *)(param_1 + 0x70) | 0x100;
  }
  *(ulong *)(param_1 + 0x70) = uVar1;
  return 1;
}

