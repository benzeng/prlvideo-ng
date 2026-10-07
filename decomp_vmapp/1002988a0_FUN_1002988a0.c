
ulong FUN_1002988a0(long param_1)

{
  ulong uVar1;
  
  uVar1 = 0x10000;
  if (*(char *)(param_1 + 0xb) != '\0' || *(char *)(param_1 + 3) != '\0') {
    uVar1 = (ulong)CONCAT11(*(char *)(param_1 + 0xb),*(char *)(param_1 + 3));
  }
  return uVar1;
}

