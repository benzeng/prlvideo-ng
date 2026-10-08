
void FUN_1004a0f30(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1022159f0;
  param_1[2] = &PTR_FUN_102215c00;
  if ((void *)param_1[7] != (void *)0x0) {
    operator_delete((void *)param_1[7]);
  }
  FUN_10044e270(param_1);
  return;
}

