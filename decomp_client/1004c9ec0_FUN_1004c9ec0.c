
void FUN_1004c9ec0(undefined8 *param_1)

{
  param_1[-2] = &PTR_FUN_102217780;
  *param_1 = &PTR_FUN_102217988;
  if ((void *)param_1[5] != (void *)0x0) {
    operator_delete((void *)param_1[5]);
  }
  FUN_10044e270(param_1 + -2);
  return;
}

