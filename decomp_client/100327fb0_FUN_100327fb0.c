
void FUN_100327fb0(long param_1,int param_2)

{
  if (*(int *)(param_1 + 0x20) == param_2) {
    return;
  }
  if ((param_2 != 1) && (-1 < *(int *)(param_1 + 0x38))) {
    QTimer::stop();
  }
  *(int *)(param_1 + 0x20) = param_2;
  FUN_10082aa20(param_1,param_2);
  return;
}

