
void FUN_1004c8d50(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1022174d0;
  param_1[2] = &PTR_FUN_1022176d8;
  if ((void *)param_1[7] != (void *)0x0) {
    operator_delete((void *)param_1[7]);
  }
  FUN_10044e270(param_1);
  return;
}

