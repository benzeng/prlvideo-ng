
void FUN_1000702f0(QObject *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  QString *pQVar4;
  QArrayData *local_28;
  undefined1 local_1a;
  
  puVar1 = PTR__objc_msgSend_1021e1c68;
  if (DAT_102311e08 != '\0') {
    return;
  }
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (*(undefined8 *)PTR__NSApp_1021e1070,PTR_s_mainMenu_102269d78);
  iVar2 = (*(code *)puVar1)(uVar3,PTR_s_numberOfItems_102269da0);
  if (1 < iVar2) {
    uVar3 = FUN_1006915d0();
    pQVar4 = (QString *)FUN_100691620(uVar3,0xf,*(undefined8 *)PTR_self_1021e1388);
    if (pQVar4 == (QString *)0x0) {
      FUN_100df99c0("[MENU_MNG]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]","0 != a",
                    "MenuManager/CMenuManager_mac.mm",0xf7,"translateHelpMenuTitle");
      return;
    }
    QCoreApplication::translate((char *)&local_28,"CMenuBarPrototype","Help",0);
    QAction::setText(pQVar4);
    if (*(int *)local_28 != -1) {
      if (*(int *)local_28 != 0) {
        LOCK();
        *(int *)local_28 = *(int *)local_28 + -1;
        UNLOCK();
        if (*(int *)local_28 != 0) {
          DAT_102311e08 = 1;
          return;
        }
        local_1a = 0;
      }
      QArrayData::deallocate(local_28,2,8);
    }
    DAT_102311e08 = 1;
    return;
  }
  QTimer::singleShot(100,param_1,"1translateHelpMenuTitle()");
  return;
}

