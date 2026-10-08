
void FUN_100072c30(long param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  
  if (2 < DAT_10230ffd0) {
    FUN_100df99c0("[APP_TRAY_ICON]","prl_client_app",3,"Tray icon activated");
  }
  iVar2 = MacUtils::currentButton();
  cVar7 = '\x01';
  if (iVar2 != 1) {
    uVar3 = _GetCurrentKeyModifiers();
    cVar7 = (char)((uVar3 & 0x1000) >> 0xc);
  }
  lVar4 = FUN_10075afb0(*(undefined8 *)(param_1 + 0x10));
  if (lVar4 == 0) {
    FUN_100df99c0("[APP_TRAY_ICON]","prl_client_app",0,
                  "Failed to close Crystal Educational Dialog. VM is invalid");
  }
  else {
    uVar5 = FUN_10018c280(lVar4);
    uVar5 = FUN_100319d20(uVar5);
    FUN_10035a010(uVar5,2,1);
    cVar1 = FUN_1001248b0();
    if (cVar1 == '\0') {
      if (cVar7 != '\0') goto LAB_100072d08;
    }
    else {
      uVar5 = FUN_10018c280(lVar4);
      iVar2 = FUN_100319ae0(uVar5);
      if ((iVar2 == 3) && (cVar7 == '\x01')) {
LAB_100072d08:
        uVar5 = FUN_1006915d0();
        uVar6 = FUN_10075afb0(*(undefined8 *)(param_1 + 0x10));
        lVar4 = FUN_100691620(uVar5,0x44,uVar6);
        if (lVar4 == 0) {
          return;
        }
        QAction::activate(lVar4,0);
        return;
      }
    }
  }
  FUN_100072d60(param_1);
  return;
}

