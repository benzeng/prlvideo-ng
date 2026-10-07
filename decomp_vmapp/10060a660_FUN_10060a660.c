
void FUN_10060a660(long param_1)

{
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    _free(*(void **)(param_1 + 8));
    *(undefined8 *)(param_1 + 8) = 0;
  }
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0xffffffff00000000;
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  return;
}

