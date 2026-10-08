
void FUN_100ac91b0(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x48) = param_2;
  if (-1 < *(int *)(param_1 + 0x60)) {
    QTimer::stop();
  }
  if (-1 < *(int *)(param_1 + 0x80)) {
    QTimer::stop();
  }
  *(undefined1 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x92) = 0;
  if (*(char *)(param_1 + 0x40) != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x40) = 1;
  *(undefined4 *)(param_1 + 0x44) = 0;
  FUN_100ae4b30(param_1);
  return;
}

