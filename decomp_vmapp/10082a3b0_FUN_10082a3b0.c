
void FUN_10082a3b0(long param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x20);
  if (piVar1 != (int *)0x0) {
    if (*(void **)(piVar1 + 2) != (void *)0x0) {
      _OPENSSL_cleanse(*(void **)(piVar1 + 2),(long)*piVar1);
    }
    FUN_1008a83a0(piVar1);
    return;
  }
  return;
}

