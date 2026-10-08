
/* Function Stack Size: 0x10 bytes */

void CVmConsoleWindowToolbarController::batteryStateDidChange(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  
  uVar1 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (param_1,PTR_s_toolbarItemWithItemIdentifier__102269010,&cf_Show_HideDevices);
  lVar2 = _objc_retainAutoreleasedReturnValue(uVar1);
  if (lVar2 != 0) {
    lVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(lVar2,PTR_s_tag_102269160);
    lVar4 = FUN_10098ae20();
    if (*(int *)(lVar4 + 0x14) == 1) {
      if (lVar3 != 0) {
        (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_toggleShowHideDevices_102268fe0);
        (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_setDeviceBarAutoHidden__102268dd0,1);
      }
    }
    else {
      cVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_deviceBarAutoHidden_102268e30);
      if (cVar5 != '\0') {
        (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_toggleShowHideDevices_102268fe0);
        (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_setDeviceBarAutoHidden__102268dd0,0);
      }
    }
  }
  (*(code *)PTR__objc_release_1021e1c70)(lVar2);
  return;
}

