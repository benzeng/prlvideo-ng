
void FUN_100545e90(long param_1)

{
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x18);
  FUN_1005a5f40(*(undefined8 *)(param_1 + 0x30));
  QWidget::setDisabled(SUB81(uVar1,0));
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x58);
  FUN_1005a5f40(*(undefined8 *)(param_1 + 0x30));
  QWidget::setDisabled(SUB81(uVar1,0));
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x38);
  FUN_1005a5f40(*(undefined8 *)(param_1 + 0x30));
  QWidget::setDisabled(SUB81(uVar1,0));
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x40);
  FUN_1005a5f40(*(undefined8 *)(param_1 + 0x30));
  QWidget::setDisabled(SUB81(uVar1,0));
  cVar2 = FUN_1005a5f40(*(undefined8 *)(param_1 + 0x30));
  bVar3 = SUB81(*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x70),0);
  if (cVar2 == '\0') {
    FUN_1005455f0();
    QWidget::setEnabled(bVar3);
  }
  else {
    QWidget::setDisabled(bVar3);
  }
  FUN_1005265d0(param_1);
  return;
}

