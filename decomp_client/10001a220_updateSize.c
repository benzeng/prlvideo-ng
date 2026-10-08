
/* Function Stack Size: 0x10 bytes */

void CVmConsoleWindowToolbarController::updateSize(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  double dVar14;
  long local_58;
  undefined8 local_40;
  long local_38;
  
  lVar5 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar5;
  uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (param_1,PTR_s_toolbarItemWithItemIdentifier__102269010,&cf_CustomSpace);
  lVar3 = _objc_retainAutoreleasedReturnValue(uVar2);
  if (lVar3 != 0) {
    local_40 = *(undefined8 *)PTR__NSToolbarFlexibleSpaceItemIdentifier_1021e1140;
    uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (PTR__OBJC_CLASS___NSArray_10226a818,PTR_s_arrayWithObjects_count__102268f00,
                       &local_40,1);
    uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (param_1,PTR_s_toolbarItemsWithItemIdentifiers__102269040,uVar2);
    uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
    uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar2,PTR_s_lastObject_102269178);
    lVar5 = _objc_retainAutoreleasedReturnValue(uVar4);
    (*(code *)PTR__objc_release_1021e1c70)(lVar5);
    if (lVar5 != 0) {
      uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_window_102268c08);
      uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
      uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_toolbar_102269000);
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      uVar7 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar6,PTR_s_visibleItems_102269180);
      uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
      uVar8 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar2,PTR_s_lastObject_102269178);
      uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
      uVar9 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar7,PTR_s_indexOfObject__102269018,uVar8);
      puVar1 = PTR__objc_release_1021e1c70;
      (*(code *)PTR__objc_release_1021e1c70)(uVar8);
      (*(code *)puVar1)(uVar7);
      (*(code *)puVar1)(uVar6);
      (*(code *)puVar1)(uVar4);
      local_58 = 0;
      uVar13 = uVar9;
      while( true ) {
        uVar13 = uVar13 + 1;
        uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_window_102268c08);
        uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
        uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_toolbar_102269000);
        uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
        uVar7 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar6,PTR_s_visibleItems_102269180);
        uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
        uVar10 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar7,PTR_s_count_102268e68);
        (*(code *)puVar1)(uVar7);
        (*(code *)puVar1)(uVar6);
        (*(code *)puVar1)(uVar4);
        if (uVar10 <= uVar13) break;
        uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_window_102268c08);
        uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
        uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_toolbar_102269000);
        uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
        uVar7 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar6,PTR_s_visibleItems_102269180);
        uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
        uVar8 = (*(code *)PTR__objc_msgSend_1021e1c68)
                          (uVar7,PTR_s_objectAtIndexedSubscript__102269170,uVar13);
        uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
        (*(code *)puVar1)(uVar7);
        (*(code *)puVar1)(uVar6);
        (*(code *)puVar1)(uVar4);
        dVar14 = (double)(*(code *)PTR__objc_msgSend_1021e1c68)(uVar8,PTR_s_maxSize_102269188);
        local_58 = (long)((double)local_58 + dVar14);
        (*(code *)PTR__objc_release_1021e1c70)(uVar8);
      }
      uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_window_102268c08);
      uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
      uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_toolbar_102269000);
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      uVar7 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar6,PTR_s_visibleItems_102269180);
      uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
      lVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar7,PTR_s_count_102268e68);
      (*(code *)puVar1)(uVar7);
      (*(code *)puVar1)(uVar6);
      (*(code *)puVar1)(uVar4);
      uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)
                        (param_1,PTR_s_toolbarItemWithItemIdentifier__102269010,&cf_TitleMessage);
      lVar5 = local_58 + -0x10 + (lVar5 - uVar9) * 8;
      lVar11 = _objc_retainAutoreleasedReturnValue(uVar4);
      if (lVar11 != 0) {
        dVar14 = (double)(*(code *)PTR__objc_msgSend_1021e1c68)(lVar11,PTR_s_maxSize_102269188);
        lVar5 = (long)((double)lVar5 - (dVar14 + DAT_100e11010));
      }
      uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)
                        (param_1,PTR_s_toolbarItemWithItemIdentifier__102269010,&cf_LeftCustomSpace)
      ;
      lVar12 = _objc_retainAutoreleasedReturnValue(uVar4);
      if (lVar12 != 0) {
        dVar14 = (double)(*(code *)PTR__objc_msgSend_1021e1c68)(lVar12,PTR_s_maxSize_102269188);
        lVar5 = (long)((double)lVar5 - (dVar14 + DAT_100e11090));
      }
      (*(code *)PTR__objc_msgSend_1021e1c68)
                (DAT_100e11050,DAT_100e11098,lVar3,PTR_s_setMinSize__102268f90);
      dVar14 = DAT_100e11050;
      if (0 < lVar5) {
        dVar14 = (double)lVar5;
      }
      (*(code *)PTR__objc_msgSend_1021e1c68)(dVar14,DAT_100e11098,lVar3,PTR_s_setMaxSize__102268f88)
      ;
      (*(code *)puVar1)(lVar12);
      (*(code *)puVar1)(lVar11);
    }
    (*(code *)PTR__objc_release_1021e1c70)(uVar2);
    lVar5 = *(long *)PTR____stack_chk_guard_1021e1840;
  }
  (*(code *)PTR__objc_release_1021e1c70)(lVar3);
  if (lVar5 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

