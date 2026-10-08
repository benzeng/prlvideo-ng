
undefined8 FUN_100c020b0(long param_1,long param_2)

{
  FUN_100c01d40(*(long *)(param_1 + 0x28) + 0x20,*(ulong *)(param_2 + 0x10) & 0xfffffffffffffeff);
  FUN_100c6fcb0(param_2,0x100);
  *(code **)(param_2 + 0x28) = FUN_100c022c0;
  return 1;
}

