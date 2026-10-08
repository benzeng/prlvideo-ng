
void FUN_1005452f0(long param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = FUN_1005a5f40(*(undefined8 *)(param_1 + 0x30));
  bVar2 = SUB81(*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x70),0);
  if (cVar1 != '\0') {
    QWidget::setDisabled(bVar2);
    return;
  }
  FUN_1005455f0();
  QWidget::setEnabled(bVar2);
  return;
}

