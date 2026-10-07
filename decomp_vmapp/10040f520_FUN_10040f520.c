
void FUN_10040f520(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_100bc00c0;
  if (param_1[0xc] != 0) {
    _AudioConverterDispose();
  }
  if ((void *)param_1[7] != (void *)0x0) {
    operator_delete__((void *)param_1[7]);
  }
  operator_delete(param_1);
  return;
}

