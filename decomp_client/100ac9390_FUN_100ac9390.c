
void FUN_100ac9390(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (((int)((ulong)param_3 >> 0x20) == *(int *)(param_1 + 0x4c)) &&
     ((int)param_3 == *(int *)(param_1 + 0x48))) {
    *(undefined1 *)(param_1 + 0x90) = 1;
    *(undefined8 *)(param_1 + 0x92) = param_3;
  }
  return;
}

