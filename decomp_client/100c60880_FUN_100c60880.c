
void FUN_100c60880(int *param_1)

{
  if ((param_1 != (int *)0x0) && (param_1[4] == 0)) {
    _qsort(*(void **)(param_1 + 2),(long)*param_1,8,*(int **)(param_1 + 6));
    param_1[4] = 1;
  }
  return;
}

