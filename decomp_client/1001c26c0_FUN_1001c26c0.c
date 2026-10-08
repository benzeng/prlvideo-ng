
void FUN_1001c26c0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    _UnregisterEventHotKey();
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}

