
void FUN_100adb030(long param_1,undefined8 param_2)

{
  if (((*(char *)(param_1 + 0x10) != '\0') &&
      (*(int *)(param_1 + 0x3c) == (int)((ulong)param_2 >> 0x20))) &&
     (*(int *)(param_1 + 0x38) == (int)param_2)) {
    QTimer::setInterval((int)param_1 + 0x18);
    QTimer::start();
    return;
  }
  return;
}

