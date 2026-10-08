
bool FUN_1005d6700(void)

{
  char cVar1;
  bool bVar2;
  QArrayData *local_38;
  QArrayData *local_30;
  QArrayData *local_28;
  
  cVar1 = QAbstractButton::isChecked();
  if (cVar1 == '\0') {
    return true;
  }
  QLineEdit::text();
  if (*(int *)(local_28 + 4) == 0) {
    bVar2 = false;
    goto LAB_1005d6824;
  }
  QLineEdit::text();
  if (*(int *)(local_30 + 4) == 0) {
    bVar2 = false;
  }
  else {
    QLineEdit::text();
    bVar2 = *(int *)(local_38 + 4) != 0;
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        UNLOCK();
        if (*(int *)local_38 != 0) goto LAB_1005d67f4;
      }
      QArrayData::deallocate(local_38,2,8);
    }
  }
LAB_1005d67f4:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) goto LAB_1005d6824;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1005d6824:
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return bVar2;
      }
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return bVar2;
}

