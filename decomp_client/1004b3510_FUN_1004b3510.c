
void FUN_1004b3510(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_102216760;
  param_1[2] = &PTR_FUN_102216968;
  if ((void *)param_1[0xd] != (void *)0x0) {
    operator_delete((void *)param_1[0xd]);
  }
  FUN_100457860(param_1);
  return;
}

