
void FUN_100addd40(long param_1)

{
  FUN_100addde0(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x4c) = 0;
  QTimer::stop();
  return;
}

