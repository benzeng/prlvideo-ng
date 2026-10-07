
long FUN_1003e3310(long param_1)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x60))(*(long **)(param_1 + 0x30),0,2);
  return uVar1 / *(ulong *)(param_1 + 0xd0) - 1;
}

