
void FUN_10098c9a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_102233300;
  if (param_1[3] != 0) {
    _CFRelease();
  }
  _IOObjectRelease(*(undefined4 *)(param_1 + 2));
  FUN_10098b780(param_1);
  operator_delete(param_1);
  return;
}

