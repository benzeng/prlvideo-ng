
/* Function Stack Size: 0x10 bytes */

void PDBarButtonItem::setupDnDView(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR__objc_msgSend_1021e1c68;
  uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)(PTR_PDDragDropView_10226a8a8,PTR_s_alloc_102268b58)
  ;
  uVar2 = (*(code *)puVar1)(uVar2,PTR_s_init_102268ca8);
  uVar3 = (*(code *)puVar1)(param_1,PTR_s_registeredDraggedTypes_102269628);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar2,PTR_s_registerForDraggedTypes__1022695b8,uVar3);
  (*(code *)PTR__objc_release_1021e1c70)(uVar3);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar2,PTR_s_setTranslatesAutoresizingMaskInt_102268cf8,0);
  (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_addSubview__102268d70,uVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_10226a7e0;
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSString_10226a7c8,PTR_s_stringWithFormat__102268d88,
                     &cf_H___dndView__);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  uVar4 = __NSDictionaryOfVariableBindings(&cf_dndView,uVar2,0);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (puVar1,PTR_s_constraintsWithVisualFormat_opti_102268d90,uVar3,0,0,uVar4);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_addConstraints__102268d98,uVar5);
  puVar1 = PTR__objc_release_1021e1c70;
  (*(code *)PTR__objc_release_1021e1c70)(uVar5);
  (*(code *)puVar1)(uVar4);
  (*(code *)puVar1)(uVar3);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_10226a7e0;
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSString_10226a7c8,PTR_s_stringWithFormat__102268d88,
                     &cf_V___dndView__);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  uVar4 = __NSDictionaryOfVariableBindings(&cf_dndView,uVar2,0);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (puVar1,PTR_s_constraintsWithVisualFormat_opti_102268d90,uVar3,0,0,uVar4);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_addConstraints__102268d98,uVar5);
  puVar1 = PTR__objc_release_1021e1c70;
  (*(code *)PTR__objc_release_1021e1c70)(uVar5);
  (*(code *)puVar1)(uVar4);
  (*(code *)puVar1)(uVar3);
  (*(code *)puVar1)(uVar2);
  return;
}

