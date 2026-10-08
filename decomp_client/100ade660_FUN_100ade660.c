
void FUN_100ade660(long param_1,char param_2)

{
  if (param_2 != '\0') {
    *(undefined1 *)(param_1 + 0x30) = 1;
  }
  QTimer::start((int)param_1 + 0x10);
  return;
}

