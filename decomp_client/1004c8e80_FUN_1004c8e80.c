
void FUN_1004c8e80(undefined8 *param_1)

{
  param_1[-2] = &PTR_FUN_1022174d0;
  *param_1 = &PTR_FUN_1022176d8;
  if ((void *)param_1[5] != (void *)0x0) {
    operator_delete((void *)param_1[5]);
  }
  FUN_10044e270(param_1 + -2);
  operator_delete(param_1 + -2);
  return;
}

