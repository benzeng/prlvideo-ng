
void FUN_1009b7be0(long param_1)

{
  int iVar1;
  bool bVar2;
  QArrayData *local_38;
  QArrayData *local_30;
  
  QLineEdit::text();
  iVar1 = *(int *)(local_30 + 4);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) goto LAB_1009b7c31;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1009b7c31:
  if (iVar1 == 0) {
    QWidget::setFocus(*(undefined8 *)(param_1 + 0x68),7);
    goto LAB_1009b7ca3;
  }
  QWidget::setFocus(*(undefined8 *)(param_1 + 0x78),7);
  QLineEdit::text();
  iVar1 = *(int *)(local_38 + 4);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) goto LAB_1009b7c85;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1009b7c85:
  if (iVar1 != 0) {
    QLineEdit::selectAll();
  }
LAB_1009b7ca3:
  bVar2 = (bool)QDialogButtonBox::button(*(undefined8 *)(param_1 + 0x90),0x400);
  QWidget::setEnabled(bVar2);
  QDialog::exec();
  return;
}

