
void FUN_1002fa3f0(undefined8 param_1,void *param_2)

{
  if (*(long *)((long)param_2 + 0x10) != 0) {
    _CFRelease();
  }
  if (*(long *)((long)param_2 + 0x18) != 0) {
    _CFRelease();
  }
  operator_delete(param_2);
  return;
}

