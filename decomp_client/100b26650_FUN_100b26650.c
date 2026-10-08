
void FUN_100b26650(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10223e0a0;
  if ((void *)param_1[1] != (void *)0x0) {
    _free((void *)param_1[1]);
  }
  operator_delete(param_1);
  return;
}

