
void FUN_1007dc890(int *param_1)

{
  _free(*(void **)(param_1 + 4));
  param_1[4] = 0;
  param_1[5] = 0;
  if (-1 < *param_1) {
    _close(*param_1);
  }
  *param_1 = -1;
  return;
}

