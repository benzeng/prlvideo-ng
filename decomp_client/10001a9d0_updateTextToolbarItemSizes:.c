
/* Function Stack Size: 0x18 bytes */

void CVmConsoleWindowToolbarController::updateTextToolbarItemSizes_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ID self;
  undefined4 uVar6;
  undefined4 uVar7;
  double dVar8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  uVar3 = (*(code *)PTR__objc_retain_1021e1c78)(param_3);
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar3,PTR_s_view_102269138);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSTextField_10226a850,PTR_s_class_102269100);
  cVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_isKindOfClass__102269108,uVar5);
  (*(code *)PTR__objc_release_1021e1c70)(uVar4);
  if (cVar2 != '\0') {
    uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar3,PTR_s_view_102269138);
    self = _objc_retainAutoreleasedReturnValue(uVar4);
    uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(self,PTR_s_stringValue_1022691d0);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)(self,PTR_s_font_1022691d8);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    if (self == 0) {
      local_48 = 0;
      uStack_40 = 0;
      local_58 = 0;
      uStack_50 = 0;
      uVar6 = 0;
    }
    else {
      _objc_msgSend_stret((undefined *)&local_58,self,PTR_s_frame_102268b50);
      uVar6 = (undefined4)uStack_40;
    }
    dVar8 = (double)(*(code *)PTR__objc_msgSend_1021e1c68)
                              (uVar6,param_1,PTR_s_widthForStringDrawing_font_heigh_1022691e0,uVar4,
                               uVar5);
    puVar1 = PTR__objc_release_1021e1c70;
    (*(code *)PTR__objc_release_1021e1c70)(uVar5);
    (*(code *)puVar1)(uVar4);
    if (self == 0) {
      local_68 = 0;
      uStack_60 = 0;
      local_78 = 0;
      uStack_70 = 0;
    }
    else {
      _objc_msgSend_stret((undefined *)&local_78,self,PTR_s_frame_102268b50);
    }
    dVar8 = dVar8 + DAT_100e11090;
    uVar7 = SUB84(dVar8,0);
    uVar6 = SUB84(DAT_100e11088,0);
    if (dVar8 <= DAT_100e11088) {
      uVar6 = uVar7;
    }
    (*(code *)PTR__objc_msgSend_1021e1c68)(uVar6,uStack_60,uVar3,PTR_s_setMinSize__102268f90);
    if (self == 0) {
      local_88 = 0;
      uStack_80 = 0;
      local_98 = 0;
      uStack_90 = 0;
    }
    else {
      _objc_msgSend_stret((undefined *)&local_98,self,PTR_s_frame_102268b50);
    }
    if (dVar8 <= DAT_100e11088) {
      uVar7 = SUB84(DAT_100e11088,0);
    }
    (*(code *)PTR__objc_msgSend_1021e1c68)(uVar7,uStack_80,uVar3,PTR_s_setMaxSize__102268f88);
    (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_updateSize_102269150);
    (*(code *)PTR__objc_release_1021e1c70)(self);
  }
  (*(code *)PTR__objc_release_1021e1c70)(uVar3);
  return;
}

