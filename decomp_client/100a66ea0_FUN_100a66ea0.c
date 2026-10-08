
void FUN_100a66ea0(long param_1)

{
  if (((*(char *)(param_1 + 0x38) != '\0') && (*(char *)(param_1 + 0x39) == '\0')) &&
     (*(char *)(param_1 + 0x3a) != '\0')) {
    QTimer::start();
    return;
  }
  QTimer::stop();
  return;
}

