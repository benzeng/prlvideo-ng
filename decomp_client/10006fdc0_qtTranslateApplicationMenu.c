
/* Function Stack Size: 0x10 bytes */

void QCocoaMenuLoaderReplacer::qtTranslateApplicationMenu(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long local_40;
  long local_38;
  
  puVar1 = PTR__objc_msgSend_1021e1c68;
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (*(undefined8 *)PTR__NSApp_1021e1070,PTR_s_mainMenu_102269d78);
  local_38 = 0;
  uVar4 = (*(code *)puVar1)(uVar4,PTR_s_itemAtIndex__102269d80,0);
  uVar4 = (*(code *)puVar1)(uVar4,PTR_s_submenu_102269d88);
  lVar5 = (*(code *)puVar1)(uVar4,PTR_s_numberOfItems_102269da0);
  puVar2 = PTR_s_action_102269db8;
  if (0 < lVar5) {
    local_38 = 0;
    lVar5 = 0;
    do {
      lVar6 = (*(code *)puVar1)(uVar4,PTR_s_itemAtIndex__102269d80,lVar5);
      puVar7 = (undefined *)(*(code *)puVar1)(lVar6,puVar2);
      if (puVar7 == PTR_s_hide__102269df0) {
        local_38 = 0;
        if (lVar6 != 0) {
          uVar4 = (*(code *)puVar1)(lVar6,PTR_s_title_102268f30);
          uVar4 = (*(code *)puVar1)(uVar4,PTR_s_copy_102269220);
          local_38 = (*(code *)puVar1)(uVar4,PTR_s_autorelease_102269a10);
        }
        break;
      }
      lVar5 = lVar5 + 1;
      lVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_numberOfItems_102269da0);
    } while (lVar5 < lVar6);
  }
  uVar4 = (*(code *)puVar1)(*(undefined8 *)PTR__NSApp_1021e1070,PTR_s_mainMenu_102269d78);
  local_40 = 0;
  uVar4 = (*(code *)puVar1)(uVar4,PTR_s_itemAtIndex__102269d80,0);
  uVar4 = (*(code *)puVar1)(uVar4,PTR_s_submenu_102269d88);
  lVar5 = (*(code *)puVar1)(uVar4,PTR_s_numberOfItems_102269da0);
  puVar2 = PTR_s_action_102269db8;
  if (0 < lVar5) {
    local_40 = 0;
    lVar5 = 0;
    do {
      lVar6 = (*(code *)puVar1)(uVar4,PTR_s_itemAtIndex__102269d80,lVar5);
      puVar7 = (undefined *)(*(code *)puVar1)(lVar6,puVar2);
      if (puVar7 == PTR_s_terminate__102269de8) {
        local_40 = 0;
        if (lVar6 != 0) {
          uVar4 = (*(code *)puVar1)(lVar6,PTR_s_title_102268f30);
          uVar4 = (*(code *)puVar1)(uVar4,PTR_s_copy_102269220);
          local_40 = (*(code *)puVar1)(uVar4,PTR_s_autorelease_102269a10);
        }
        break;
      }
      lVar5 = lVar5 + 1;
      lVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_numberOfItems_102269da0);
    } while (lVar5 < lVar6);
  }
  puVar2 = PTR_s_qtTranslateApplicationMenuOrigin_102269d90;
  cVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (param_1,PTR_s_respondsToSelector__102269d98,
                     PTR_s_qtTranslateApplicationMenuOrigin_102269d90);
  if (cVar3 == '\0') {
    FUN_100df99c0("[MENU_MNG]","prl_client_app",0,
                  "(!)Error: couldn\'t get qtTranslateApplicationMenuOriginal to call");
  }
  else {
    (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_performSelector__102269300,puVar2);
  }
  if (local_38 != 0) {
    uVar4 = (*(code *)puVar1)(*(undefined8 *)PTR__NSApp_1021e1070,PTR_s_mainMenu_102269d78);
    uVar4 = (*(code *)puVar1)(uVar4,PTR_s_itemAtIndex__102269d80,0);
    uVar4 = (*(code *)puVar1)(uVar4,PTR_s_submenu_102269d88);
    lVar5 = (*(code *)puVar1)(uVar4,PTR_s_numberOfItems_102269da0);
    puVar2 = PTR_s_action_102269db8;
    if (0 < lVar5) {
      lVar5 = 0;
      do {
        lVar6 = (*(code *)puVar1)(uVar4,PTR_s_itemAtIndex__102269d80,lVar5);
        puVar7 = (undefined *)(*(code *)puVar1)(lVar6,puVar2);
        if (puVar7 == PTR_s_hide__102269df0) {
          if (lVar6 != 0) {
            (*(code *)PTR__objc_msgSend_1021e1c68)(lVar6,PTR_s_setTitle__102268ee8,local_38);
          }
          break;
        }
        lVar5 = lVar5 + 1;
        lVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_numberOfItems_102269da0);
      } while (lVar5 < lVar6);
    }
  }
  if (local_40 != 0) {
    uVar4 = (*(code *)puVar1)(*(undefined8 *)PTR__NSApp_1021e1070,PTR_s_mainMenu_102269d78);
    uVar4 = (*(code *)puVar1)(uVar4,PTR_s_itemAtIndex__102269d80,0);
    uVar4 = (*(code *)puVar1)(uVar4,PTR_s_submenu_102269d88);
    lVar5 = (*(code *)puVar1)(uVar4,PTR_s_numberOfItems_102269da0);
    puVar2 = PTR_s_action_102269db8;
    if (0 < lVar5) {
      lVar5 = 0;
      do {
        lVar6 = (*(code *)puVar1)(uVar4,PTR_s_itemAtIndex__102269d80,lVar5);
        puVar7 = (undefined *)(*(code *)puVar1)(lVar6,puVar2);
        if (puVar7 == PTR_s_terminate__102269de8) {
          if (lVar6 == 0) {
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x000100070170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_msgSend_1021e1c68)(lVar6,PTR_s_setTitle__102268ee8,local_40);
          return;
        }
        lVar5 = lVar5 + 1;
        lVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_numberOfItems_102269da0);
      } while (lVar5 < lVar6);
    }
  }
  return;
}

