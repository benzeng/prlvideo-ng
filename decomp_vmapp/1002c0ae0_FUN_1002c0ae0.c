
undefined8 FUN_1002c0ae0(long param_1)

{
  ulong uVar1;
  
  uVar1 = (ulong)*(uint *)(param_1 + 0x20);
  if (*(uint *)(param_1 + 0x20) == 1) {
    *(undefined4 *)(param_1 + 0x20) = 2;
    uVar1 = 2;
  }
  return CONCAT71((int7)(uVar1 >> 8),(int)uVar1 == 2);
}

