
void FUN_100ac9250(long param_1)

{
  if (*(char *)(param_1 + 0x40) != '\0') {
    *(undefined1 *)(param_1 + 0x40) = 0;
    FUN_100ae4b50(param_1);
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x92) = 0;
  if (-1 < *(int *)(param_1 + 0x80)) {
    QTimer::stop();
    return;
  }
  return;
}

