
void FUN_10005e9d0(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    return;
  }
  *(undefined1 *)(param_1 + 0x20) = 1;
  QTimer::start();
  FUN_100809310(*(undefined8 *)(param_1 + 0x10),1);
  return;
}

