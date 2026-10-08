
void FUN_1004d13e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_102217ce0;
  param_1[2] = &PTR_FUN_102217ef0;
  if ((void *)param_1[7] != (void *)0x0) {
    operator_delete((void *)param_1[7]);
  }
  FUN_10044e270(param_1);
  operator_delete(param_1);
  return;
}

