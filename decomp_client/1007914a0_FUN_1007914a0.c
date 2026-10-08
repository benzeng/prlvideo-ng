
byte FUN_1007914a0(void)

{
  byte bVar1;
  int iVar2;
  QString local_30;
  QString local_28;
  QArrayData *local_20;
  undefined1 local_11;
  
  QLineEdit::text();
  if (*(int *)(local_20 + 4) == 0) {
    bVar1 = 0;
    goto LAB_1007915c0;
  }
  iVar2 = QLineEdit::selectionStart();
  if (iVar2 == 0) {
    bVar1 = 0;
    goto LAB_1007915c0;
  }
  QLineEdit::selectedText();
  QLineEdit::text();
  bVar1 = operator==(&local_28,&local_30);
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      local_11 = *(int *)local_30.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_10079157d;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
LAB_10079157d:
  bVar1 = bVar1 ^ 1;
  if (*(int *)local_28.field0_0x0 != -1) {
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      local_11 = *(int *)local_28.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1007915c0;
    }
    QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
  }
LAB_1007915c0:
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      UNLOCK();
      if (*(int *)local_20 != 0) {
        return bVar1;
      }
      local_11 = 0;
    }
    QArrayData::deallocate(local_20,2,8);
  }
  return bVar1;
}

