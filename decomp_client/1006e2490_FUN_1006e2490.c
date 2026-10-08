
void FUN_1006e2490(undefined8 param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  QAction *pQVar5;
  long lVar6;
  Data *local_70;
  Data *local_68;
  Data *local_60;
  Data *local_58;
  int local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if ((param_2 == 0) || (lVar3 = QAction::menu(), lVar3 == 0)) {
    FUN_100df99c0("[MENU_MNG]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "0 != menuAction && 0 != menuAction->menu()","MenuManager/CMenuBuilder.cpp",0x117,
                  "populateMenu");
  }
  if (3 < DAT_10230ffd0) {
    FUN_100694760(&local_48,param_2);
    QString::toLocal8Bit();
    FUN_100df99c0("[MENU_MNG]","prl_client_app",4,"Populating menu for %s",
                  local_40 + *(long *)(local_40 + 0x10));
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006e2586;
      }
      QArrayData::deallocate(local_40,1,8);
    }
LAB_1006e2586:
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006e25b6;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_1006e25b6:
  QAction::menu();
  QMenu::clear();
  uVar2 = FUN_1006947d0(param_2);
  uVar4 = FUN_1006b9420();
  lVar3 = FUN_1006b94a0(uVar4,uVar2);
  if ((lVar3 == 0) || (lVar3 = QAction::menu(), lVar3 == 0)) {
    FUN_100df99c0("[MENU_MNG]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "0 != protoMenuAction && 0 != protoMenuAction->menu()",
                  "MenuManager/CMenuBuilder.cpp",0x120,"populateMenu");
  }
  QAction::menu();
  QWidget::actions();
  local_68 = local_70;
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 == 0) {
      QListData::detach((int)&local_68);
      lVar3 = (long)*(int *)(local_68 + 8);
      if ((local_70 + (long)*(int *)(local_70 + 8) * 8 != local_68 + lVar3 * 8) &&
         (lVar6 = *(int *)(local_68 + 0xc) - lVar3, lVar6 != 0 && lVar3 <= *(int *)(local_68 + 0xc))
         ) {
        _memcpy(local_68 + lVar3 * 8 + 0x10,local_70 + (long)*(int *)(local_70 + 8) * 8 + 0x10,
                lVar6 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + 1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
    }
  }
  local_60 = local_68 + (long)*(int *)(local_68 + 8) * 8 + 0x10;
  local_58 = local_68 + (long)*(int *)(local_68 + 0xc) * 8 + 0x10;
  local_50 = 1;
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 == 0) {
LAB_1006e26f2:
      QListData::dispose(local_70);
    }
    else {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_1006e26f2;
    }
    if (local_50 == 0) goto LAB_1006e27ff;
  }
  for (; local_60 != local_58; local_60 = local_60 + 8) {
    uVar4 = *(undefined8 *)local_60;
    cVar1 = QAction::isSeparator();
    if (cVar1 == '\0') {
      uVar2 = FUN_1006947d0(uVar4);
      uVar4 = FUN_1006915d0();
      lVar3 = FUN_100691620(uVar4,uVar2,param_3);
      if (lVar3 != 0) {
        lVar3 = QAction::menu();
        if (lVar3 != 0) {
          uVar4 = QAction::menu();
          lVar3 = FUN_1006e13b0(param_1,uVar2,uVar4,param_3,param_4);
          if (lVar3 != 0) {
            QMenu::menuAction();
          }
        }
        pQVar5 = (QAction *)QAction::menu();
        QWidget::addAction(pQVar5);
      }
    }
    else {
      QAction::menu();
      QMenu::addSeparator();
    }
    local_50 = 1;
  }
LAB_1006e27ff:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      UNLOCK();
      if (*(int *)local_68 != 0) {
        return;
      }
      local_31 = 0;
    }
    QListData::dispose(local_68);
  }
  return;
}

