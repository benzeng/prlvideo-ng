
void FUN_100a36e00(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1022810a8;
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[4]);
  return;
}

