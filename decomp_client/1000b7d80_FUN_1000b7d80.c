
undefined8 FUN_1000b7d80(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x2c) == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_1000c6cc0(*(undefined8 *)(param_1 + 0x40));
  }
  return uVar1;
}

