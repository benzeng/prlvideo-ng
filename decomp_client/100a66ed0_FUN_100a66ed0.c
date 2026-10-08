
void FUN_100a66ed0(long param_1,char param_2)

{
  *(char *)(param_1 + 0x39) = param_2;
  if (((*(char *)(param_1 + 0x38) != '\0') && (param_2 != '\x01')) &&
     (*(char *)(param_1 + 0x3a) != '\0')) {
    QTimer::start();
    return;
  }
  QTimer::stop();
  return;
}

