
void FUN_100491130(undefined8 *param_1)

{
  param_1[-2] = &PTR_FUN_1022151e0;
  *param_1 = &PTR_FUN_1022153e8;
  if ((void *)param_1[0xb] != (void *)0x0) {
    operator_delete((void *)param_1[0xb]);
  }
  FUN_100457860(param_1 + -2);
  operator_delete(param_1 + -2);
  return;
}

