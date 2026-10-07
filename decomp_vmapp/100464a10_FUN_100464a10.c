
void FUN_100464a10(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_100bc10f0;
  if (param_1[3] != 0) {
    _CFRelease();
  }
  _IOObjectRelease(*(undefined4 *)(param_1 + 2));
  FUN_1004638b0(param_1);
  return;
}

