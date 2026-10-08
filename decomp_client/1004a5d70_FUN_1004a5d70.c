
void FUN_1004a5d70(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_102215ca0;
  param_1[2] = &PTR_FUN_102215ea8;
  if ((void *)param_1[0xd] != (void *)0x0) {
    operator_delete((void *)param_1[0xd]);
  }
  FUN_100457860(param_1);
  operator_delete(param_1);
  return;
}

