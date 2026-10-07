
void FUN_1007d8af0(int *param_1)

{
  if (-1 < *param_1) {
    _close(*param_1);
  }
  if (-1 < param_1[1]) {
    _close(param_1[1]);
  }
  param_1[0] = -1;
  param_1[1] = -1;
  return;
}

