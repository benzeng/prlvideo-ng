
void FUN_1004432f0(long param_1)

{
  long lVar1;
  long lVar2;
  Data *local_48;
  Data *local_40;
  Data *local_38;
  Data *local_30;
  int local_28;
  undefined1 local_19;
  
  QDialogButtonBox::buttons();
  local_40 = local_48;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 == 0) {
      QListData::detach((int)&local_40);
      lVar1 = (long)*(int *)(local_40 + 8);
      if ((local_48 + (long)*(int *)(local_48 + 8) * 8 != local_40 + lVar1 * 8) &&
         (lVar2 = *(int *)(local_40 + 0xc) - lVar1, lVar2 != 0 && lVar1 <= *(int *)(local_40 + 0xc))
         ) {
        _memcpy(local_40 + lVar1 * 8 + 0x10,local_48 + (long)*(int *)(local_48 + 8) * 8 + 0x10,
                lVar2 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + 1;
      local_19 = *(int *)local_48 != 0;
      UNLOCK();
    }
  }
  local_38 = local_40 + (long)*(int *)(local_40 + 8) * 8 + 0x10;
  local_30 = local_40 + (long)*(int *)(local_40 + 0xc) * 8 + 0x10;
  local_28 = 1;
  if (*(int *)local_48 == -1) {
LAB_1004433e3:
    for (; local_38 != local_30; local_38 = local_38 + 8) {
      QWidget::setEnabled(SUB81(*(undefined8 *)local_38,0));
      local_28 = 1;
    }
  }
  else {
    if (*(int *)local_48 == 0) {
LAB_1004433bd:
      QListData::dispose(local_48);
    }
    else {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_19 = *(int *)local_48 != 0;
      UNLOCK();
      if (!(bool)local_19) goto LAB_1004433bd;
    }
    if (local_28 != 0) goto LAB_1004433e3;
  }
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10044344a;
    }
    QListData::dispose(local_40);
  }
LAB_10044344a:
  QDialog::finished((int)*(undefined8 *)(param_1 + 0x10));
  return;
}

