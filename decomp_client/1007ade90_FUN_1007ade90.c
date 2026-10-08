
void FUN_1007ade90(QKeyEvent *param_1,long param_2)

{
  uint uVar1;
  
  QDialog::keyPressEvent(param_1);
  FUN_1007a8b40(*(undefined8 *)(param_1 + 0x100),param_2);
  uVar1 = QKeyEvent::modifiers();
  if (((uVar1 & 0x14000000) != 0) && (*(int *)(param_2 + 0x28) == 0x47)) {
    FUN_1007adee0(param_1);
    return;
  }
  return;
}

