
void FUN_1004cd8f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_102217a30;
  param_1[2] = &PTR_FUN_102217c40;
  if ((void *)param_1[7] != (void *)0x0) {
    operator_delete((void *)param_1[7]);
  }
  FUN_10044e270(param_1);
  return;
}

