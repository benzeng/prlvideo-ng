
void FUN_10040e7a0(long param_1)

{
  *(undefined4 *)(*(long *)(param_1 + 8) + 100) = *(undefined4 *)(*(long *)(param_1 + 8) + 0x68);
  if (*(long *)(param_1 + 0x60) != 0) {
    _AudioConverterReset();
    return;
  }
  return;
}

