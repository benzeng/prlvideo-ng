
ulong FUN_100c98720(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 8) != 0) {
    return (ulong)(*(long *)(param_1 + 0x10) != 0);
  }
  uVar1 = FUN_100c60800(*(undefined8 *)(param_1 + 0x10));
  return uVar1;
}

