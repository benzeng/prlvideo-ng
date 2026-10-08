
void FUN_10058d3e0(QEvent *param_1,long param_2)

{
  if (*(short *)(param_2 + 0x10) == 0x13) {
    FUN_10083e020(param_1);
  }
  else if ((*(short *)(param_2 + 0x10) == 0x4b) &&
          (*(char *)(*(long *)(param_1 + 0x48) + 0xb8) == '\0')) {
    FUN_10058fba0();
  }
  QMainWindow::event(param_1);
  return;
}

