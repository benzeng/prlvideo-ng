
void FUN_10042ea00(long param_1)

{
  int iVar1;
  long lVar2;
  QArrayData *local_30;
  QArrayData *local_28;
  
  lVar2 = QDialogButtonBox::button(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x68),0x800);
  if (lVar2 == 0) {
    return;
  }
  QLineEdit::text();
  iVar1 = *(int *)(local_28 + 4);
  if (iVar1 != 0) {
    QLineEdit::text();
  }
  QWidget::setEnabled(SUB81(lVar2,0));
  if ((iVar1 != 0) && (*(int *)local_30 != -1)) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) goto LAB_10042eaaa;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10042eaaa:
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return;
      }
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return;
}

