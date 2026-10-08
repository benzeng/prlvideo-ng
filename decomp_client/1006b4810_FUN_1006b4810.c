
void FUN_1006b4810(long param_1,QAction *param_2,undefined8 param_3)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  QMenu *pQVar4;
  undefined8 uVar5;
  QAction *pQVar6;
  byte bVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  QMenu *pQVar11;
  Connection local_d0 [8];
  Connection local_c8 [8];
  Data *local_c0;
  Data *local_b8;
  Data *local_b0;
  Data *local_a8;
  int local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  Data *local_88;
  Data *local_80;
  Data *local_78;
  Data *local_70;
  int local_68;
  Data *local_60;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  int local_40;
  undefined1 local_31;
  
  if (3 < DAT_10230ffd0) {
    FUN_100df99c0("[MENU_MNG]","prl_client_app",4,"Filling menu bar...");
  }
  QWidget::actions();
  local_58 = local_60;
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 == 0) {
      QListData::detach((int)&local_58);
      lVar8 = (long)*(int *)(local_58 + 8);
      if ((local_60 + (long)*(int *)(local_60 + 8) * 8 != local_58 + lVar8 * 8) &&
         (lVar9 = *(int *)(local_58 + 0xc) - lVar8, lVar9 != 0 && lVar8 <= *(int *)(local_58 + 0xc))
         ) {
        _memcpy(local_58 + lVar8 * 8 + 0x10,local_60 + (long)*(int *)(local_60 + 8) * 8 + 0x10,
                lVar9 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + 1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
    }
  }
  local_50 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
  local_48 = local_58 + (long)*(int *)(local_58 + 0xc) * 8 + 0x10;
  local_40 = 1;
  if (*(int *)local_60 == -1) {
LAB_1006b4924:
    pQVar11 = (QMenu *)0x0;
    for (; local_50 != local_48; local_50 = local_50 + 8) {
      pQVar4 = *(QMenu **)local_50;
      iVar3 = FUN_1006947d0(pQVar4);
      if (iVar3 != 0xf) {
        lVar8 = QAction::menu();
        if (lVar8 != 0) {
          pQVar4 = (QMenu *)QAction::menu();
          WidgetUtils::clearMenuRecursively(pQVar4,true);
        }
        QWidget::removeAction(param_2);
        pQVar4 = pQVar11;
      }
      local_40 = 1;
      pQVar11 = pQVar4;
    }
  }
  else {
    if (*(int *)local_60 == 0) {
LAB_1006b4912:
      QListData::dispose(local_60);
    }
    else {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_1006b4912;
    }
    pQVar11 = (QMenu *)0x0;
    if (local_40 != 0) goto LAB_1006b4924;
  }
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006b49eb;
    }
    QListData::dispose(local_58);
  }
