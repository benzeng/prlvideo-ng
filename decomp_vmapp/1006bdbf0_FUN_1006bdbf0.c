
void FUN_1006bdbf0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_100bcd6e0;
  if (0 < *(int *)(param_1 + 0xb)) {
    _close(*(int *)(param_1 + 0xb));
    *(undefined4 *)(param_1 + 0xb) = 0xffffffff;
  }
  FUN_1006be270(param_1);
  operator_delete(param_1);
  return;
}

