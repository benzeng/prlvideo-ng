
void FUN_10040f130(long param_1)

{
  long lVar1;
  
  *(undefined4 *)(*(long *)(param_1 + 8) + 100) = *(undefined4 *)(*(long *)(param_1 + 8) + 0x68);
  if (*(long *)(param_1 + 0x60) != 0) {
    _AudioConverterReset();
  }
  lVar1 = *(long *)(param_1 + 0x68);
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 100) = *(undefined4 *)(lVar1 + 0x68);
  }
  return;
}

