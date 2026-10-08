
void FUN_10044e5f0(QEvent *param_1,long param_2)

{
  if (*(short *)(param_2 + 0x10) == 0x4b) {
    FUN_10044b5b0(*(undefined8 *)(param_1 + 0x30));
  }
  QFrame::event(param_1);
  return;
}

