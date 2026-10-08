
void FUN_10064f2c0(long param_1)

{
  long lVar1;
  QString *pQVar2;
  long lVar3;
  long lVar4;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  undefined4 local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  local_58 = *(Data **)(param_1 + 0x50);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 == 0) {
      QListData::detach((int)&local_58);
      lVar3 = (long)*(int *)(local_58 + 8);
      lVar1 = *(long *)(param_1 + 0x50);
      if (((Data *)(lVar1 + (long)*(int *)(lVar1 + 8) * 8) != local_58 + lVar3 * 8) &&
         (lVar4 = *(int *)(local_58 + 0xc) - lVar3, lVar4 != 0 && lVar3 <= *(int *)(local_58 + 0xc))
         ) {
        _memcpy(local_58 + lVar3 * 8 + 0x10,(void *)(lVar1 + 0x10 + (long)*(int *)(lVar1 + 8) * 8),
                lVar4 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + 1;
      UNLOCK();
      local_38 = (QArrayData *)CONCAT71(local_38._1_7_,*(int *)local_58 != 0);
    }
  }
  local_50 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
  local_48 = local_58 + (long)*(int *)(local_58 + 0xc) * 8 + 0x10;
  if (*(int *)(local_58 + 8) != *(int *)(local_58 + 0xc)) {
    do {
      local_40 = 1;
      pQVar2 = *(QString **)local_50;
      local_38 = (QArrayData *)QString::fromAscii_helper("",0);
      QWidget::setStyleSheet(pQVar2);
      if (*(int *)local_38 != -1) {
        if (*(int *)local_38 != 0) {
          LOCK();
          *(int *)local_38 = *(int *)local_38 + -1;
          local_29 = *(int *)local_38 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_10064f3bc;
        }
        QArrayData::deallocate(local_38,2,8);
      }
LAB_10064f3bc:
      local_50 = local_50 + 8;
    } while (local_50 != local_48);
  }
  local_40 = 1;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      local_38 = (QArrayData *)CONCAT71(local_38._1_7_,*(int *)local_58 != 0);
      if (*(int *)local_58 != 0) goto LAB_10064f3fb;
    }
    QListData::dispose(local_58);
  }
LAB_10064f3fb:
  QLabel::clear();
  return;
}

