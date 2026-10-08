
void FUN_100db6d70(int *param_1)

{
  if (*param_1 != -1) {
    _close(*param_1);
    *param_1 = -1;
  }
  return;
}

