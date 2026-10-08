
void * FUN_1006f50c0(void)

{
  uint uVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  bool bVar6;
  Data *local_50;
  Data *local_48;
  Data *local_40;
  Data *local_38;
  uint local_30;
  undefined1 local_21;
  
  QApplication::topLevelWidgets();
  local_48 = local_50;
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 == 0) {
      QListData::detach((int)&local_48);
      lVar3 = (long)*(int *)(local_48 + 8);
      if ((local_50 + (long)*(int *)(local_50 + 8) * 8 != local_48 + lVar3 * 8) &&
         (lVar4 = *(int *)(local_48 + 0xc) - lVar3, lVar4 != 0 && lVar3 <= *(int *)(local_48 + 0xc))
         ) {
        _memcpy(local_48 + lVar3 * 8 + 0x10,local_50 + (long)*(int *)(local_50 + 8) * 8 + 0x10,
                lVar4 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + 1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
    }
  }
  local_40 = local_48 + (long)*(int *)(local_48 + 8) * 8 + 0x10;
  local_38 = local_48 + (long)*(int *)(local_48 + 0xc) * 8 + 0x10;
  local_30 = 1;
  if (*(int *)local_50 == -1) {
LAB_1006f5195:
    pvVar5 = (void *)0x0;
    do {
      while( true ) {
        pvVar2 = pvVar5;
        if (local_40 == local_38) goto LAB_1006f5212;
        if ((local_30 != 0) &&
           (pvVar2 = (void *)QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022264a0),
           pvVar2 != (void *)0x0)) break;
        local_40 = local_40 + 8;
        local_30 = 1;
      }
      local_40 = local_40 + 8;
      uVar1 = local_30 ^ 1;
      bVar6 = local_30 != 1;
      pvVar5 = pvVar2;
      local_30 = uVar1;
    } while (bVar6);
  }
  else {
    if (*(int *)local_50 == 0) {
LAB_1006f5183:
      QListData::dispose(local_50);
    }
    else {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if (!(bool)local_21) goto LAB_1006f5183;
    }
    pvVar2 = (void *)0x0;
    if (local_30 != 0) goto LAB_1006f5195;
  }
LAB_1006f5212:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006f5238;
    }
    QListData::dispose(local_48);
  }
LAB_1006f5238:
  if (pvVar2 == (void *)0x0) {
    pvVar2 = operator_new(0x68);
    FUN_1006f5300(pvVar2,0);
  }
  QWidget::showNormal();
  QWidget::raise();
  QWidget::activateWindow();
  return pvVar2;
}

