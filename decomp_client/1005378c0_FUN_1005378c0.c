
void FUN_1005378c0(long param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  QTreeWidgetItemIterator local_38 [8];
  long local_30;
  
  cVar1 = FUN_1005a5f40(*(undefined8 *)(param_1 + 0x30));
  QWidget::setDisabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x28),0));
  QWidget::setDisabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x30),0));
  QWidget::setDisabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x38),0));
  QWidget::setDisabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x90),0));
  QWidget::setDisabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x48),0));
  if (cVar1 == '\0') {
    FUN_1005375f0(param_1);
  }
  else {
    QWidget::setDisabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x98),0));
    QWidget::setDisabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x48) + 0xa8),0));
  }
  QTreeWidgetItemIterator::QTreeWidgetItemIterator
            (local_38,*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x78),0);
  while (local_30 != 0) {
    uVar2 = QTreeWidgetItem::flags();
    uVar3 = uVar2 & 0xfffffffd;
    if (cVar1 == '\0') {
      uVar3 = uVar2 | 2;
    }
    QTreeWidgetItem::setFlags(local_30,uVar3);
    QTreeWidgetItemIterator::operator++(local_38);
  }
  QTreeWidgetItemIterator::~QTreeWidgetItemIterator(local_38);
  return;
}

