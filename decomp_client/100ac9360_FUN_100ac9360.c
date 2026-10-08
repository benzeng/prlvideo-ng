
void FUN_100ac9360(long param_1,int param_2,undefined8 param_3)

{
  if ((((int)((ulong)param_3 >> 0x20) == *(int *)(param_1 + 0x4c)) &&
      ((int)param_3 == *(int *)(param_1 + 0x48))) && (*(int *)(param_1 + 0x44) == param_2)) {
    QTimer::start();
    return;
  }
  return;
}

