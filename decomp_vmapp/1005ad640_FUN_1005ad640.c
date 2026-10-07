
void FUN_1005ad640(undefined8 *param_1)

{
  if ((void *)param_1[1] != (void *)0x0) {
    _free((void *)param_1[1]);
    param_1[1] = 0;
  }
  *param_1 = 0;
  return;
}

