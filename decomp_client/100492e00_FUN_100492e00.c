
void FUN_100492e00(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_102215490;
  param_1[2] = &PTR_FUN_1022156a0;
  if ((void *)param_1[7] != (void *)0x0) {
    operator_delete((void *)param_1[7]);
  }
  FUN_10044e270(param_1);
  return;
}

