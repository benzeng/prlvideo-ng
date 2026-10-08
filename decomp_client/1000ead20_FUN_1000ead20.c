
void FUN_1000ead20(long param_1)

{
  if (*(char *)(param_1 + 0xc) != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0xc) = 1;
  FUN_1000c6550(*(undefined8 *)(param_1 + 0x10));
  return;
}

