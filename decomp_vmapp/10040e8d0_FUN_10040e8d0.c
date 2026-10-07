
void FUN_10040e8d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_100bc00c0;
  if (param_1[0xc] != 0) {
    _AudioConverterDispose();
  }
  if ((void *)param_1[7] != (void *)0x0) {
    operator_delete__((void *)param_1[7]);
    param_1[7] = 0;
  }
  return;
}

