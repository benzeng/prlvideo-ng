
void FUN_1001440f0(long param_1,int param_2)

{
  int iVar1;
  
  iVar1 = QProgressBar::value();
  if (param_2 < iVar1) {
    return;
  }
  QProgressBar::setValue((int)*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x18));
  return;
}

