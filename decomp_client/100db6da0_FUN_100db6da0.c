
void FUN_100db6da0(int *param_1)

{
  if (*param_1 != -1) {
    _close(*param_1);
    *param_1 = -1;
  }
  return;
}

