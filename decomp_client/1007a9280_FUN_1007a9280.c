
void FUN_1007a9280(QKeyEvent *param_1,long param_2)

{
  int iVar1;
  
  if (*(int *)(param_2 + 0x28) != 0x1000000) {
    iVar1 = QKeyEvent::modifiers();
    if ((iVar1 != 0x4000000) || (*(int *)(param_2 + 0x28) != 0x2e)) {
      QDialog::keyPressEvent(param_1);
      return;
    }
  }
  *(byte *)(param_2 + 0x12) = *(byte *)(param_2 + 0x12) & 0xfb;
  return;
}

