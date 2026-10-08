
/* Function Stack Size: 0x10 bytes */

void TitleBarButton::dealloc(ID param_1,SEL param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  objc_super local_108;
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
  
  puVar2 = PTR__objc_msgSend_1021e1c68;
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = (long *)0x0;
  uStack_e0 = 0;
  local_f8 = 0;
  lStack_f0 = 0;
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_observers_102269298);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar5 = (*(code *)puVar2)(uVar4,PTR_s_countByEnumeratingWithState_obje_102269048,&local_f8,
                            local_b8,0x10);
  if (uVar5 != 0) {
    lVar1 = *local_e8;
    do {
      uVar8 = 0;
      do {
        if (*local_e8 != lVar1) {
          _objc_enumerationMutation(uVar4);
        }
        uVar7 = *(undefined8 *)(lStack_f0 + uVar8 * 8);
        uVar6 = (*(code *)puVar2)(PTR__OBJC_CLASS___NSNotificationCenter_10226a7a8,
                                  PTR_s_defaultCenter_102268ba8);
        uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
        (*(code *)puVar2)(uVar6,PTR_s_removeObserver__102268c30,uVar7);
        (*(code *)PTR__objc_release_1021e1c70)(uVar6);
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar5);
      uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                        (uVar4,PTR_s_countByEnumeratingWithState_obje_102269048,&local_f8,local_b8,
                         0x10);
    } while (uVar5 != 0);
  }
  puVar3 = PTR__objc_release_1021e1c70;
  (*(code *)PTR__objc_release_1021e1c70)(uVar4);
  uVar4 = (*(code *)puVar2)(param_1,PTR_s_superview_102268b88);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar7 = (*(code *)puVar2)(param_1,PTR_s_trackingArea_1022692a0);
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
  (*(code *)puVar2)(uVar4,PTR_s_removeTrackingArea__1022692a8,uVar7);
  (*(code *)puVar3)(uVar7);
  (*(code *)puVar3)(uVar4);
  local_108.super_class = (class_t *)PTR_TitleBarButton_10226ab58;
  local_108.receiver = param_1;
  _objc_msgSendSuper2(&local_108,PTR_s_dealloc_102268c60);
  if (*(long *)PTR____stack_chk_guard_1021e1840 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

