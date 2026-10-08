
void FUN_100350200(long param_1,int param_2)

{
  if (param_2 != 0) {
    QTimer::stop();
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return;
}

