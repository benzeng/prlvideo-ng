
undefined1 FUN_10064f5a0(long param_1,long param_2,char param_3)

{
  QString *pQVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 uVar6;
  bool bVar7;
  Data *local_68;
  Data *local_60;
  Data *local_58;
  uint local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  local_68 = *(Data **)(param_1 + 0x50);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 == 0) {
      QListData::detach((int)&local_68);
      lVar4 = (long)*(int *)(local_68 + 8);
      lVar3 = *(long *)(param_1 + 0x50);
      if (((Data *)(lVar3 + (long)*(int *)(lVar3 + 8) * 8) != local_68 + lVar4 * 8) &&
         (lVar5 = *(int *)(local_68 + 0xc) - lVar4, lVar5 != 0 && lVar4 <= *(int *)(local_68 + 0xc))
         ) {
        _memcpy(local_68 + lVar4 * 8 + 0x10,(void *)(lVar3 + 0x10 + (long)*(int *)(lVar3 + 8) * 8),
                lVar5 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + 1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
    }
  }
  local_60 = local_68 + (long)*(int *)(local_68 + 8) * 8 + 0x10;
  local_58 = local_68 + (long)*(int *)(local_68 + 0xc) * 8 + 0x10;
  local_50 = 1;
  if (*(int *)(local_68 + 8) != *(int *)(local_68 + 0xc)) {
    do {
      if (local_50 == 0) {
LAB_10064f67b:
        local_60 = local_60 + 8;
        local_50 = 1;
      }
      else {
        pQVar1 = *(QString **)local_60;
        lVar3 = QLabel::buddy();
        if (lVar3 != param_2) goto LAB_10064f67b;
        if (param_3 != '\0') {
          local_48 = (QArrayData *)
                     QString::fromAscii_helper
                               ("QLabel { image: url(:/pixmaps/PD10_Theme/exclamation_mark.png); }",
                                0x41);
          QWidget::setStyleSheet(pQVar1);
          if (*(int *)local_48 != -1) {
            if (*(int *)local_48 != 0) {
              LOCK();
              *(int *)local_48 = *(int *)local_48 + -1;
              local_31 = *(int *)local_48 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10064f7a2;
            }
            QArrayData::deallocate(local_48,2,8);
          }
LAB_10064f7a2:
          uVar6 = 1;
          QWidget::setFocus(param_2,7);
          goto LAB_10064f71a;
        }
        local_40 = (QArrayData *)QString::fromAscii_helper("",0);
        QWidget::setStyleSheet(pQVar1);
        if (*(int *)local_40 != -1) {
          if (*(int *)local_40 != 0) {
            LOCK();
            *(int *)local_40 = *(int *)local_40 + -1;
            local_31 = *(int *)local_40 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10064f6f2;
          }
          QArrayData::deallocate(local_40,2,8);
        }
LAB_10064f6f2:
        local_60 = local_60 + 8;
        uVar2 = local_50 ^ 1;
        bVar7 = local_50 == 1;
        local_50 = uVar2;
        if (bVar7) break;
      }
    } while (local_60 != local_58);
  }
  uVar6 = 0;
LAB_10064f71a:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      UNLOCK();
      if (*(int *)local_68 != 0) {
        return uVar6;
      }
      local_31 = 0;
    }
    QListData::dispose(local_68);
  }
  return uVar6;
}

