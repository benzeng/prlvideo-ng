
void FUN_1005651f0(void)

{
  long lVar1;
  long lVar2;
  Data *local_40;
  Data *local_38;
  Data *local_30;
  Data *local_28;
  int local_20;
  undefined4 local_18;
  undefined1 local_11;
  
  local_18 = FUN_1006947d0();
  FUN_100071ff0(&DAT_1023122c8,&local_18);
  lVar1 = QAction::menu();
  if (lVar1 == 0) {
    return;
  }
  QWidget::actions();
  local_38 = local_40;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 == 0) {
      QListData::detach((int)&local_38);
      lVar1 = (long)*(int *)(local_38 + 8);
      if ((local_40 + (long)*(int *)(local_40 + 8) * 8 != local_38 + lVar1 * 8) &&
         (lVar2 = *(int *)(local_38 + 0xc) - lVar1, lVar2 != 0 && lVar1 <= *(int *)(local_38 + 0xc))
         ) {
        _memcpy(local_38 + lVar1 * 8 + 0x10,local_40 + (long)*(int *)(local_40 + 8) * 8 + 0x10,
                lVar2 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + 1;
      local_11 = *(int *)local_40 != 0;
      UNLOCK();
    }
  }
  local_30 = local_38 + (long)*(int *)(local_38 + 8) * 8 + 0x10;
  local_28 = local_38 + (long)*(int *)(local_38 + 0xc) * 8 + 0x10;
  local_20 = 1;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 == 0) {
LAB_1005652d9:
      QListData::dispose(local_40);
    }
    else {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_11 = *(int *)local_40 != 0;
      UNLOCK();
      if (!(bool)local_11) goto LAB_1005652d9;
    }
    if (local_20 == 0) goto LAB_10056533e;
  }
  for (; local_30 != local_28; local_30 = local_30 + 8) {
    FUN_1005651f0(*(undefined8 *)local_30);
    local_20 = 1;
  }
LAB_10056533e:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_11 = 0;
    }
    QListData::dispose(local_38);
  }
  return;
}

