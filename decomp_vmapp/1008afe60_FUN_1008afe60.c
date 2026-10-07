
void FUN_1008afe60(int *param_1)

{
  if (param_1 == (int *)0x0) {
    return;
  }
  if (*(void **)(param_1 + 2) != (void *)0x0) {
    if ((*(byte *)(param_1 + 4) & 0x10) == 0) {
      _OPENSSL_cleanse(*(void **)(param_1 + 2),(long)*param_1);
      if (*(long *)(param_1 + 2) == 0) goto LAB_1008afe99;
    }
    if ((*(byte *)(param_1 + 4) & 0x10) == 0) {
      FUN_10081e1a0();
    }
  }
LAB_1008afe99:
  FUN_10081e1a0(param_1);
  return;
}

