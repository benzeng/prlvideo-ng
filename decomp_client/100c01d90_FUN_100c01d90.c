
void FUN_100c01d90(long param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x20);
  if (piVar1 != (int *)0x0) {
    if (*(void **)(piVar1 + 2) != (void *)0x0) {
      _OPENSSL_cleanse(*(void **)(piVar1 + 2),(long)*piVar1);
    }
    FUN_100c83920(piVar1);
    return;
  }
  return;
}

