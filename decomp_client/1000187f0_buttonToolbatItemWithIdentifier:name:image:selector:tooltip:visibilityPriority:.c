
/* Function Stack Size: 0x40 bytes */

ID CVmConsoleWindowToolbarController::
   buttonToolbatItemWithIdentifier_name_image_selector_tooltip_visibilityPriority_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,SEL param_6,ID param_7,
             long_long param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ID IVar9;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  
  puVar1 = PTR__objc_retain_1021e1c78;
  uVar4 = (*(code *)PTR__objc_retain_1021e1c78)(param_3);
  uVar5 = (*(code *)puVar1)(param_4);
  uVar6 = (*(code *)puVar1)(param_5);
  uVar7 = (*(code *)puVar1)(param_7);
  uVar8 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSButton_10226a7b8,PTR_s_alloc_102268b58);
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0x4032000000000000;
  local_40 = 0x4041000000000000;
  IVar9 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar8,PTR_s_initWithFrame__102268f78);
  (*(code *)PTR__objc_msgSend_1021e1c68)(IVar9,PTR_s_setBordered__102268cb8,0);
  (*(code *)PTR__objc_msgSend_1021e1c68)(IVar9,PTR_s_setBezelStyle__102268cc0,0xb);
  (*(code *)PTR__objc_msgSend_1021e1c68)(IVar9,PTR_s_setImage__102268cd0,uVar6);
  (*(code *)PTR__objc_msgSend_1021e1c68)(IVar9,PTR_s_setRefusesFirstResponder__102268cf0,1);
  (*(code *)PTR__objc_msgSend_1021e1c68)(IVar9,PTR_s_sizeToFit_102269090);
  uVar8 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (param_1,PTR_s_toolbatItemWithIdentifier_name_v_102268f80,uVar4,uVar5,IVar9,
                     param_6,uVar7,param_8);
  uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
  if (IVar9 == 0) {
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_78,IVar9,PTR_s_frame_102268b50);
  }
  uVar3 = uStack_60;
  uVar2 = local_68;
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar8,PTR_s_setMaxSize__102268f88);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar2,uVar3,uVar8,PTR_s_setMinSize__102268f90);
  puVar1 = PTR__objc_release_1021e1c70;
  (*(code *)PTR__objc_release_1021e1c70)(IVar9);
  (*(code *)puVar1)(uVar7);
  (*(code *)puVar1)(uVar6);
  (*(code *)puVar1)(uVar5);
  (*(code *)puVar1)(uVar4);
  IVar9 = _objc_autoreleaseReturnValue(uVar8);
  return IVar9;
}

