
/* Function Stack Size: 0x18 bytes */

void CMacMenuBarAppMenuHandler::terminate_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  CTaskGenericId *pCVar9;
  void *pvVar10;
  QArrayData *pQVar11;
  QArrayData *pQVar12;
  QArrayData *local_a0;
  QArrayData *local_98;
  CTaskGenericId local_90 [24];
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QString local_58;
  QString local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  puVar2 = PTR_shared_null_1021e1288;
  puVar1 = PTR__NSApp_1021e1070;
  lVar6 = *(long *)(*(long *)(param_1 + m_menuManagerPrivate) + 0x40);
  if (((lVar6 == 0) || (*(int *)(lVar6 + 4) == 0)) ||
     (*(long *)(*(long *)(param_1 + m_menuManagerPrivate) + 0x48) == 0)) {
    MacUtils::terminateNSApp();
    return;
  }
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (*(undefined8 *)PTR__NSApp_1021e1070,PTR_s_mainMenu_102269d78);
  lVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar5,PTR_s_itemAtIndex__102269d80,0);
  if ((lVar6 != 0) &&
     (lVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)(lVar6,PTR_s_submenu_102269d88),
     puVar3 = PTR__OBJC_CLASS___NSString_10226a7c8, lVar6 != 0)) {
    uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)(lVar6,PTR_s_title_102268f30);
    if (puVar3 == (undefined *)0x0) {
      local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
    }
    else {
      _objc_msgSend_stret((undefined *)&local_48,(ID)puVar3,PTR_s_QStringWithString__1022696d0,uVar5
                         );
    }
    QString::operator=(&local_40,&local_48);
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_31 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10006f67d;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
  }
LAB_10006f67d:
  local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar2;
  uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)(*(undefined8 *)puVar1,PTR_s_mainMenu_102269d78);
  uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar5,PTR_s_itemAtIndex__102269d80,0);
  uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar5,PTR_s_submenu_102269d88);
  lVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar5,PTR_s_numberOfItems_102269da0);
  puVar2 = PTR_s_action_102269db8;
  puVar1 = PTR_s_itemAtIndex__102269d80;
  if (0 < lVar6) {
    lVar6 = 0;
    do {
      lVar7 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar5,puVar1,lVar6);
      puVar8 = (undefined *)(*(code *)PTR__objc_msgSend_1021e1c68)(lVar7,puVar2);
      puVar3 = PTR__OBJC_CLASS___NSString_10226a7c8;
      if (puVar8 == PTR_s_terminate__102269de8) {
        if (lVar7 == 0) break;
        uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)(lVar7,PTR_s_title_102268f30);
        if (puVar3 == (undefined *)0x0) {
          local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
        }
        else {
          _objc_msgSend_stret((undefined *)&local_58,(ID)puVar3,PTR_s_QStringWithString__1022696d0,
                              uVar5);
        }
        QString::operator=(&local_50,&local_58);
        if (*(int *)local_58.field0_0x0 == -1) break;
        if (*(int *)local_58.field0_0x0 != 0) {
          LOCK();
          *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
          local_31 = *(int *)local_58.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) break;
        }
        QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
        break;
      }
      lVar7 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar5,PTR_s_numberOfItems_102269da0);
      lVar6 = lVar6 + 1;
    } while (lVar6 < lVar7);
  }
  QString::toUtf8();
  pQVar12 = local_60 + *(long *)(local_60 + 0x10);
  QString::toUtf8();
  lVar7 = m_menuManagerPrivate;
  pQVar11 = local_68 + *(long *)(local_68 + 0x10);
  lVar6 = *(long *)(*(long *)(param_1 + m_menuManagerPrivate) + 0x40);
  uVar5 = 0;
  if ((lVar6 != 0) && (uVar5 = 0, *(int *)(lVar6 + 4) != 0)) {
    uVar5 = *(undefined8 *)(*(long *)(param_1 + m_menuManagerPrivate) + 0x48);
  }
  FUN_10018d830(&local_78,uVar5);
  QString::toUtf8();
  FUN_100df99c0("[MENU_MNG]","prl_client_app",0,"\"%s\" - \"%s\" - close \"%s\" windows",pQVar12,
                pQVar11,local_70 + *(long *)(local_70 + 0x10));
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10006f86b;
    }
    QArrayData::deallocate(local_70,1,8);
  }
LAB_10006f86b:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10006f89b;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_10006f89b:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10006f8cb;
    }
    QArrayData::deallocate(local_68,1,8);
  }
LAB_10006f8cb:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10006f8fb;
    }
    QArrayData::deallocate(local_60,1,8);
  }
LAB_10006f8fb:
  pCVar9 = (CTaskGenericId *)CTaskManager::instance();
  lVar6 = *(long *)(*(long *)(param_1 + lVar7) + 0x40);
  uVar5 = 0;
  if ((lVar6 != 0) && (uVar5 = 0, *(int *)(lVar6 + 4) != 0)) {
    uVar5 = *(undefined8 *)(*(long *)(param_1 + lVar7) + 0x48);
  }
  FUN_100071f00(local_90,uVar5);
  cVar4 = CTaskManager::isTaskRunning(pCVar9);
  CTaskGenericId::~CTaskGenericId(local_90);
  if (cVar4 == '\0') {
    pvVar10 = operator_new(0x40);
    lVar6 = *(long *)(*(long *)(param_1 + lVar7) + 0x40);
    uVar5 = 0;
    if ((lVar6 != 0) && (uVar5 = 0, *(int *)(lVar6 + 4) != 0)) {
      uVar5 = *(undefined8 *)(*(long *)(param_1 + lVar7) + 0x48);
    }
    FUN_1002c08d0(pvVar10,uVar5);
    CAbstractTask::execute();
  }
  else {
    lVar6 = *(long *)(*(long *)(param_1 + lVar7) + 0x40);
    uVar5 = 0;
    if ((lVar6 != 0) && (uVar5 = 0, *(int *)(lVar6 + 4) != 0)) {
      uVar5 = *(undefined8 *)(*(long *)(param_1 + lVar7) + 0x48);
    }
    FUN_10018d830(&local_a0,uVar5);
    QString::toUtf8();
    FUN_100df99c0("[MENU_MNG]","prl_client_app",0,"VM %s is already quiting",
                  local_98 + *(long *)(local_98 + 0x10));
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        local_31 = *(int *)local_98 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10006f9e8;
      }
      QArrayData::deallocate(local_98,1,8);
    }
LAB_10006f9e8:
    if (*(int *)local_a0 != -1) {
      if (*(int *)local_a0 != 0) {
        LOCK();
        *(int *)local_a0 = *(int *)local_a0 + -1;
        local_31 = *(int *)local_a0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10006fabc;
      }
      QArrayData::deallocate(local_a0,2,8);
    }
  }
LAB_10006fabc:
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_31 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10006faec;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_10006faec:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return;
}

