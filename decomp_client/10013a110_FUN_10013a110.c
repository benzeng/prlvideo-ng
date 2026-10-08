
undefined1 FUN_10013a110(QObject *param_1,QEvent *param_2,long param_3)

{
  Data *pDVar1;
  QEvent *pQVar2;
  char cVar3;
  undefined1 uVar4;
  long lVar5;
  long lVar6;
  Data *pDVar7;
  Data *local_48;
  Data *local_40;
  Data *local_38;
  undefined1 local_29;
  
  if (((*(short *)(param_3 + 0x10) != 8) || (cVar3 = QButtonGroup::exclusive(), cVar3 == '\0')) ||
     (cVar3 = FUN_100139f20(param_1), cVar3 != '\0')) goto LAB_10013a277;
  QButtonGroup::buttons();
  local_40 = local_48;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 == 0) {
      QListData::detach((int)&local_40);
      lVar5 = (long)*(int *)(local_40 + 8);
      if ((local_48 + (long)*(int *)(local_48 + 8) * 8 != local_40 + lVar5 * 8) &&
         (lVar6 = *(int *)(local_40 + 0xc) - lVar5, lVar6 != 0 && lVar5 <= *(int *)(local_40 + 0xc))
         ) {
        _memcpy(local_40 + lVar5 * 8 + 0x10,local_48 + (long)*(int *)(local_48 + 8) * 8 + 0x10,
                lVar6 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + 1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
    }
  }
  local_38 = local_40 + (long)*(int *)(local_40 + 8) * 8 + 0x10;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10013a1fb;
    }
    QListData::dispose(local_48);
  }
LAB_10013a1fb:
  pDVar7 = local_40;
  if (local_38 != local_40 + (long)*(int *)(local_40 + 0xc) * 8 + 0x10) {
    do {
      pDVar1 = local_38 + 8;
      pQVar2 = *(QEvent **)local_38;
      local_38 = pDVar1;
      if ((pQVar2 != param_2) &&
         (cVar3 = QAbstractButton::isChecked(), pDVar7 = local_40, cVar3 != '\0')) {
        QWidget::setFocus(pQVar2,7);
        if (*(int *)local_40 == -1) {
          return 1;
        }
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          UNLOCK();
          if (*(int *)local_40 != 0) {
            return 1;
          }
          local_29 = 0;
        }
        QListData::dispose(local_40);
        return 1;
      }
    } while (local_38 != pDVar7 + (long)*(int *)(pDVar7 + 0xc) * 8 + 0x10);
  }
  if (*(int *)pDVar7 != -1) {
    if (*(int *)pDVar7 != 0) {
      LOCK();
      *(int *)pDVar7 = *(int *)pDVar7 + -1;
      local_29 = *(int *)pDVar7 != 0;
      UNLOCK();
      pDVar7 = local_40;
      if ((bool)local_29) goto LAB_10013a277;
    }
    QListData::dispose(pDVar7);
  }
LAB_10013a277:
  uVar4 = QObject::eventFilter(param_1,param_2);
  return uVar4;
}

