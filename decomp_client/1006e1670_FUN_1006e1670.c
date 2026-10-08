
undefined8
FUN_1006e1670(undefined8 param_1,QMenu *param_2,QWidget *param_3,undefined8 param_4,uint param_5)

{
  int iVar1;
  Data *pDVar2;
  char cVar3;
  QArrayData *pQVar4;
  QArrayData *pQVar5;
  QArrayData *pQVar6;
  QMenu *pQVar7;
  QMenu *pQVar8;
  undefined8 uVar9;
  Data *pDVar10;
  long lVar11;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QVariant local_a8;
  Connection local_98 [8];
  QVariant local_90;
  QString local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  Data *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (3 < DAT_10230ffd0) {
    FUN_100694760(&local_48,param_2);
    QString::toLocal8Bit();
    FUN_100df99c0("[MENU_MNG]","prl_client_app",4,"Creating menu for %s",
                  local_40 + *(long *)(local_40 + 0x10));
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006e171f;
      }
      QArrayData::deallocate(local_40,1,8);
    }
LAB_1006e171f:
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006e174f;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_1006e174f:
  pQVar7 = param_2;
  if ((param_5 & 2) == 0) {
    local_50 = (Data *)PTR_shared_null_1021e15e8;
    pQVar4 = (QArrayData *)QString::fromAscii_helper("visible",7);
    local_58 = pQVar4;
    FUN_1000341d0(&local_50,&local_58);
    pQVar5 = (QArrayData *)QString::fromAscii_helper("enabled",7);
    local_60 = pQVar5;
    FUN_1000341d0(&local_50,&local_60);
    pQVar6 = (QArrayData *)QString::fromAscii_helper("shortcut",8);
    local_68 = pQVar6;
    FUN_1000341d0(&local_50,&local_68);
    pQVar7 = (QMenu *)FUN_10068e430(param_2,param_3,0,&local_50);
    if (*(int *)pQVar6 != -1) {
      if (*(int *)pQVar6 != 0) {
        LOCK();
        *(int *)pQVar6 = *(int *)pQVar6 + -1;
        local_31 = *(int *)pQVar6 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006e1824;
      }
      QArrayData::deallocate(pQVar6,2,8);
    }
LAB_1006e1824:
    if (*(int *)pQVar5 != -1) {
      if (*(int *)pQVar5 != 0) {
        LOCK();
        *(int *)pQVar5 = *(int *)pQVar5 + -1;
        local_31 = *(int *)pQVar5 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006e1853;
      }
      QArrayData::deallocate(pQVar5,2,8);
    }
LAB_1006e1853:
    if (*(int *)pQVar4 != -1) {
      if (*(int *)pQVar4 != 0) {
        LOCK();
        *(int *)pQVar4 = *(int *)pQVar4 + -1;
        local_31 = *(int *)pQVar4 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006e1880;
      }
      QArrayData::deallocate(pQVar4,2,8);
    }
LAB_1006e1880:
    pDVar2 = local_50;
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006e1918;
      }
      iVar1 = *(int *)(local_50 + 0xc);
      if (iVar1 != *(int *)(local_50 + 8)) {
        lVar11 = (long)*(int *)(local_50 + 8) * 8 + (long)iVar1 * -8;
        pDVar10 = local_50 + (long)iVar1 * 8 + 8;
        do {
          pQVar4 = *(QArrayData **)pDVar10;
          if (*(int *)pQVar4 == 0) {
LAB_1006e18f0:
            QArrayData::deallocate(pQVar4,2,8);
          }
          else if (*(int *)pQVar4 != -1) {
            LOCK();
            *(int *)pQVar4 = *(int *)pQVar4 + -1;
            local_31 = *(int *)pQVar4 != 0;
            UNLOCK();
            if (!(bool)local_31) {
              pQVar4 = *(QArrayData **)pDVar10;
              goto LAB_1006e18f0;
            }
          }
          pDVar10 = pDVar10 + -8;
          lVar11 = lVar11 + 8;
        } while (lVar11 != 0);
      }
      QListData::dispose(pDVar2);
    }
LAB_1006e1918:
    if (pQVar7 == (QMenu *)0x0) {
      FUN_100694760(&local_78,param_2);
      QString::toLocal8Bit();
      FUN_100df99c0("[MENU_MNG]","prl_client_app",0,"Failed to copy action %s",
                    local_70 + *(long *)(local_70 + 0x10));
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_31 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1006e1992;
        }
        QArrayData::deallocate(local_70,1,8);
      }
LAB_1006e1992:
      if (*(int *)local_78 == -1) {
        return 0;
      }
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        UNLOCK();
        if (*(int *)local_78 != 0) {
          return 0;
        }
        local_31 = 0;
      }
      QArrayData::deallocate(local_78,2,8);
      return 0;
    }
  }
  pQVar8 = (QMenu *)QAction::menu();
  if (pQVar8 != (QMenu *)0x0) {
    WidgetUtils::clearMenuRecursively(pQVar8,true);
    QObject::deleteLater();
  }
  pQVar8 = operator_new(0x30);
  QAction::text();
  QMenu::QMenu(pQVar8,&local_80,param_3);
  if (*(int *)local_80.field0_0x0 != -1) {
    if (*(int *)local_80.field0_0x0 != 0) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
      local_31 = *(int *)local_80.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006e1a59;
    }
    QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
  }
LAB_1006e1a59:
  QAction::setMenu(pQVar7);
  QObject::property((char *)&local_90);
  cVar3 = QVariant::toBool();
  QVariant::~QVariant(&local_90);
  if (cVar3 != '\0') {
    QObject::connect(local_98,pQVar8,"2aboutToShow()",param_1,"1onAboutToShowMenu()",0x80);
    QMetaObject::Connection::~Connection(local_98);
  }
  QObject::property((char *)&local_a8);
  cVar3 = QVariant::toBool();
  if (cVar3 == '\0') {
    QVariant::~QVariant(&local_a8);
  }
  else {
    QVariant::~QVariant(&local_a8);
    if ((param_5 & 4) == 0) goto LAB_1006e1c57;
  }
  FUN_1006e1fc0(&local_b0,pQVar7);
  cVar3 = FUN_100a1fa30(param_1,&local_b0);
  if (cVar3 == '\0') {
    FUN_1006e2490(param_1,pQVar7,param_4,param_5);
  }
  else {
    cVar3 = FUN_1006e2110(pQVar7,param_4,param_5);
    if (cVar3 == '\0') {
      QString::toLatin1();
      FUN_100df99c0("[MENU_MNG]","prl_client_app",0,"(!)Error: failed to invoke %s",
                    local_b8 + *(long *)(local_b8 + 0x10));
      if (*(int *)local_b8 != -1) {
        if (*(int *)local_b8 != 0) {
          LOCK();
          *(int *)local_b8 = *(int *)local_b8 + -1;
          local_31 = *(int *)local_b8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1006e1bc4;
        }
        QArrayData::deallocate(local_b8,1,8);
      }
LAB_1006e1bc4:
      FUN_100df99c0("[MENU_MNG]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]","invokeRes"
                    ,"MenuManager/CMenuBuilder.cpp",0x10b,"createMenu");
    }
  }
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_31 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006e1c57;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_1006e1c57:
  uVar9 = QAction::menu();
  return uVar9;
}

