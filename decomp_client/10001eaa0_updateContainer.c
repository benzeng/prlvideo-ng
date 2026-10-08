
/* Function Stack Size: 0x10 bytes */

void PDDeviceBarViewContaner::updateContainer(ID param_1,SEL param_2)

{
  long lVar1;
  undefined *puVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ID self;
  undefined8 uVar6;
  long lVar7;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined local_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_clearContainer_102269390);
  if (param_1 == 0) {
    local_38 = 0;
    uStack_30 = 0;
    local_48 = 0;
    uStack_40 = 0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_48,param_1,PTR_s_bounds_1022693a0);
  }
  cVar3 = _NSIsEmptyRect();
  lVar7 = _vm;
  if (cVar3 == '\0') {
    if (((*(long *)(param_1 + _vm) != 0) && (*(int *)(*(long *)(param_1 + _vm) + 4) != 0)) &&
       (*(long *)(_vm + 8 + param_1) != 0)) {
      cVar3 = FUN_10011a720();
      puVar2 = PTR__objc_msgSend_1021e1c68;
      if (cVar3 != '\0') {
        uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)
                          (PTR__OBJC_CLASS___NSView_10226a810,PTR_s_alloc_102268b58);
        _objc_msgSend_stret(local_68,param_1,PTR_s_rectForDeviceContainer_1022693a8);
        uVar4 = (*(code *)puVar2)(uVar4,PTR_s_initWithFrame__102268f78);
        (*(code *)puVar2)(param_1,PTR_s_setInternalContainer__1022693b0,uVar4);
        (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_setAutoresizingMask__1022693b8,0);
        (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_addSubview__102268d70,uVar4);
        uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_internalContainer_1022693c0);
        self = _objc_retainAutoreleasedReturnValue(uVar5);
        if (self == 0) {
          local_78 = 0;
          uStack_70 = 0;
          local_88 = 0;
          uStack_80 = 0;
        }
        else {
          _objc_msgSend_stret((undefined *)&local_88,self,PTR_s_frame_102268b50);
        }
        (*(code *)PTR__objc_msgSend_1021e1c68)(local_78,param_1,PTR_s_setButtonsWidth__1022693c8);
        (*(code *)PTR__objc_release_1021e1c70)(self);
        cVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_toolsWarningVisible_1022691e8);
        if (cVar3 != '\0') {
          (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_addTools_1022693d0);
        }
        uVar6 = FUN_1006915d0();
        lVar1 = *(long *)(param_1 + lVar7);
        uVar5 = 0;
        if ((lVar1 != 0) && (uVar5 = 0, *(int *)(lVar1 + 4) != 0)) {
          uVar5 = *(undefined8 *)(lVar7 + 8 + param_1);
        }
        lVar7 = FUN_100691620(uVar6,0xc,uVar5);
        if (lVar7 != 0) {
          cVar3 = QAction::isVisible();
          if (cVar3 != '\0') {
            (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_addDevelopButton_1022693d8);
          }
        }
        (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_addSharedFolders_1022693e0);
        (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_addDevices_1022693e8);
        (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_addKeyboard_1022693f0);
        (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_setupConstraints_1022693f8);
        (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_setDeviceButtons__102269400,0);
        (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_updateConstraints_102269408);
        (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_setNeedsDisplay__1022692b8,1);
        uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_window_102268c08);
        uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
        cVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar5,PTR_s_areCursorRectsEnabled_102269410);
        (*(code *)PTR__objc_release_1021e1c70)(uVar5);
        if (cVar3 != '\0') {
          uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_window_102268c08);
          uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
          (*(code *)PTR__objc_msgSend_1021e1c68)(uVar5,PTR_s_disableCursorRects_102269418);
          (*(code *)PTR__objc_release_1021e1c70)(uVar5);
        }
        uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_window_102268c08);
        uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
        uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar5,PTR_s_contentView_102268b80);
        uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
        (*(code *)PTR__objc_msgSend_1021e1c68)(uVar6,PTR_s_updateTrackingAreas_102269420);
        puVar2 = PTR__objc_release_1021e1c70;
        (*(code *)PTR__objc_release_1021e1c70)(uVar6);
        (*(code *)puVar2)(uVar5);
        (*(code *)puVar2)(uVar4);
      }
    }
  }
  return;
}

