
void FUN_10064b2e0(long param_1)

{
  undefined8 uVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x60);
  cVar4 = QAbstractButton::isChecked();
  if (cVar4 == '\0') {
    QLineEdit::text();
    QString::trimmed();
    if (*(int *)(local_30 + 4) == 0) {
      bVar3 = true;
      bVar2 = false;
    }
    else {
      QLineEdit::text();
      bVar3 = true;
      bVar2 = true;
    }
  }
  else {
    bVar3 = false;
    bVar2 = false;
  }
  QWidget::setEnabled(SUB81(uVar1,0));
  if ((bVar2) && (*(int *)local_40 != -1)) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) goto LAB_10064b3a4;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10064b3a4:
  if (!bVar3) {
    return;
  }
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) goto LAB_10064b3d9;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10064b3d9:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return;
}

