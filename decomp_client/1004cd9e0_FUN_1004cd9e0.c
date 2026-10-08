
void FUN_1004cd9e0(undefined8 *param_1)

{
  param_1[-2] = &PTR_FUN_102217a30;
  *param_1 = &PTR_FUN_102217c40;
  if ((void *)param_1[5] != (void *)0x0) {
    operator_delete((void *)param_1[5]);
  }
  FUN_10044e270(param_1 + -2);
  operator_delete(param_1 + -2);
  return;
}

