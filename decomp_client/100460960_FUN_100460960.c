
void FUN_100460960(undefined8 *param_1)

{
  param_1[-2] = &PTR_FUN_102213f10;
  *param_1 = &PTR_FUN_102214118;
  if ((long *)param_1[6] != (long *)0x0) {
    (**(code **)(*(long *)param_1[6] + 0x20))();
  }
  if ((void *)param_1[5] != (void *)0x0) {
    operator_delete((void *)param_1[5]);
  }
  FUN_10044e270(param_1 + -2);
  return;
}

