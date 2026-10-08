
void FUN_1001b6c90(long param_1)

{
  if ((*(long *)(param_1 + 0x10) != 0) && (-1 < *(int *)(*(long *)(param_1 + 0x10) + 0x10))) {
    QTimer::stop();
    return;
  }
  return;
}

