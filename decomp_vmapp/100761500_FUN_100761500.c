
void FUN_100761500(int *param_1)

{
  if (*param_1 != -1) {
    _close(*param_1);
    *param_1 = -1;
  }
  return;
}

