
void FUN_100140db0(long param_1)

{
  if (-1 < *(int *)(param_1 + 0x60)) {
    QTimer::stop();
  }
  QTimer::start((int)param_1 + 0x50);
  return;
}

