
/* Function Stack Size: 0x28 bytes */

void PDDeviceBarViewContaner::addConstraintsForButton_prevButton_nextButton_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  cfstringStruct *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  puVar1 = PTR__objc_retain_1021e1c78;
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  uVar3 = (*(code *)PTR__objc_retain_1021e1c78)(param_3);
  lVar4 = (*(code *)puVar1)(param_4);
  lVar5 = (*(code *)puVar1)(param_5);
  (*(code *)puVar1)(&cf__button_);
  uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSMutableDictionary_10226a878,PTR_s_new_102269070);
  uVar7 = __NSDictionaryOfVariableBindings(&cf_button,uVar3,0);
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar6,PTR_s_setDictionary__102269490,uVar7);
  (*(code *)PTR__objc_release_1021e1c70)(uVar7);
  if (lVar4 == 0) {
    uVar7 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (&cf___>_0_,PTR_s_stringByAppendingString__102269058,&cf__button_);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    pcVar9 = &cf__button_;
  }
  else {
    uVar7 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (&cf__prevButton_,PTR_s_stringByAppendingString__102269058,&cf__button_);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    (*(code *)PTR__objc_release_1021e1c70)(&cf__button_);
    uVar8 = __NSDictionaryOfVariableBindings(&cf_prevButton,lVar4,0);
    pcVar9 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue(uVar8);
    (*(code *)PTR__objc_msgSend_1021e1c68)(uVar6,PTR_s_addEntriesFromDictionary__102269498,pcVar9);
  }
  (*(code *)PTR__objc_release_1021e1c70)(pcVar9);
  if (lVar5 == 0) {
    uVar8 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (uVar7,PTR_s_stringByAppendingString__102269058,&cf__);
    uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
    (*(code *)PTR__objc_release_1021e1c70)(uVar7);
  }
  else {
    uVar8 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (uVar7,PTR_s_stringByAppendingString__102269058,&cf__nextButton_);
    uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
    (*(code *)PTR__objc_release_1021e1c70)(uVar7);
    uVar7 = __NSDictionaryOfVariableBindings(&cf_nextButton,lVar5,0);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    (*(code *)PTR__objc_msgSend_1021e1c68)(uVar6,PTR_s_addEntriesFromDictionary__102269498,uVar7);
    (*(code *)PTR__objc_release_1021e1c70)(uVar7);
  }
  uVar7 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (&cf_H_,PTR_s_stringByAppendingString__102269058,uVar8);
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
  (*(code *)PTR__objc_release_1021e1c70)(uVar8);
  uVar8 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_internalContainer_1022693c0);
  uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
  uVar10 = (*(code *)PTR__objc_msgSend_1021e1c68)
                     (PTR__OBJC_CLASS___NSLayoutConstraint_10226a7e0,
                      PTR_s_constraintsWithVisualFormat_opti_102268d90,uVar7,0,0,uVar6);
  uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar8,PTR_s_addConstraints__102268d98,uVar10);
  puVar1 = PTR__objc_release_1021e1c70;
  (*(code *)PTR__objc_release_1021e1c70)(uVar10);
  (*(code *)puVar1)(uVar8);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_10226a7e0;
  uVar8 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_internalContainer_1022693c0);
  uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
  uVar10 = (*(code *)PTR__objc_msgSend_1021e1c68)
                     (DAT_100e11050,0,puVar2,PTR_s_constraintWithItem_attribute_rel_102268d78,uVar8,
                      10,0,uVar3,10);
  uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
  (*(code *)PTR__objc_release_1021e1c70)(uVar8);
  uVar8 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (DAT_100e11050,DAT_100e110d0,PTR__OBJC_CLASS___NSLayoutConstraint_10226a7e0,
                     PTR_s_constraintWithItem_attribute_rel_102268d78,uVar3,7,0,0,7);
  uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
  uVar11 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_internalContainer_1022693c0);
  uVar11 = _objc_retainAutoreleasedReturnValue(uVar11);
  local_48 = uVar10;
  local_40 = uVar8;
  uVar12 = (*(code *)PTR__objc_msgSend_1021e1c68)
                     (PTR__OBJC_CLASS___NSArray_10226a818,PTR_s_arrayWithObjects_count__102268f00,
                      &local_48,2);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar11,PTR_s_addConstraints__102268d98,uVar12);
  (*(code *)PTR__objc_release_1021e1c70)(uVar11);
  uVar11 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_internalContainer_1022693c0);
  uVar11 = _objc_retainAutoreleasedReturnValue(uVar11);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_10226a7e0;
  uVar12 = __NSDictionaryOfVariableBindings(&cf_button,uVar3,0);
  uVar12 = _objc_retainAutoreleasedReturnValue(uVar12);
  uVar13 = (*(code *)PTR__objc_msgSend_1021e1c68)
                     (puVar2,PTR_s_constraintsWithVisualFormat_opti_102268d90,&cf_V___button__,0,0,
                      uVar12);
  uVar13 = _objc_retainAutoreleasedReturnValue(uVar13);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar11,PTR_s_addConstraints__102268d98,uVar13);
  (*(code *)puVar1)(uVar13);
  (*(code *)puVar1)(uVar12);
  (*(code *)puVar1)(uVar11);
  (*(code *)puVar1)(uVar8);
  (*(code *)puVar1)(uVar10);
  (*(code *)puVar1)(uVar6);
  (*(code *)puVar1)(uVar7);
  (*(code *)puVar1)(lVar5);
  (*(code *)puVar1)(lVar4);
  (*(code *)puVar1)(uVar3);
  if (*(long *)PTR____stack_chk_guard_1021e1840 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

