
void FUN_100ade640(long param_1,undefined8 param_2,char param_3)

{
  if (param_3 != '\0') {
    *(undefined1 *)(param_1 + 0x30) = 1;
  }
  QTimer::start((int)param_1 + 0x10);
  return;
}

