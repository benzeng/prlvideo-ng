
void FUN_1006e2c20(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  long lVar2;
  QAction *pQVar3;
  
  lVar2 = 0;
  if ((*param_3 != 0) && (lVar2 = 0, *(int *)(*param_3 + 4) != 0)) {
    lVar2 = param_3[1];
  }
  FUN_1006e2490(param_1,param_2,lVar2);
  uVar1 = FUN_1006915d0();
  lVar2 = 0;
  if ((*param_3 != 0) && (lVar2 = 0, *(int *)(*param_3 + 4) != 0)) {
    lVar2 = param_3[1];
  }
  lVar2 = FUN_100691620(uVar1,0x14,lVar2);
  if (lVar2 == 0) {
    FUN_100df99c0("[MENU_MNG]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]","0 != quit",
                  "MenuManager/CMenuBuilder.cpp",0x15d,"populateMenuFile");
  }
  pQVar3 = (QAction *)QAction::menu();
  QWidget::removeAction(pQVar3);
  return;
}

