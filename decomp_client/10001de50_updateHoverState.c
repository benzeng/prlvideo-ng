
/* Function Stack Size: 0x10 bytes */

void __thiscall TitleBarButton::updateHoverState(TitleBarButton *this,ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ID self;
  undefined8 uVar6;
  undefined8 in_XMM1_Qa;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  puVar1 = PTR__objc_msgSend_1021e1c68;
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(this,PTR_s_superview_102268b88);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar5 = (*(code *)puVar1)(this,PTR_s_window_102268c08);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  (*(code *)puVar1)(uVar5,PTR_s_mouseLocationOutsideOfEventStrea_102269320);
  uVar6 = (*(code *)puVar1)(uVar4,PTR_s_convertPoint_fromView__102269328,0);
  puVar2 = PTR__objc_release_1021e1c70;
  (*(code *)PTR__objc_release_1021e1c70)(uVar5);
  (*(code *)puVar2)(uVar4);
  uVar4 = (*(code *)puVar1)(this,PTR_s_trackingArea_1022692a0);
  self = _objc_retainAutoreleasedReturnValue(uVar4);
  if (self == 0) {
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_58,self,PTR_s_rect_102269330);
  }
  cVar3 = _NSPointInRect(uVar6,in_XMM1_Qa);
  (*(code *)PTR__objc_msgSend_1021e1c68)(this,PTR_s_setHovered__102269338,(int)cVar3);
  (*(code *)PTR__objc_release_1021e1c70)(self);
  return;
}

