
void FUN_1007b0a80(QEvent *param_1,long param_2)

{
  if (*(short *)(param_2 + 0x10) == 0x13) {
    FUN_1007ac340(param_1);
  }
  CBaseDialog::event(param_1);
  return;
}

