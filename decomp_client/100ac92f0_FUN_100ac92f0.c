
void FUN_100ac92f0(long param_1,undefined4 param_2,undefined8 param_3)

{
  if (((int)((ulong)param_3 >> 0x20) == *(int *)(param_1 + 0x4c)) &&
     ((int)param_3 == *(int *)(param_1 + 0x48))) {
    if (*(char *)(param_1 + 0x40) == '\0') {
      *(undefined1 *)(param_1 + 0x40) = 1;
      FUN_100ae4b30(param_1);
    }
    *(undefined4 *)(param_1 + 0x44) = param_2;
    *(undefined1 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x92) = 0;
    if (-1 < *(int *)(param_1 + 0x80)) {
      QTimer::stop();
      return;
    }
  }
  return;
}

