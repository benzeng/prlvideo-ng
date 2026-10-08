
/* Function Stack Size: 0x28 bytes */

double CVmConsoleWindowToolbarController::widthForStringDrawing_font_height_
                 (ID param_1,SEL param_2,ID param_3,ID param_4,double param_5)

{
  undefined *puVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ID self;
  undefined8 uVar8;
  undefined8 local_58;
  undefined8 uStack_50;
  double local_48;
  undefined8 uStack_40;
  
  puVar1 = PTR__objc_retain_1021e1c78;
  uVar3 = (*(code *)PTR__objc_retain_1021e1c78)(param_3);
  uVar4 = (*(code *)puVar1)(param_4);
  uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSTextStorage_10226a860,PTR_s_alloc_102268b58);
  uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar5,PTR_s_initWithString__102269190,uVar3);
  uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSTextContainer_10226a868,PTR_s_alloc_102268b58);
  uVar7 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (DAT_100e110a0,param_5,uVar5,PTR_s_initWithContainerSize__102269198);
  uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSLayoutManager_10226a870,PTR_s_alloc_102268b58);
  self = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar5,PTR_s_init_102268ca8);
  (*(code *)PTR__objc_msgSend_1021e1c68)(self,PTR_s_addTextContainer__1022691a0,uVar7);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar6,PTR_s_addLayoutManager__1022691a8,self);
  uVar5 = *(undefined8 *)PTR__NSFontAttributeName_1021e10d0;
  uVar8 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar6,PTR_s_length_102269050);
  (*(code *)PTR__objc_msgSend_1021e1c68)
            (uVar6,PTR_s_addAttribute_value_range__1022691b0,uVar5,uVar4,0,uVar8);
  (*(code *)PTR__objc_msgSend_1021e1c68)(0,uVar7,PTR_s_setLineFragmentPadding__1022691b8);
  (*(code *)PTR__objc_msgSend_1021e1c68)(self,PTR_s_glyphRangeForTextContainer__1022691c0,uVar7);
  if (self == 0) {
    local_48 = 0.0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_58,self,PTR_s_usedRectForTextContainer__1022691c8,uVar7)
    ;
  }
  dVar2 = local_48;
  puVar1 = PTR__objc_release_1021e1c70;
  (*(code *)PTR__objc_release_1021e1c70)(self);
  (*(code *)puVar1)(uVar7);
  (*(code *)puVar1)(uVar6);
  (*(code *)puVar1)(uVar4);
  (*(code *)puVar1)(uVar3);
  return dVar2;
}

