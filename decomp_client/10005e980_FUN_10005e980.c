
void FUN_10005e980(long param_1,char param_2)

{
  if (*(char *)(param_1 + 0x20) == param_2) {
    return;
  }
  *(char *)(param_1 + 0x20) = param_2;
  if (param_2 == '\0') {
    QTimer::stop();
  }
  else {
    QTimer::start();
  }
  FUN_100809310(*(undefined8 *)(param_1 + 0x10),param_2);
  return;
}

