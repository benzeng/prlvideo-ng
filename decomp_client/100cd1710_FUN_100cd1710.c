
undefined8 FUN_100cd1710(long param_1)

{
  FUN_100cd05d0(param_1,4);
  if ((((*(char *)(param_1 + 0x68) != '\0') && (*(uint *)(param_1 + 0x20) < 7)) &&
      ((0x46U >> (*(uint *)(param_1 + 0x20) & 0x1f) & 1) != 0)) && (*(int *)(param_1 + 0x18) == 0))
  {
    *(byte *)(param_1 + 0x43) = *(byte *)(param_1 + 0x43) | 0x80;
  }
  return 0;
}

