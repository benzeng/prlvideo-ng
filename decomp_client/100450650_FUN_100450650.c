
void FUN_100450650(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1022131a0;
  param_1[2] = &PTR_FUN_1022133a8;
  if ((void *)param_1[7] != (void *)0x0) {
    operator_delete((void *)param_1[7]);
  }
  FUN_10044e270(param_1);
  operator_delete(param_1);
  return;
}

