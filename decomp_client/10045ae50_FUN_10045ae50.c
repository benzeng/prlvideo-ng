
void FUN_10045ae50(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_102213c60;
  param_1[2] = &PTR_FUN_102213e68;
  if ((void *)param_1[7] != (void *)0x0) {
    operator_delete((void *)param_1[7]);
  }
  FUN_10044e270(param_1);
  return;
}

