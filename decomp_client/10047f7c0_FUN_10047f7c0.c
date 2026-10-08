
void FUN_10047f7c0(undefined8 *param_1)

{
  param_1[-2] = &PTR_FUN_1022149d0;
  *param_1 = &PTR_FUN_102214bd8;
  if ((void *)param_1[5] != (void *)0x0) {
    operator_delete((void *)param_1[5]);
  }
  FUN_10044e270(param_1 + -2);
  operator_delete(param_1 + -2);
  return;
}

