
/* Function Stack Size: 0x18 bytes */

void TitleBarButton::viewWillMoveToWindow_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  undefined *local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  code *local_198;
  undefined *local_190;
  undefined1 local_188 [8];
  undefined *local_180;
  undefined4 local_178;
  undefined4 local_174;
  code *local_170;
  undefined *local_168;
  undefined1 local_160 [8];
  undefined *local_158;
  undefined4 local_150;
  undefined4 local_14c;
  code *local_148;
  undefined *local_140;
  undefined1 local_138 [8];
  undefined *local_130;
  undefined4 local_128;
  undefined4 local_124;
  code *local_120;
  undefined *local_118;
  undefined1 local_110 [8];
  undefined8 local_108;
  long lStack_100;
  long *local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c0 [8];
  undefined1 local_b8 [128];
  long local_38;
  
  lVar11 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar11;
  lVar2 = (*(code *)PTR__objc_retain_1021e1c78)(param_3);
  if (lVar2 != 0) {
    _objc_initWeak(local_c0,param_1);
    uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (PTR__OBJC_CLASS___NSNotificationCenter_10226a7a8,
                       PTR_s_defaultCenter_102268ba8);
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    local_d8 = 0;
    uStack_d0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_f8 = (long *)0x0;
    uStack_f0 = 0;
    local_108 = 0;
    lStack_100 = 0;
    uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_observers_102269298);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (uVar4,PTR_s_countByEnumeratingWithState_obje_102269048,&local_108,local_b8,
                       0x10);
    puVar1 = PTR_s_removeObserver__102268c30;
    if (uVar5 != 0) {
      lVar11 = *local_f8;
      do {
        uVar12 = 0;
        do {
          if (*local_f8 != lVar11) {
            _objc_enumerationMutation(uVar4);
          }
          (*(code *)PTR__objc_msgSend_1021e1c68)
                    (uVar3,puVar1,*(undefined8 *)(lStack_100 + uVar12 * 8));
          uVar12 = uVar12 + 1;
        } while (uVar12 < uVar5);
        uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                          (uVar4,PTR_s_countByEnumeratingWithState_obje_102269048,&local_108,
                           local_b8,0x10);
      } while (uVar5 != 0);
    }
    (*(code *)PTR__objc_release_1021e1c70)(uVar4);
    uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(lVar2,PTR_s_standardWindowButton__102269228,0);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar4);
    (*(code *)PTR__objc_msgSend_1021e1c68)(uVar6,PTR_s_setPostsFrameChangedNotification_1022692c8,1)
    ;
    uVar4 = *(undefined8 *)PTR__NSViewFrameDidChangeNotification_1021e1148;
    local_130 = PTR___NSConcreteStackBlock_1021e1280;
    local_128 = 0xc2000000;
    local_124 = 0;
    local_120 = FUN_10001da50;
    local_118 = &DAT_1021ed000;
    uVar7 = _objc_loadWeakRetained(local_c0);
    _objc_initWeak(local_110,uVar7);
    (*(code *)PTR__objc_release_1021e1c70)(uVar7);
    uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (uVar3,PTR_s_addObserverForName_object_queue__1022692e0,uVar4,uVar6,0,
                       &local_130);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar4);
    uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_observers_102269298);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_addObject__1022692e8,uVar7);
    puVar1 = PTR__objc_release_1021e1c70;
    (*(code *)PTR__objc_release_1021e1c70)(uVar4);
    uVar4 = *(undefined8 *)PTR__NSWindowDidBecomeMainNotification_1021e1160;
    local_158 = PTR___NSConcreteStackBlock_1021e1280;
    local_150 = 0xc2000000;
    local_14c = 0;
    local_148 = FUN_10001daf0;
    local_140 = &DAT_1021ed030;
    uVar8 = _objc_loadWeakRetained(local_c0);
    _objc_initWeak(local_138,uVar8);
    (*(code *)puVar1)(uVar8);
    uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (uVar3,PTR_s_addObserverForName_object_queue__1022692e0,uVar4,lVar2,0,
                       &local_158);
    uVar8 = _objc_retainAutoreleasedReturnValue(uVar4);
    uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_observers_102269298);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_addObject__1022692e8,uVar8);
    (*(code *)puVar1)(uVar4);
    uVar4 = *(undefined8 *)PTR__NSWindowDidResignMainNotification_1021e1170;
    local_180 = PTR___NSConcreteStackBlock_1021e1280;
    local_178 = 0xc2000000;
    local_174 = 0;
    local_170 = FUN_10001db90;
    local_168 = &DAT_1021ed060;
    uVar9 = _objc_loadWeakRetained(local_c0);
    _objc_initWeak(local_160,uVar9);
    (*(code *)puVar1)(uVar9);
    uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (uVar3,PTR_s_addObserverForName_object_queue__1022692e0,uVar4,lVar2,0,
                       &local_180);
    uVar9 = _objc_retainAutoreleasedReturnValue(uVar4);
    uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_observers_102269298);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_addObject__1022692e8,uVar9);
    (*(code *)puVar1)(uVar4);
    uVar4 = *(undefined8 *)PTR__NSWindowDidResizeNotification_1021e1178;
    local_1a8 = PTR___NSConcreteStackBlock_1021e1280;
    local_1a0 = 0xc2000000;
    local_19c = 0;
    local_198 = FUN_10001dc30;
    local_190 = &DAT_1021ed090;
    uVar10 = _objc_loadWeakRetained(local_c0);
    _objc_initWeak(local_188,uVar10);
    (*(code *)puVar1)(uVar10);
    uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (uVar3,PTR_s_addObserverForName_object_queue__1022692e0,uVar4,lVar2,0,
                       &local_1a8);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    uVar10 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_observers_102269298);
    uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
    (*(code *)PTR__objc_msgSend_1021e1c68)(uVar10,PTR_s_addObject__1022692e8,uVar4);
    (*(code *)puVar1)(uVar10);
    (*(code *)puVar1)(uVar4);
    _objc_destroyWeak(local_188);
    (*(code *)puVar1)(uVar9);
    _objc_destroyWeak(local_160);
    (*(code *)puVar1)(uVar8);
    _objc_destroyWeak(local_138);
    (*(code *)puVar1)(uVar7);
    _objc_destroyWeak(local_110);
    (*(code *)puVar1)(uVar6);
    (*(code *)puVar1)(uVar3);
    _objc_destroyWeak(local_c0);
    lVar11 = *(long *)PTR____stack_chk_guard_1021e1840;
  }
  (*(code *)PTR__objc_release_1021e1c70)(lVar2);
  if (lVar11 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

