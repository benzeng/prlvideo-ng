
void FUN_1004848b0(undefined8 *param_1)

{
  param_1[-2] = &PTR_FUN_102214c80;
  *param_1 = &PTR_FUN_102214e88;
  if ((void *)param_1[0xb] != (void *)0x0) {
    operator_delete((void *)param_1[0xb]);
  }
  FUN_100457860(param_1 + -2);
  return;
}

