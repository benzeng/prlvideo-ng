
void FUN_100604d50(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_100bc8130;
  if ((void *)param_1[0x88] != (void *)0x0) {
    _free((void *)param_1[0x88]);
  }
  if ((void *)param_1[0x89] != (void *)0x0) {
    _free((void *)param_1[0x89]);
  }
  FUN_100603f50(param_1);
  return;
}

