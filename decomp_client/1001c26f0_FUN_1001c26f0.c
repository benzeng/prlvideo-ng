
void FUN_1001c26f0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    _UnregisterEventHotKey();
    *(undefined8 *)(param_1 + 8) = 0;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    _RemoveEventHandler();
    return;
  }
  return;
}

