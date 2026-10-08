
void FUN_1001c9150(QMenu *param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  Data *local_48;
  Data *local_40;
  Data *local_38;
  Data *local_30;
  int local_28;
  undefined1 local_19;
  
  if (param_1 == (QMenu *)0x0) {
    return;
  }
  QWidget::actions();
  local_40 = local_48;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 == 0) {
      QListData::detach((int)&local_40);
      lVar2 = (long)*(int *)(local_40 + 8);
      if ((local_48 + (long)*(int *)(local_48 + 8) * 8 != local_40 + lVar2 * 8) &&
         (lVar3 = *(int *)(local_40 + 0xc) - lVar2, lVar3 != 0 && lVar2 <= *(int *)(local_40 + 0xc))
         ) {
        _memcpy(local_40 + lVar2 * 8 + 0x10,local_48 + (long)*(int *)(local_48 + 8) * 8 + 0x10,
                lVar3 * 8);
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
  if (*(int *)local_48 == 0) {
LAB_1001c921b:
    QListData::dispose(local_48);
LAB_1001c9220:
    if (local_28 != 0) goto LAB_1001c922e;
  }
  else {
    if (*(int *)local_48 != -1) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_19 = *(int *)local_48 != 0;
      UNLOCK();
      if (!(bool)local_19) goto LAB_1001c921b;
      goto LAB_1001c9220;
    }
LAB_1001c922e:
    if (local_38 != local_30) {
      do {
        cVar1 = QAction::isVisible();
        if (cVar1 == '\0') {
          QWidget::removeAction((QAction *)param_1);
        }
        local_38 = local_38 + 8;
        local_28 = 1;
      } while (local_38 != local_30);
    }
  }
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1001c9299;
    }
    QListData::dispose(local_40);
  }
LAB_1001c9299:
  WidgetUtils::normalizeSeparators(param_1,true);
  return;
}

