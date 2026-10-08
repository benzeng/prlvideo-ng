
void FUN_100990380(long param_1)

{
  if ((*(char *)(param_1 + 0x28) != '\0') && (-1 < *(int *)(param_1 + 0x40))) {
    QTimer::stop();
    return;
  }
  return;
}

