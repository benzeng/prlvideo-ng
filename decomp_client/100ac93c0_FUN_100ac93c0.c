
void FUN_100ac93c0(long param_1,undefined8 param_2)

{
  FUN_100adb080();
  if (((int)((ulong)param_2 >> 0x20) == *(int *)(param_1 + 0x4c)) &&
     ((int)param_2 == *(int *)(param_1 + 0x48))) {
    QTimer::start();
    return;
  }
  return;
}

