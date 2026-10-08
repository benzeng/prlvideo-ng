
undefined1 FUN_1000b7b70(long param_1)

{
  undefined1 uVar1;
  undefined4 *in_R8;
  
  if (*(char *)(param_1 + 0x2c) != '\0') {
    uVar1 = FUN_1000d0260(*(undefined8 *)(param_1 + 0x40));
    return uVar1;
  }
  *in_R8 = 0xffffffff;
  return 1;
}

