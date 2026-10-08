
void FUN_100456470(undefined8 *param_1)

{
  param_1[-2] = &PTR_FUN_102213450;
  *param_1 = &PTR_FUN_102213658;
  if ((void *)param_1[0xb] != (void *)0x0) {
    operator_delete((void *)param_1[0xb]);
  }
  FUN_100457860(param_1 + -2);
  return;
}

