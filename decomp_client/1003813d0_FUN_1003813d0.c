
void FUN_1003813d0(QEvent *param_1,long param_2)

{
  if (*(short *)(param_2 + 0x10) == 0x4b) {
    FUN_100380bf0(*(undefined8 *)(param_1 + 0x60));
  }
  CBaseDialog::event(param_1);
  return;
}

