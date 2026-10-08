
undefined1 FUN_100139f20(void)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined1 uVar4;
  Data *local_30;
  Data *local_28;
  Data *local_20;
  undefined1 local_11;
  
  QButtonGroup::buttons();
  local_28 = local_30;
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 == 0) {
      QListData::detach((int)&local_28);
      lVar2 = (long)*(int *)(local_28 + 8);
      if ((local_30 + (long)*(int *)(local_30 + 8) * 8 != local_28 + lVar2 * 8) &&
         (lVar3 = *(int *)(local_28 + 0xc) - lVar2, lVar3 != 0 && lVar2 <= *(int *)(local_28 + 0xc))
         ) {
        _memcpy(local_28 + lVar2 * 8 + 0x10,local_30 + (long)*(int *)(local_30 + 8) * 8 + 0x10,
                lVar3 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + 1;
      local_11 = *(int *)local_30 != 0;
      UNLOCK();
    }
  }
  local_20 = local_28 + (long)*(int *)(local_28 + 8) * 8 + 0x10;
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_11 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100139fe0;
    }
    QListData::dispose(local_30);
  }
LAB_100139fe0:
  do {
    if (local_20 == local_28 + (long)*(int *)(local_28 + 0xc) * 8 + 0x10) {
      uVar4 = 0;
      goto LAB_10013a014;
    }
    local_20 = local_20 + 8;
    cVar1 = QWidget::hasFocus();
  } while (cVar1 == '\0');
  uVar4 = 1;
LAB_10013a014:
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return uVar4;
      }
      local_11 = 0;
    }
    QListData::dispose(local_28);
  }
  return uVar4;
}

