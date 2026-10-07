
void FUN_100566c80(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10111db90;
  if ((void *)param_1[1] != (void *)0x0) {
    _free((void *)param_1[1]);
    param_1[2] = 0;
    param_1[1] = 0;
  }
  return;
}

