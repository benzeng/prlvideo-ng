
void FUN_100484870(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_102214c80;
  param_1[2] = &PTR_FUN_102214e88;
  if ((void *)param_1[0xd] != (void *)0x0) {
    operator_delete((void *)param_1[0xd]);
  }
  FUN_100457860(param_1);
  return;
}

