
/* Function Stack Size: 0x10 bytes */

void PDDeviceBarViewContaner::setupConstraints(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 local_108;
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
  
  puVar1 = PTR__objc_msgSend_1021e1c68;
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_setTranslatesAutoresizingMaskInt_102268cf8,0)
  ;
  uVar2 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSMutableArray_10226a840,PTR_s_new_102269070);
  uVar3 = (*(code *)puVar1)(param_1,PTR_s_keyboardButton_102269450);
  lVar4 = _objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)PTR__objc_release_1021e1c70)(lVar4);
  if (lVar4 != 0) {
    uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_keyboardButton_102269450);
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    (*(code *)PTR__objc_msgSend_1021e1c68)(uVar2,PTR_s_addObject__1022692e8,uVar3);
    (*(code *)PTR__objc_release_1021e1c70)(uVar3);
  }
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_deviceButtons_102269458);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  lVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar3,PTR_s_count_102268e68);
  (*(code *)PTR__objc_release_1021e1c70)(uVar3);
  if (lVar4 != 0) {
    uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_deviceButtons_102269458);
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    (*(code *)PTR__objc_msgSend_1021e1c68)(uVar2,PTR_s_addObjectsFromArray__102269478,uVar3);
    (*(code *)PTR__objc_release_1021e1c70)(uVar3);
  }
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_sharedFoldersButton_102269460);
  lVar4 = _objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)PTR__objc_release_1021e1c70)(lVar4);
  if (lVar4 != 0) {
    uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_sharedFoldersButton_102269460);
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    (*(code *)PTR__objc_msgSend_1021e1c68)(uVar2,PTR_s_addObject__1022692e8,uVar3);
    (*(code *)PTR__objc_release_1021e1c70)(uVar3);
  }
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_developButton_102269468);
  lVar4 = _objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)PTR__objc_release_1021e1c70)(lVar4);
  if (lVar4 != 0) {
    uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_developButton_102269468);
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    (*(code *)PTR__objc_msgSend_1021e1c68)(uVar2,PTR_s_addObject__1022692e8,uVar3);
    (*(code *)PTR__objc_release_1021e1c70)(uVar3);
  }
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_toolsButton_102269470);
  lVar4 = _objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)PTR__objc_release_1021e1c70)(lVar4);
  if (lVar4 != 0) {
    uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_toolsButton_102269470);
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    (*(code *)PTR__objc_msgSend_1021e1c68)(uVar2,PTR_s_addObject__1022692e8,uVar3);
    (*(code *)PTR__objc_release_1021e1c70)(uVar3);
  }
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = (long *)0x0;
  uStack_e0 = 0;
  local_f8 = 0;
  lStack_f0 = 0;
  uVar2 = (*(code *)PTR__objc_retain_1021e1c78)(uVar2);
  uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (uVar2,PTR_s_countByEnumeratingWithState_obje_102269048,&local_f8,local_b8,0x10)
  ;
  if (uVar5 != 0) {
    lVar4 = *local_e8;
    do {
      uVar9 = 0;
      do {
        if (*local_e8 != lVar4) {
          _objc_enumerationMutation(uVar2);
        }
        uVar3 = *(undefined8 *)(lStack_f0 + uVar9 * 8);
        lVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar2,PTR_s_indexOfObject__102269018,uVar3);
        local_108 = 0;
        if (0 < lVar6) {
          uVar7 = (*(code *)PTR__objc_msgSend_1021e1c68)
                            (uVar2,PTR_s_objectAtIndex__102269480,lVar6 + -1);
          local_108 = _objc_retainAutoreleasedReturnValue(uVar7);
        }
        lVar8 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar2,PTR_s_count_102268e68);
        uVar7 = 0;
        if (lVar6 + 1 < lVar8) {
          uVar7 = (*(code *)PTR__objc_msgSend_1021e1c68)
                            (uVar2,PTR_s_objectAtIndex__102269480,lVar6 + 1);
          uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
        }
        (*(code *)PTR__objc_msgSend_1021e1c68)
                  (param_1,PTR_s_addConstraintsForButton_prevButt_102269488,uVar3,local_108,uVar7);
        puVar1 = PTR__objc_release_1021e1c70;
        (*(code *)PTR__objc_release_1021e1c70)(uVar7);
        (*(code *)puVar1)(local_108);
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar5);
      uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                        (uVar2,PTR_s_countByEnumeratingWithState_obje_102269048,&local_f8,local_b8,
                         0x10);
    } while (uVar5 != 0);
  }
  puVar1 = PTR__objc_release_1021e1c70;
  (*(code *)PTR__objc_release_1021e1c70)(uVar2);
  (*(code *)puVar1)(uVar2);
  if (*(long *)PTR____stack_chk_guard_1021e1840 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

