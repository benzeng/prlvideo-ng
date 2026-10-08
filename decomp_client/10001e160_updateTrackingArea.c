
/* Function Stack Size: 0x10 bytes */

void TitleBarButton::updateTrackingArea(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  double dVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  ID self;
  undefined8 in_R9;
  double local_98 [13];
  
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_trackingArea_1022692a0);
  lVar5 = _objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)PTR__objc_release_1021e1c70)(lVar5);
  puVar1 = PTR__objc_msgSend_1021e1c68;
  if (lVar5 != 0) {
    uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_superview_102268b88);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    uVar6 = (*(code *)puVar1)(param_1,PTR_s_trackingArea_1022692a0);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    (*(code *)puVar1)(uVar4,PTR_s_removeTrackingArea__1022692a8,uVar6);
    puVar1 = PTR__objc_release_1021e1c70;
    (*(code *)PTR__objc_release_1021e1c70)(uVar6);
    (*(code *)puVar1)(uVar4);
  }
  puVar1 = PTR__objc_msgSend_1021e1c68;
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_window_102268c08);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar6 = (*(code *)puVar1)(uVar4,PTR_s_standardWindowButton__102269228,0);
  self = _objc_retainAutoreleasedReturnValue(uVar6);
  (*(code *)PTR__objc_release_1021e1c70)(uVar4);
  if (self == 0) {
    local_98[10] = 0.0;
    local_98[0xb] = 0.0;
    local_98[8] = 0.0;
    local_98[9] = 0.0;
  }
  else {
    _objc_msgSend_stret((undefined *)(local_98 + 8),self,PTR_s_frame_102268b50);
  }
  if (param_1 == 0) {
    local_98[6] = 0.0;
    local_98[7] = 0.0;
    local_98[4] = 0.0;
    local_98[5] = 0.0;
  }
  else {
    _objc_msgSend_stret((undefined *)(local_98 + 4),param_1,PTR_s_frame_102268b50);
  }
  dVar3 = local_98[4];
  if (self == 0) {
    local_98[2] = 0.0;
    local_98[3] = 0.0;
    local_98[0] = 0.0;
    local_98[1] = 0.0;
  }
  else {
    _objc_msgSend_stret((undefined *)local_98,self,PTR_s_frame_102268b50);
  }
  local_98[10] = (dVar3 - local_98[0]) + local_98[10];
  uVar4 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSTrackingArea_10226a888,PTR_s_alloc_102268b58);
  uVar4 = (*(code *)puVar1)(uVar4,PTR_s_initWithRect_options_owner_userI_102269348,0x83,param_1,0,
                            in_R9,local_98[8],local_98[9],local_98[10],local_98[0xb]);
  (*(code *)puVar1)(param_1,PTR_s_setTrackingArea__102269350,uVar4);
  puVar2 = PTR__objc_release_1021e1c70;
  (*(code *)PTR__objc_release_1021e1c70)(uVar4);
  uVar4 = (*(code *)puVar1)(param_1,PTR_s_superview_102268b88);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar6 = (*(code *)puVar1)(param_1,PTR_s_trackingArea_1022692a0);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  (*(code *)puVar1)(uVar4,PTR_s_addTrackingArea__102269358,uVar6);
  (*(code *)puVar2)(uVar6);
  (*(code *)puVar2)(uVar4);
  (*(code *)puVar1)(param_1,PTR_s_updateHoverState_1022692f0);
  (*(code *)puVar2)(self);
  return;
}

