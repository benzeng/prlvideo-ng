
undefined1 FUN_100659600(long param_1,long param_2,char param_3)

{
  QString *pQVar1;
  uint uVar2;
  long lVar3;
  QArrayData *pQVar4;
  long lVar5;
  long lVar6;
  undefined1 uVar7;
  bool bVar8;
  Data *local_48;
  Data *local_40;
  Data *local_38;
  uint local_30;
  undefined1 local_21;
  
  local_48 = *(Data **)(param_1 + 0x108);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 == 0) {
      QListData::detach((int)&local_48);
      lVar5 = (long)*(int *)(local_48 + 8);
      lVar3 = *(long *)(param_1 + 0x108);
      if (((Data *)(lVar3 + (long)*(int *)(lVar3 + 8) * 8) != local_48 + lVar5 * 8) &&
         (lVar6 = *(int *)(local_48 + 0xc) - lVar5, lVar6 != 0 && lVar5 <= *(int *)(local_48 + 0xc))
         ) {
        _memcpy(local_48 + lVar5 * 8 + 0x10,(void *)(lVar3 + 0x10 + (long)*(int *)(lVar3 + 8) * 8),
                lVar6 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + 1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
    }
  }
  local_40 = local_48 + (long)*(int *)(local_48 + 8) * 8 + 0x10;
  local_38 = local_48 + (long)*(int *)(local_48 + 0xc) * 8 + 0x10;
  local_30 = 1;
  if (*(int *)(local_48 + 8) != *(int *)(local_48 + 0xc)) {
    do {
      if (local_30 == 0) {
LAB_1006596cb:
        local_40 = local_40 + 8;
        local_30 = 1;
      }
      else {
        pQVar1 = *(QString **)local_40;
        lVar3 = QLabel::buddy();
        if (lVar3 != param_2) goto LAB_1006596cb;
        if (param_3 != '\0') {
          pQVar4 = (QArrayData *)QString::fromAscii_helper("!",1);
          QLabel::setText(pQVar1);
          if (*(int *)pQVar4 != -1) {
            if (*(int *)pQVar4 != 0) {
              LOCK();
              *(int *)pQVar4 = *(int *)pQVar4 + -1;
              local_21 = *(int *)pQVar4 != 0;
              UNLOCK();
              if ((bool)local_21) goto LAB_1006597a7;
            }
            QArrayData::deallocate(pQVar4,2,8);
          }
LAB_1006597a7:
          uVar7 = 1;
          QWidget::setFocus(param_2,7);
          goto LAB_100659722;
        }
        QLabel::clear();
        local_40 = local_40 + 8;
        uVar2 = local_30 ^ 1;
        bVar8 = local_30 == 1;
        local_30 = uVar2;
        if (bVar8) break;
      }
    } while (local_40 != local_38);
  }
  uVar7 = 0;
LAB_100659722:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return uVar7;
      }
      local_21 = 0;
    }
    QListData::dispose(local_48);
  }
  return uVar7;
}

