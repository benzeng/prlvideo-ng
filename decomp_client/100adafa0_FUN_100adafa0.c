
void FUN_100adafa0(long param_1,undefined8 param_2)

{
  QTimer::stop();
  *(undefined8 *)(param_1 + 0x38) = param_2;
  if (*(char *)(param_1 + 0x10) != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x10) = 1;
  FUN_100ae3bb0(param_1,param_2);
  FUN_100ae3b70(param_1);
  return;
}

