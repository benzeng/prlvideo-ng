
void FUN_1001b71f0(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    QTimer::start((int)*(long *)(param_1 + 0x10));
    return;
  }
  return;
}

