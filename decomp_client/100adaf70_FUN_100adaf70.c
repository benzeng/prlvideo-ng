
void FUN_100adaf70(long param_1)

{
  QTimer::stop();
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  FUN_100ae3b90(param_1);
  return;
}

