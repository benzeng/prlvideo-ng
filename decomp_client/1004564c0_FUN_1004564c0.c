
void FUN_1004564c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_102213450;
  param_1[2] = &PTR_FUN_102213658;
  if ((void *)param_1[0xd] != (void *)0x0) {
    operator_delete((void *)param_1[0xd]);
  }
  FUN_100457860(param_1);
  operator_delete(param_1);
  return;
}