LAB_1006b49eb:
  uVar5 = FUN_1006b9420();
  FUN_1006b96e0(&local_88,uVar5);
  local_80 = local_88;
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 == 0) {
      QListData::detach((int)&local_80);
      lVar8 = (long)*(int *)(local_80 + 8);
      if ((local_88 + (long)*(int *)(local_88 + 8) * 8 != local_80 + lVar8 * 8) &&
         (lVar9 = *(int *)(local_80 + 0xc) - lVar8, lVar9 != 0 && lVar8 <= *(int *)(local_80 + 0xc))
         ) {
        _memcpy(local_80 + lVar8 * 8 + 0x10,local_88 + (long)*(int *)(local_88 + 8) * 8 + 0x10,
                lVar9 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + 1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
    }
  }
  local_78 = local_80 + (long)*(int *)(local_80 + 8) * 8 + 0x10;
  local_70 = local_80 + (long)*(int *)(local_80 + 0xc) * 8 + 0x10;
  local_68 = 1;
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 == 0) {
LAB_1006b4aab:
      QListData::dispose(local_88);
    }
    else {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_1006b4aab;
    }
    if (local_68 == 0) goto LAB_1006b4ef3;
  }
  for (; local_78 != local_70; local_78 = local_78 + 8) {
    iVar3 = FUN_1006947d0(*(undefined8 *)local_78);
    uVar5 = FUN_1006915d0();
    lVar8 = FUN_100691620(uVar5,iVar3,param_3);
    if (lVar8 == 0) {
      if (3 < DAT_10230ffd0) {
        FUN_1006946e0(&local_98,iVar3);
        QString::toLocal8Bit();
        FUN_100df99c0("[MENU_MNG]","prl_client_app",4,"\nCan\'t find action for %s.",
                      local_90 + *(long *)(local_90 + 0x10));
        if (*(int *)local_90 != -1) {
          if (*(int *)local_90 != 0) {
            LOCK();
            *(int *)local_90 = *(int *)local_90 + -1;
            local_31 = *(int *)local_90 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1006b4c14;
          }
          QArrayData::deallocate(local_90,1,8);
        }
LAB_1006b4c14:
        if (*(int *)local_98 != -1) {
          if (*(int *)local_98 != 0) {
            LOCK();
            *(int *)local_98 = *(int *)local_98 + -1;
            local_31 = *(int *)local_98 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1006b4ac0;
          }
          QArrayData::deallocate(local_98,2,8);
        }
      }
    }
    else if (iVar3 == 0xf) {
      if (pQVar11 == (QMenu *)0x0) {
        FUN_100df99c0("[MENU_MNG]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                      "0 != menuHelpAction","MenuManager/CMenuManager.cpp",0xa6,"fillMenuBar");
      }
      uVar5 = FUN_1006e1350();
      FUN_1006e5710(uVar5,pQVar11,param_3);
      FUN_1006b50a0(pQVar11,0);
    }
    else {
      cVar2 = FUN_1006b50a0(lVar8,0);
      if (cVar2 == '\0') {
        pQVar6 = (QAction *)0x0;
        if ((*(long *)(param_1 + 0x18) != 0) &&
           (pQVar6 = (QAction *)0x0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
          pQVar6 = *(QAction **)(param_1 + 0x20);
        }
        uVar5 = FUN_1006e1350();
        bVar7 = (pQVar6 == param_2) + 1;
        bVar1 = bVar7 | 4;
        if (iVar3 != 0xd) {
          bVar1 = bVar7;
        }
        lVar8 = FUN_1006e1670(uVar5,lVar8,param_2,param_3,bVar1);
        if (lVar8 == 0) {
          FUN_100df99c0("[MENU_MNG]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                        "0 != menu","MenuManager/CMenuManager.cpp",0xbd,"fillMenuBar");
        }
        QWidget::actions();
        local_b8 = local_c0;
        if (*(int *)local_c0 != -1) {
          if (*(int *)local_c0 == 0) {
            QListData::detach((int)&local_b8);
            lVar9 = (long)*(int *)(local_b8 + 8);
            if ((local_c0 + (long)*(int *)(local_c0 + 8) * 8 != local_b8 + lVar9 * 8) &&
               (lVar10 = *(int *)(local_b8 + 0xc) - lVar9,
               lVar10 != 0 && lVar9 <= *(int *)(local_b8 + 0xc))) {
              _memcpy(local_b8 + lVar9 * 8 + 0x10,local_c0 + (long)*(int *)(local_c0 + 8) * 8 + 0x10
                      ,lVar10 * 8);
            }
          }
          else {
            LOCK();
            *(int *)local_c0 = *(int *)local_c0 + 1;
            local_31 = *(int *)local_c0 != 0;
            UNLOCK();
          }
        }
        local_b0 = local_b8 + (long)*(int *)(local_b8 + 8) * 8 + 0x10;
        local_a8 = local_b8 + (long)*(int *)(local_b8 + 0xc) * 8 + 0x10;
        local_a0 = 1;
        if (*(int *)local_c0 == -1) {
LAB_1006b4e2c:
          for (; local_b0 != local_a8; local_b0 = local_b0 + 8) {
            FUN_1006b50a0(*(undefined8 *)local_b0,lVar8);
            local_a0 = 1;
          }
        }
        else {
          if (*(int *)local_c0 == 0) {
LAB_1006b4df9:
            QListData::dispose(local_c0);
          }
          else {
            LOCK();
            *(int *)local_c0 = *(int *)local_c0 + -1;
            local_31 = *(int *)local_c0 != 0;
            UNLOCK();
            if (!(bool)local_31) goto LAB_1006b4df9;
          }
          if (local_a0 != 0) goto LAB_1006b4e2c;
        }
        if (*(int *)local_b8 != -1) {
          if (*(int *)local_b8 != 0) {
            LOCK();
            *(int *)local_b8 = *(int *)local_b8 + -1;
            local_31 = *(int *)local_b8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1006b4e6e;
          }
          QListData::dispose(local_b8);
        }
LAB_1006b4e6e:
        QMenuBar::insertMenu(param_2,pQVar11);
        QObject::connect(local_c8,lVar8,"2aboutToShow()",param_1,"1menuShown()",0);
        QMetaObject::Connection::~Connection(local_c8);
        QObject::connect(local_d0,lVar8,"2aboutToHide()",param_1,"1menuHidden()");
        QMetaObject::Connection::~Connection(local_d0);
      }
    }
LAB_1006b4ac0:
    local_68 = 1;
  }
LAB_1006b4ef3:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      UNLOCK();
      if (*(int *)local_80 != 0) {
        return;
      }
      local_31 = 0;
    }
    QListData::dispose(local_80);
  }
  return;
}

