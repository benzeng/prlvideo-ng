
void FUN_10045f5f0(QObject *param_1,QEvent *param_2,long param_3)

{
  if (*(QEvent **)(param_1 + 0x10) == param_2) {
    if (*(short *)(param_3 + 0x10) == 0x12) {
      FUN_10045f540(param_1);
    }
    else if (*(short *)(param_3 + 0x10) == 0x11) {
      FUN_10045f3d0(param_1);
    }
  }
  QObject::eventFilter(param_1,param_2);
  return;
}

