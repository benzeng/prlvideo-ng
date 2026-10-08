
/* Function Stack Size: 0x40 bytes */

ID CVmConsoleWindowToolbarController::
   textToolbatItemWithIdentifier_name_text_font_alignment_visibilityPriority_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,
             unsigned_long_long param_7,long_long param_8)

{
  undefined *puVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ID IVar8;
  double dVar9;
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
  double local_48;
  undefined8 uStack_40;
  
  puVar1 = PTR__objc_retain_1021e1c78;
  uVar3 = (*(code *)PTR__objc_retain_1021e1c78)(param_3);
  uVar4 = (*(code *)puVar1)(param_4);
  uVar5 = (*(code *)puVar1)(param_5);
  uVar6 = (*(code *)puVar1)(param_6);
  uVar7 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSTextField_10226a850,PTR_s_alloc_102268b58);
  IVar8 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar7,PTR_s_init_102268ca8);
  (*(code *)PTR__objc_msgSend_1021e1c68)(IVar8,PTR_s_setStringValue__102269098,uVar5);
  (*(code *)PTR__objc_msgSend_1021e1c68)(IVar8,PTR_s_setFont__1022690a0,uVar6);
  uVar7 = (*(code *)PTR__objc_msgSend_1021e1c68)(IVar8,PTR_s_cell_1022690a8);
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar7,PTR_s_setUsesSingleLineMode__1022690b0,1);
  (*(code *)PTR__objc_release_1021e1c70)(uVar7);
  (*(code *)PTR__objc_msgSend_1021e1c68)(IVar8,PTR_s_setAlignment__1022690b8,param_7);
  (*(code *)PTR__objc_msgSend_1021e1c68)(IVar8,PTR_s_setLineBreakMode__1022690c0,4);
  (*(code *)PTR__objc_msgSend_1021e1c68)(IVar8,PTR_s_setSelectable__1022690c8,0);
  (*(code *)PTR__objc_msgSend_1021e1c68)(IVar8,PTR_s_setEditable__1022690d0,0);
  (*(code *)PTR__objc_msgSend_1021e1c68)(IVar8,PTR_s_setDrawsBackground__1022690d8,0);
  (*(code *)PTR__objc_msgSend_1021e1c68)(IVar8,PTR_s_setBezeled__1022690e0,0);
  uVar7 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (param_1,PTR_s_toolbatItemWithIdentifier_name_v_102268f80,uVar3,uVar4,IVar8,0,0,
                     param_8);
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
  (*(code *)PTR__objc_msgSend_1021e1c68)(IVar8,PTR_s_sizeToFit_102269090);
  if (IVar8 == 0) {
    local_48 = 0.0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    dVar9 = 0.0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_58,IVar8,PTR_s_frame_102268b50);
    dVar2 = local_48;
    _objc_msgSend_stret((undefined *)&local_78,IVar8,PTR_s_frame_102268b50);
    dVar9 = DAT_100e11088;
    if (dVar2 <= DAT_100e11088) {
      dVar9 = dVar2;
    }
  }
  (*(code *)PTR__objc_msgSend_1021e1c68)(dVar9,uStack_60,uVar7,PTR_s_setMinSize__102268f90);
  if (IVar8 == 0) {
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_98,IVar8,PTR_s_frame_102268b50);
  }
  (*(code *)PTR__objc_msgSend_1021e1c68)(local_88,uStack_80,uVar7,PTR_s_setMaxSize__102268f88);
  puVar1 = PTR__objc_release_1021e1c70;
  (*(code *)PTR__objc_release_1021e1c70)(IVar8);
  (*(code *)puVar1)(uVar6);
  (*(code *)puVar1)(uVar5);
  (*(code *)puVar1)(uVar4);
  (*(code *)puVar1)(uVar3);
  IVar8 = _objc_autoreleaseReturnValue(uVar7);
  return IVar8;
}

