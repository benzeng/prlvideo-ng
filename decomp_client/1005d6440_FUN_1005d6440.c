
void FUN_1005d6440(long param_1)

{
  QString local_60;
  QString local_58;
  QString local_50 [3];
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  FUN_1001c20d0(&local_38);
  FUN_1005cb7f0(&local_30,&local_38);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005d6498;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1005d6498:
  QLineEdit::setText(*(QString **)(*(long *)(param_1 + 0x18) + 0x20));
  MacUtils::getAddressBookUserInfo();
  if (*(int *)(local_58.field0_0x0 + 4) == 0) {
    QString::operator=(&local_58,local_50);
  }
  else if (*(int *)(local_50[0].field0_0x0 + 4) != 0) {
    QString::fromUtf8_helper((char *)&local_60,0x1e31adc);
    QString::append(&local_60);
    QString::append(&local_58);
    if (*(int *)local_60.field0_0x0 != -1) {
      if (*(int *)local_60.field0_0x0 != 0) {
        LOCK();
        *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
        local_21 = *(int *)local_60.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1005d6536;
      }
      QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
    }
  }
LAB_1005d6536:
  QLineEdit::setText(*(QString **)(*(long *)(param_1 + 0x18) + 0x10));
  FUN_1005d96a0(&local_58);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return;
}

