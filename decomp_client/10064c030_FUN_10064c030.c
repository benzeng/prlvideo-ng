
void FUN_10064c030(long param_1)

{
  long lVar1;
  QString *pQVar2;
  long lVar3;
  long lVar4;
  Data *local_50;
  Data *local_48;
  Data *local_40;
  undefined4 local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  local_50 = *(Data **)(param_1 + 0x50);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 == 0) {
      QListData::detach((int)&local_50);
      lVar3 = (long)*(int *)(local_50 + 8);
      lVar1 = *(long *)(param_1 + 0x50);
      if (((Data *)(lVar1 + (long)*(int *)(lVar1 + 8) * 8) != local_50 + lVar3 * 8) &&
         (lVar4 = *(int *)(local_50 + 0xc) - lVar3, lVar4 != 0 && lVar3 <= *(int *)(local_50 + 0xc))
         ) {
        _memcpy(local_50 + lVar3 * 8 + 0x10,(void *)(lVar1 + 0x10 + (long)*(int *)(lVar1 + 8) * 8),
                lVar4 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + 1;
      UNLOCK();
      local_30 = (QArrayData *)CONCAT71(local_30._1_7_,*(int *)local_50 != 0);
    }
  }
  local_48 = local_50 + (long)*(int *)(local_50 + 8) * 8 + 0x10;
  local_40 = local_50 + (long)*(int *)(local_50 + 0xc) * 8 + 0x10;
  if (*(int *)(local_50 + 8) != *(int *)(local_50 + 0xc)) {
    do {
      local_38 = 1;
      pQVar2 = *(QString **)local_48;
      local_30 = (QArrayData *)QString::fromAscii_helper("",0);
      QWidget::setStyleSheet(pQVar2);
      if (*(int *)local_30 != -1) {
        if (*(int *)local_30 != 0) {
          LOCK();
          *(int *)local_30 = *(int *)local_30 + -1;
          local_21 = *(int *)local_30 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_10064c12c;
        }
        QArrayData::deallocate(local_30,2,8);
      }
LAB_10064c12c:
      local_48 = local_48 + 8;
    } while (local_48 != local_40);
  }
  local_38 = 1;
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      local_30 = (QArrayData *)CONCAT71(local_30._1_7_,*(int *)local_50 != 0);
      if (*(int *)local_50 != 0) {
        return;
      }
    }
    QListData::dispose(local_50);
  }
  return;
}

