
undefined1 FUN_1006b50a0(undefined8 param_1,QAction *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  QMenu *pQVar5;
  undefined8 uVar6;
  long lVar7;
  QVariant *this;
  Data *local_70;
  Data *local_68;
  Data *local_60;
  Data *local_58;
  int local_50;
  QVariant local_48;
  QVariant local_38;
  undefined1 local_21;
  
  cVar1 = FUN_1001248b0();
  if (cVar1 == '\0') {
    uVar3 = FUN_100060bb0();
    iVar2 = FUN_10005ffb0(uVar3);
    if (iVar2 != 3) goto LAB_1006b50f7;
    QObject::property((char *)&local_48);
    cVar1 = QVariant::toBool();
    this = &local_48;
  }
  else {
LAB_1006b50f7:
    QObject::property((char *)&local_38);
    cVar1 = QVariant::toBool();
    this = &local_38;
  }
  QVariant::~QVariant(this);
  lVar4 = QAction::menu();
  if (cVar1 != '\0') {
    if (lVar4 != 0) {
      pQVar5 = (QMenu *)QAction::menu();
      WidgetUtils::clearMenuRecursively(pQVar5,true);
    }
    if (param_2 != (QAction *)0x0) {
      QWidget::removeAction(param_2);
      return 1;
    }
    return 1;
  }
  if (lVar4 == 0) {
    return 0;
  }
  QAction::menu();
  QWidget::actions();
  local_68 = local_70;
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 == 0) {
      QListData::detach((int)&local_68);
      lVar4 = (long)*(int *)(local_68 + 8);
      if ((local_70 + (long)*(int *)(local_70 + 8) * 8 != local_68 + lVar4 * 8) &&
         (lVar7 = *(int *)(local_68 + 0xc) - lVar4, lVar7 != 0 && lVar4 <= *(int *)(local_68 + 0xc))
         ) {
        _memcpy(local_68 + lVar4 * 8 + 0x10,local_70 + (long)*(int *)(local_70 + 8) * 8 + 0x10,
                lVar7 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + 1;
      local_21 = *(int *)local_70 != 0;
      UNLOCK();
    }
  }
  local_60 = local_68 + (long)*(int *)(local_68 + 8) * 8 + 0x10;
  local_58 = local_68 + (long)*(int *)(local_68 + 0xc) * 8 + 0x10;
  local_50 = 1;
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 == 0) {
LAB_1006b5229:
      QListData::dispose(local_70);
    }
    else {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_21 = *(int *)local_70 != 0;
      UNLOCK();
      if (!(bool)local_21) goto LAB_1006b5229;
    }
    if (local_50 == 0) goto LAB_1006b52a7;
  }
  for (; local_60 != local_58; local_60 = local_60 + 8) {
    uVar3 = *(undefined8 *)local_60;
    uVar6 = QAction::menu();
    FUN_1006b50a0(uVar3,uVar6);
    local_50 = 1;
  }
LAB_1006b52a7:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      UNLOCK();
      if (*(int *)local_68 != 0) {
        return 0;
      }
      local_21 = 0;
    }
    QListData::dispose(local_68);
  }
  return 0;
}

