
undefined8 FUN_1008b1d80(int param_1,long *param_2)

{
  int *piVar1;
  
  if ((((param_1 == 2) && (piVar1 = *(int **)(*param_2 + 0x18), piVar1 != (int *)0x0)) &&
      (*piVar1 == 4)) && (piVar1 = *(int **)(piVar1 + 2), piVar1 != (int *)0x0)) {
    _OPENSSL_cleanse(*(void **)(piVar1 + 2),(long)*piVar1);
  }
  return 1;
}

