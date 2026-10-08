
void FUN_1007c5670(QEvent *param_1,long param_2)

{
  if (*(short *)(param_2 + 0x10) == 0x62) {
    FUN_100863f30(param_1);
  }
  QMenu::changeEvent(param_1);
  return;
}

