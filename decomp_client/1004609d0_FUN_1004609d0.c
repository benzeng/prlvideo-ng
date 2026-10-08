
void FUN_1004609d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_102213f10;
  param_1[2] = &PTR_FUN_102214118;
  if ((long *)param_1[8] != (long *)0x0) {
    (**(code **)(*(long *)param_1[8] + 0x20))();
  }
  if ((void *)param_1[7] != (void *)0x0) {
    operator_delete((void *)param_1[7]);
  }
  FUN_10044e270(param_1);
  operator_delete(param_1);
  return;
}

