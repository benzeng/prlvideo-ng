
void FUN_1004b2880(undefined8 *param_1)

{
  param_1[-2] = &PTR_FUN_1022164b0;
  *param_1 = &PTR_FUN_1022166b8;
  if ((void *)param_1[5] != (void *)0x0) {
    operator_delete((void *)param_1[5]);
  }
  FUN_10044e270(param_1 + -2);
  return;
}

