
void FUN_100031c20(undefined8 param_1,double param_2,long param_3,int param_4)

{
  undefined *puVar1;
  char cVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  CGPoint CVar9;
  undefined *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  code *local_38;
  undefined *local_30;
  long local_28;
  
  puVar1 = PTR__objc_msgSend_1021e1c68;
  if (param_4 == 4) {
    uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (PTR_PDFullScreenMouseHandler_10226a8f8,PTR_s_alloc_102268b58);
    local_48 = PTR___NSConcreteStackBlock_1021e1280;
    local_40 = 0xc0000000;
    local_3c = 0;
    local_38 = FUN_100031de0;
    local_30 = &DAT_1021ed260;
    local_28 = param_3;
    uVar5 = (*(code *)puVar1)(DAT_100e11050,uVar4,PTR_s_initWithShowMenuHandler_delay__102269888,
                              &local_48);
    uVar4 = *(undefined8 *)(param_3 + 0x20);
    *(undefined8 *)(param_3 + 0x20) = uVar5;
  }
  else {
    uVar4 = *(undefined8 *)(param_3 + 0x20);
    *(undefined8 *)(param_3 + 0x20) = 0;
  }
  (*(code *)PTR__objc_release_1021e1c70)(uVar4);
  plVar6 = (long *)CHostDesktopWorkspacesController::instance();
  cVar2 = (**(code **)(*plVar6 + 0xd0))(plVar6);
  uVar8 = 0x400;
  if (cVar2 == '\0') {
    plVar6 = (long *)CHostDesktopWorkspacesController::instance();
    bVar3 = (**(code **)(*plVar6 + 0xd8))(plVar6);
    uVar8 = (ulong)bVar3 << 10;
  }
  switch(param_4) {
  case 1:
    FUN_100031e10(uVar8);
    break;
  case 2:
    FUN_100031e10(uVar8 | 0x1fa);
    break;
  case 3:
    FUN_100031e10(uVar8 | 0x805);
    lVar7 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (PTR__OBJC_CLASS___NSEvent_10226a8b0,PTR_s_pressedMouseButtons_102269890);
    if (lVar7 == 0) {
      CVar9.field0_0x0 =
           (double)(*(code *)PTR__objc_msgSend_1021e1c68)
                             (PTR__OBJC_CLASS___NSEvent_10226a8b0,PTR_s_mouseLocation_102269808);
      CVar9.field1_0x8 = param_2;
      MacUtils::QPointFFromNSPoint(CVar9,true);
      uVar4 = _CGEventCreateMouseEvent(0,5,0);
      _CGEventPost(0,uVar4);
      _CFRelease(uVar4);
    }
    break;
  case 4:
  case 5:
    FUN_100031e10(uVar8 | 10);
    break;
  default:
    FUN_100df99c0("[SYS_UI_CTRL]","prl_client_app",0,"Unknown UI mode to switch.");
  }
  FUN_1000332a0(param_3,param_4);
  return;
}

