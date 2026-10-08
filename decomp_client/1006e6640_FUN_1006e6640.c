
QAction * FUN_1006e6640(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  QObject *this;
  QAction *pQVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  Data *local_68;
  Data *local_60;
  QArrayData *local_58;
  Data *local_50;
  Data *local_48;
  Data *local_40;
  Data *local_38;
  int local_30;
  undefined1 local_21;
  
  if (DAT_102310988 == (QObject *)0x0) {
    this = operator_new(0x10);
    QObject::QObject(this,(QObject *)0x0);
    *(undefined ***)this = &PTR_FUN_1022257d0;
    DAT_102310988 = this;
  }
  pQVar3 = (QAction *)FUN_1006e13b0(DAT_102310988,7,param_3,param_2,1);
  if (pQVar3 == (QAction *)0x0) {
    return (QAction *)0x0;
  }
  QWidget::actions();
  local_48 = local_50;
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 == 0) {
      QListData::detach((int)&local_48);
      lVar4 = (long)*(int *)(local_48 + 8);
      if ((local_50 + (long)*(int *)(local_50 + 8) * 8 != local_48 + lVar4 * 8) &&
         (lVar5 = *(int *)(local_48 + 0xc) - lVar4, lVar5 != 0 && lVar4 <= *(int *)(local_48 + 0xc))
         ) {
        _memcpy(local_48 + lVar4 * 8 + 0x10,local_50 + (long)*(int *)(local_50 + 8) * 8 + 0x10,
                lVar5 * 8);
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
LAB_1006e676f:
    if (local_40 != local_38) {
      bVar6 = false;
      do {
        if (!bVar6) {
          iVar2 = FUN_1006947d0(*(undefined8 *)local_40);
          bVar6 = iVar2 == 0x3a;
        }
        if (bVar6) {
          QWidget::removeAction(pQVar3);
        }
        local_40 = local_40 + 8;
        local_30 = 1;
      } while (local_40 != local_38);
    }
  }
  else {
    if (*(int *)local_50 == 0) {
LAB_1006e6764:
      QListData::dispose(local_50);
    }
    else {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if (!(bool)local_21) goto LAB_1006e6764;
    }
    if (local_30 != 0) goto LAB_1006e676f;
  }
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006e67e5;
    }
    QListData::dispose(local_48);
  }
LAB_1006e67e5:
  QMetaObject::tr((char *)&local_58,(char *)&PTR_staticMetaObject_102225790,0x1dc621c);
  QMenu::setTitle((QString *)pQVar3);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006e6842;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1006e6842:
  QWidget::actions();
  FUN_1006e7700(&local_60);
  cVar1 = QAction::isSeparator();
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_21 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006e688a;
    }
    QListData::dispose(local_60);
  }
LAB_1006e688a:
  if (cVar1 != '\0') {
    QWidget::actions();
    FUN_1006e7700(&local_68);
    QWidget::removeAction(pQVar3);
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        UNLOCK();
        if (*(int *)local_68 != 0) {
          return pQVar3;
        }
        local_21 = 0;
      }
      QListData::dispose(local_68);
    }
  }
  return pQVar3;
}

