
void FUN_1006e2ce0(undefined8 param_1,undefined8 param_2,long *param_3,undefined4 param_4)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  QWidget *pQVar10;
  long *plVar11;
  undefined8 uVar12;
  QMenu *pQVar13;
  char local_a4;
  Data *local_90;
  Data *local_88;
  Data *local_80;
  undefined4 local_78;
  Data *local_70;
  QVariant local_68;
  QArrayData *local_58;
  QVariant local_50;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (3 < DAT_10230ffd0) {
    FUN_100df99c0("[MENU_MNG]","prl_client_app",4,"Populating Devices menu...");
  }
  lVar6 = *param_3;
  if (((lVar6 == 0) || (*(int *)(lVar6 + 4) == 0)) || (param_3[1] == 0)) {
    FUN_100df99c0("[MENU_MNG]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "! context.isNull()","MenuManager/CMenuBuilder.cpp",0x167,"populateMenuDevices");
    lVar6 = *param_3;
    if (lVar6 == 0) {
      return;
    }
  }
  if (*(int *)(lVar6 + 4) == 0) {
    return;
  }
  if (param_3[1] == 0) {
    return;
  }
  uVar5 = FUN_100152280();
  QObject::property((char *)&local_50);
  QVariant::toString();
  QObject::property((char *)&local_68);
  QVariant::toString();
  lVar6 = FUN_100154930(uVar5,&local_40,&local_58);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006e2e69;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1006e2e69:
  QVariant::~QVariant(&local_68);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006e2ea2;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1006e2ea2:
  QVariant::~QVariant(&local_50);
  if (lVar6 == 0) {
    FUN_100df99c0("[MENU_MNG]","prl_client_app",0,"VM is invalid");
    return;
  }
  lVar7 = FUN_10018f4e0(lVar6);
  if (lVar7 == 0) {
    return;
  }
  uVar5 = FUN_10018c280(lVar6);
  lVar8 = FUN_100319960(uVar5);
  if (lVar8 == 0) {
    local_a4 = '\0';
  }
  else {
    local_a4 = '\0';
    lVar9 = FUN_100323e30(lVar8,0);
    if (lVar9 != 0) {
      pQVar10 = (QWidget *)FUN_100323e30(lVar8,0);
      local_a4 = WidgetUtils::isBlockedByModal(pQVar10);
    }
  }
  plVar11 = (long *)FUN_1007c65a0(lVar7);
  local_70 = (Data *)*plVar11;
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 == 0) {
      QListData::detach((int)&local_70);
      lVar8 = (long)*(int *)(local_70 + 8);
      lVar7 = *plVar11;
      if (((Data *)(lVar7 + (long)*(int *)(lVar7 + 8) * 8) != local_70 + lVar8 * 8) &&
         (lVar9 = *(int *)(local_70 + 0xc) - lVar8, lVar9 != 0 && lVar8 <= *(int *)(local_70 + 0xc))
         ) {
        _memcpy(local_70 + lVar8 * 8 + 0x10,(void *)(lVar7 + 0x10 + (long)*(int *)(lVar7 + 8) * 8),
                lVar9 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + 1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
    }
  }
  local_90 = local_70;
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 == 0) {
      QListData::detach((int)&local_90);
      lVar7 = (long)*(int *)(local_90 + 8);
      if ((local_70 + (long)*(int *)(local_70 + 8) * 8 != local_90 + lVar7 * 8) &&
         (lVar8 = *(int *)(local_90 + 0xc) - lVar7, lVar8 != 0 && lVar7 <= *(int *)(local_90 + 0xc))
         ) {
        _memcpy(local_90 + lVar7 * 8 + 0x10,local_70 + (long)*(int *)(local_70 + 8) * 8 + 0x10,
                lVar8 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + 1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
    }
  }
  local_88 = local_90 + (long)*(int *)(local_90 + 8) * 8 + 0x10;
  local_80 = local_90 + (long)*(int *)(local_90 + 0xc) * 8 + 0x10;
  if (*(int *)(local_90 + 8) != *(int *)(local_90 + 0xc)) {
    do {
      local_78 = 1;
      uVar5 = *(undefined8 *)local_88;
      uVar12 = FUN_10018c2b0(lVar6);
      uVar3 = FUN_1007bd980(uVar5);
      uVar4 = FUN_1007bd990(uVar5);
      cVar1 = FUN_10011a4a0(uVar12,uVar3,uVar4);
      if (cVar1 != '\0') {
        uVar12 = QAction::menu();
        uVar2 = 1;
        if (local_a4 == '\0') {
          uVar2 = FUN_10018ff50(lVar6);
        }
        FUN_1006e3320(param_1,uVar5,uVar12,uVar2);
        pQVar13 = (QMenu *)QAction::menu();
        QMenu::addMenu(pQVar13);
      }
      local_88 = local_88 + 8;
    } while (local_88 != local_80);
  }
  local_78 = 1;
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006e3122;
    }
    QListData::dispose(local_90);
  }
LAB_1006e3122:
  QAction::menu();
  QMenu::addSeparator();
  uVar5 = QAction::menu();
  lVar6 = 0;
  if ((*param_3 != 0) && (lVar6 = 0, *(int *)(*param_3 + 4) != 0)) {
    lVar6 = param_3[1];
  }
  lVar6 = FUN_1006e13b0(param_1,0xe,uVar5,lVar6,param_4);
  if (lVar6 != 0) {
    pQVar13 = (QMenu *)QAction::menu();
    QMenu::addMenu(pQVar13);
  }
  uVar5 = QAction::menu();
  lVar6 = 0;
  if ((*param_3 != 0) && (lVar6 = 0, *(int *)(*param_3 + 4) != 0)) {
    lVar6 = param_3[1];
  }
  lVar6 = FUN_1006e13b0(param_1,0xb,uVar5,lVar6,param_4);
  if (lVar6 != 0) {
    pQVar13 = (QMenu *)QAction::menu();
    QMenu::addMenu(pQVar13);
  }
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      UNLOCK();
      if (*(int *)local_70 != 0) {
        return;
      }
      local_31 = 0;
    }
    QListData::dispose(local_70);
  }
  return;
}

