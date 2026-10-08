
void FUN_1006e28e0(void)

{
  char cVar1;
  QMenu *pQVar2;
  long lVar3;
  undefined8 uVar4;
  QArrayData *local_58;
  QArrayData *local_50;
  QVariant local_48;
  int *local_38;
  long local_30;
  undefined1 local_21;
  
  QObject::sender();
  pQVar2 = (QMenu *)QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e14a0);
  if (pQVar2 == (QMenu *)0x0) {
    FUN_100df99c0("[MENU_MNG]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "0 != menu && 0 != menu->menuAction()","MenuManager/CMenuBuilder.cpp",0x13e,
                  "onAboutToShowMenu");
    return;
  }
  lVar3 = QMenu::menuAction();
  if (lVar3 == 0) {
    FUN_100df99c0("[MENU_MNG]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "0 != menu && 0 != menu->menuAction()","MenuManager/CMenuBuilder.cpp",0x13e,
                  "onAboutToShowMenu");
  }
  lVar3 = QMenu::menuAction();
  if (lVar3 == 0) {
    return;
  }
  WidgetUtils::clearMenuRecursively(pQVar2,true);
  QMenu::menuAction();
  QObject::property((char *)&local_48);
  FUN_100086de0(&local_38,&local_48);
  QVariant::~QVariant(&local_48);
  if (((local_38 == (int *)0x0) || (local_38[1] == 0)) || (local_30 == 0)) {
    FUN_100df99c0("[MENU_MNG]","prl_client_app",0,
                  "Can\'t fill the menu since the context is already destroyed");
    goto LAB_1006e2b4b;
  }
  uVar4 = QMenu::menuAction();
  lVar3 = 0;
  if (local_38[1] != 0) {
    lVar3 = local_30;
  }
  cVar1 = FUN_1006e2110(uVar4,lVar3,1);
  if (cVar1 != '\0') goto LAB_1006e2b4b;
  uVar4 = QMenu::menuAction();
  FUN_1006e1fc0(&local_50,uVar4);
  QString::toLatin1();
  FUN_100df99c0("[MENU_MNG]","prl_client_app",0,"(!)Error: failed to invoke %s",
                local_58 + *(long *)(local_58 + 0x10));
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006e2a75;
    }
    QArrayData::deallocate(local_58,1,8);
  }
LAB_1006e2a75:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006e2aa5;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1006e2aa5:
  FUN_100df99c0("[MENU_MNG]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]","invokeRes",
                "MenuManager/CMenuBuilder.cpp",0x153,"onAboutToShowMenu");
LAB_1006e2b4b:
  if (local_38 != (int *)0x0) {
    LOCK();
    *local_38 = *local_38 + -1;
    local_21 = *local_38 != 0;
    UNLOCK();
    if (!(bool)local_21) {
      operator_delete(local_38);
    }
  }
  return;
}

