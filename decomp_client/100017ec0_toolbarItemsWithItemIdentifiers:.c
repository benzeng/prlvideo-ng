
/* Function Stack Size: 0x18 bytes */

ID CVmConsoleWindowToolbarController::toolbarItemsWithItemIdentifiers_
             (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  cfstringStruct *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ID IVar11;
  long lVar12;
  ulong uVar13;
  cfstringStruct *pcVar14;
  undefined8 local_f8;
  long lStack_f0;
  long *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8 [128];
  long local_38;
  
  lVar12 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar12;
  uVar2 = (*(code *)PTR__objc_retain_1021e1c78)(param_3);
  lVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar2,PTR_s_count_102268e68);
  puVar1 = PTR__objc_retain_1021e1c78;
  uVar4 = 0;
  if (lVar3 != 0) {
    (*(code *)PTR__objc_retain_1021e1c78)(&cf___);
    local_c8 = 0;
    uStack_c0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_e8 = (long *)0x0;
    uStack_e0 = 0;
    local_f8 = 0;
    lStack_f0 = 0;
    uVar4 = (*(code *)puVar1)(uVar2);
    uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (uVar4,PTR_s_countByEnumeratingWithState_obje_102269048,&local_f8,local_b8,
                       0x10);
    puVar1 = PTR__objc_release_1021e1c70;
    if (uVar5 == 0) {
      pcVar14 = &cf___;
    }
    else {
      lVar12 = *local_e8;
      pcVar14 = &cf___;
      do {
        uVar13 = 0;
        do {
          if (*local_e8 != lVar12) {
            _objc_enumerationMutation(uVar4);
          }
          uVar8 = *(undefined8 *)(lStack_f0 + uVar13 * 8);
          lVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(pcVar14,PTR_s_length_102269050);
          pcVar7 = pcVar14;
          if (lVar3 != 0) {
            uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)
                              (pcVar14,PTR_s_stringByAppendingString__102269058,&cf_OR);
            pcVar7 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue(uVar6);
            (*(code *)PTR__objc_release_1021e1c70)(pcVar14);
          }
          uVar8 = (*(code *)PTR__objc_msgSend_1021e1c68)
                            (PTR__OBJC_CLASS___NSString_10226a7c8,PTR_s_stringWithFormat__102268d88,
                             &cf__itemIdentifier_______,uVar8);
          uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
          uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)
                            (pcVar7,PTR_s_stringByAppendingString__102269058,uVar8);
          pcVar14 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue(uVar6);
          (*(code *)puVar1)(pcVar7);
          (*(code *)puVar1)(uVar8);
          uVar13 = uVar13 + 1;
        } while (uVar13 < uVar5);
        uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                          (uVar4,PTR_s_countByEnumeratingWithState_obje_102269048,&local_f8,local_b8
                           ,0x10);
      } while (uVar5 != 0);
    }
    (*(code *)PTR__objc_release_1021e1c70)(uVar4);
    uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_window_102268c08);
    uVar8 = _objc_retainAutoreleasedReturnValue(uVar4);
    uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar8,PTR_s_toolbar_102269000);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar4);
    uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar6,PTR_s_items_102269008);
    uVar9 = _objc_retainAutoreleasedReturnValue(uVar4);
    uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (PTR__OBJC_CLASS___NSPredicate_10226a838,PTR_s_predicateWithFormat__102269060,
                       pcVar14);
    uVar10 = _objc_retainAutoreleasedReturnValue(uVar4);
    uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (uVar9,PTR_s_filteredArrayUsingPredicate__102269068,uVar10);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    puVar1 = PTR__objc_release_1021e1c70;
    (*(code *)PTR__objc_release_1021e1c70)(uVar10);
    (*(code *)puVar1)(uVar9);
    (*(code *)puVar1)(uVar6);
    (*(code *)puVar1)(uVar8);
    (*(code *)puVar1)(pcVar14);
    lVar12 = *(long *)PTR____stack_chk_guard_1021e1840;
  }
  (*(code *)PTR__objc_release_1021e1c70)(uVar2);
  if (lVar12 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  IVar11 = _objc_autoreleaseReturnValue(uVar4);
  return IVar11;
}

