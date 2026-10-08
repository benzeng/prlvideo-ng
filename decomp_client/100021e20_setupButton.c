
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Function Stack Size: 0x10 bytes */

void PDBarButtonItem::setupButton(ID param_1,SEL param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  puVar2 = PTR__objc_msgSend_1021e1c68;
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar1;
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSButton_10226a7b8,PTR_s_alloc_102268b58);
  uVar3 = (*(code *)puVar2)(uVar3,PTR_s_initWithFrame__102268f78);
  (*(code *)puVar2)(param_1,PTR_s_setButton__1022695e8,uVar3);
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_button_1022695f0);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_unregisterDraggedTypes_1022695f8);
  (*(code *)PTR__objc_release_1021e1c70)(uVar4);
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_button_1022695f0);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_setBordered__102268cb8,0);
  (*(code *)PTR__objc_release_1021e1c70)(uVar4);
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_button_1022695f0);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_setBezelStyle__102268cc0,0xb);
  (*(code *)PTR__objc_release_1021e1c70)(uVar4);
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_button_1022695f0);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_setTarget__102268cd8,param_1);
  (*(code *)PTR__objc_release_1021e1c70)(uVar4);
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_button_1022695f0);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)PTR__objc_msgSend_1021e1c68)
            (uVar4,PTR_s_setAction__102268ce8,PTR_s_onButtonClicked_102269600);
  (*(code *)PTR__objc_release_1021e1c70)(uVar4);
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_button_1022695f0);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_setRefusesFirstResponder__102268cf0,1);
  (*(code *)PTR__objc_release_1021e1c70)(uVar4);
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_button_1022695f0);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_setTranslatesAutoresizingMaskInt_102268cf8,0);
  (*(code *)PTR__objc_release_1021e1c70)(uVar4);
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_button_1022695f0);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_addSubview__102268d70,uVar4);
  (*(code *)PTR__objc_release_1021e1c70)(uVar4);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_10226a7e0;
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_button_1022695f0);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    ((int)DAT_100e11050,0,puVar2,PTR_s_constraintWithItem_attribute_rel_102268d78,
                     param_1,9,0,uVar4,9);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  (*(code *)PTR__objc_release_1021e1c70)(uVar4);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_10226a7e0;
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_button_1022695f0);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    ((int)DAT_100e11050,DAT_100e110e0,puVar2,
                     PTR_s_constraintWithItem_attribute_rel_102268d78,param_1,10,0,uVar4,10);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  (*(code *)PTR__objc_release_1021e1c70)(uVar4);
  local_48 = uVar5;
  local_40 = uVar6;
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSArray_10226a818,PTR_s_arrayWithObjects_count__102268f00,
                     &local_48,2);
  (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_addConstraints__102268d98,uVar4);
  puVar2 = PTR__objc_release_1021e1c70;
  (*(code *)PTR__objc_release_1021e1c70)(uVar6);
  (*(code *)puVar2)(uVar5);
  (*(code *)puVar2)(uVar3);
  if (lVar1 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

