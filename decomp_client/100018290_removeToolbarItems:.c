
/* Function Stack Size: 0x18 bytes */

void CVmConsoleWindowToolbarController::removeToolbarItems_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 local_1b8;
  long lStack_1b0;
  long *local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  long lStack_170;
  long *local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined1 local_138 [128];
  undefined1 local_b8 [128];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  uVar3 = (*(code *)PTR__objc_retain_1021e1c78)(param_3);
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSMutableArray_10226a840,PTR_s_new_102269070);
  uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (param_1,PTR_s_toolbarItemsWithItemIdentifiers__102269040,uVar3);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_168 = (long *)0x0;
  uStack_160 = 0;
  local_178 = 0;
  lStack_170 = 0;
  uVar5 = (*(code *)PTR__objc_retain_1021e1c78)(uVar5);
  uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (uVar5,PTR_s_countByEnumeratingWithState_obje_102269048,&local_178,local_b8,0x10
                    );
  if (uVar6 != 0) {
    lVar1 = *local_168;
    do {
      uVar11 = 0;
      do {
        if (*local_168 != lVar1) {
          _objc_enumerationMutation(uVar5);
        }
        uVar10 = *(undefined8 *)(lStack_170 + uVar11 * 8);
        uVar7 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_window_102268c08);
        uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
        uVar8 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar7,PTR_s_toolbar_102269000);
        uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
        uVar9 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar8,PTR_s_items_102269008);
        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
        uVar10 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar9,PTR_s_indexOfObject__102269018,uVar10)
        ;
        puVar2 = PTR__objc_release_1021e1c70;
        (*(code *)PTR__objc_release_1021e1c70)(uVar9);
        (*(code *)puVar2)(uVar8);
        (*(code *)puVar2)(uVar7);
        uVar10 = (*(code *)PTR__objc_msgSend_1021e1c68)
                           (PTR__OBJC_CLASS___NSNumber_10226a848,PTR_s_numberWithInteger__102269078,
                            uVar10);
        uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
        (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_insertObject_atIndex__102269080,uVar10,0)
        ;
        (*(code *)PTR__objc_release_1021e1c70)(uVar10);
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar6);
      uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)
                        (uVar5,PTR_s_countByEnumeratingWithState_obje_102269048,&local_178,local_b8,
                         0x10);
    } while (uVar6 != 0);
  }
  (*(code *)PTR__objc_release_1021e1c70)(uVar5);
  local_188 = 0;
  uStack_180 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_1a8 = (long *)0x0;
  uStack_1a0 = 0;
  local_1b8 = 0;
  lStack_1b0 = 0;
  uVar4 = (*(code *)PTR__objc_retain_1021e1c78)(uVar4);
  uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (uVar4,PTR_s_countByEnumeratingWithState_obje_102269048,&local_1b8,local_138,
                     0x10);
  if (uVar6 != 0) {
    lVar1 = *local_1a8;
    do {
      uVar11 = 0;
      do {
        if (*local_1a8 != lVar1) {
          _objc_enumerationMutation(uVar4);
        }
        uVar10 = *(undefined8 *)(lStack_1b0 + uVar11 * 8);
        uVar7 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_window_102268c08);
        uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
        uVar8 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar7,PTR_s_toolbar_102269000);
        uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
        uVar10 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar10,PTR_s_integerValue_102268fd8);
        (*(code *)PTR__objc_msgSend_1021e1c68)(uVar8,PTR_s_removeItemAtIndex__102269088,uVar10);
        puVar2 = PTR__objc_release_1021e1c70;
        (*(code *)PTR__objc_release_1021e1c70)(uVar8);
        (*(code *)puVar2)(uVar7);
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar6);
      uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)
                        (uVar4,PTR_s_countByEnumeratingWithState_obje_102269048,&local_1b8,local_138
                         ,0x10);
    } while (uVar6 != 0);
  }
  puVar2 = PTR__objc_release_1021e1c70;
  (*(code *)PTR__objc_release_1021e1c70)(uVar4);
  (*(code *)puVar2)(uVar5);
  (*(code *)puVar2)(uVar4);
  (*(code *)puVar2)(uVar3);
  if (*(long *)PTR____stack_chk_guard_1021e1840 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

