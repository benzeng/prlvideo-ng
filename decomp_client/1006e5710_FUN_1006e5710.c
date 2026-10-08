
void FUN_1006e5710(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  QAction *pQVar6;
  QAction *pQVar7;
  ulong uVar8;
  Data *local_40;
  
  lVar3 = QAction::menu();
  if (lVar3 == 0) {
    FUN_100df99c0("[MENU_MNG]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "0 != menuAction.menu()","MenuManager/CMenuBuilder.cpp",0x294,
                  "resetMenuForContext");
  }
  uVar4 = FUN_1006b9420();
  uVar1 = FUN_1006947d0(param_2);
  lVar3 = FUN_1006b94a0(uVar4,uVar1);
  if (lVar3 == 0) {
    FUN_100df99c0("[MENU_MNG]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "0 != protoMenuAction","MenuManager/CMenuBuilder.cpp",0x297,"resetMenuForContext")
    ;
  }
  lVar3 = QAction::menu();
  if (lVar3 == 0) {
    FUN_100df99c0("[MENU_MNG]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "0 != protoMenuAction->menu()","MenuManager/CMenuBuilder.cpp",0x298,
                  "resetMenuForContext");
  }
  QAction::menu();
  QWidget::actions();
  uVar8 = (ulong)*(uint *)(local_40 + 8);
  lVar3 = 0;
  if ((int)*(uint *)(local_40 + 8) < *(int *)(local_40 + 0xc)) {
    do {
      uVar4 = *(undefined8 *)(local_40 + ((int)uVar8 + lVar3) * 8 + 0x10);
      iVar2 = FUN_1006959a0(uVar4);
      if ((iVar2 != 1) || (iVar2 = QAction::menuRole(), iVar2 == 2)) {
        uVar1 = FUN_1006947d0(uVar4);
        uVar4 = QAction::menu();
        lVar5 = FUN_10068ef40(uVar1,uVar4);
        if (lVar5 != 0) {
          pQVar6 = (QAction *)QAction::menu();
          QWidget::removeAction(pQVar6);
        }
        uVar4 = FUN_1006915d0();
        lVar5 = FUN_100691620(uVar4,uVar1,param_3);
        if (lVar5 != 0) {
          pQVar6 = (QAction *)0x0;
          if (lVar3 < (*(int *)(local_40 + 0xc) + -1) - *(int *)(local_40 + 8)) {
            pQVar6 = *(QAction **)(local_40 + (*(int *)(local_40 + 8) + lVar3) * 8 + 0x18);
          }
          pQVar7 = (QAction *)QAction::menu();
          QWidget::insertAction(pQVar7,pQVar6);
        }
      }
      lVar3 = lVar3 + 1;
      uVar8 = (ulong)*(int *)(local_40 + 8);
    } while (lVar3 < (long)((long)*(int *)(local_40 + 0xc) - uVar8));
  }
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
    }
    QListData::dispose(local_40);
  }
  return;
}

