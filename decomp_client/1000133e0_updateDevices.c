
/* Function Stack Size: 0x10 bytes */

void CVmConsoleWindowTitleBarController::updateDevices(ID param_1,SEL param_2)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  Data *local_40;
  undefined1 local_32;
  undefined1 local_31;
  
  cVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_isDevicesHidden_102268e08);
  if (cVar2 != '\0') {
    return;
  }
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_keyboardBarButtonItem_102268e38);
  lVar4 = _objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)PTR__objc_release_1021e1c70)(lVar4);
  if (lVar4 == 0) {
    uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (PTR_PDKeyboardBarButtonItem_10226a7e8,PTR_s_alloc_102268b58);
    puVar1 = PTR__objc_msgSend_1021e1c68;
    uVar3 = 0;
    if ((*(long *)(param_1 + _vm) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + _vm) + 4) != 0))
    {
      uVar3 = *(undefined8 *)(_vm + 8 + param_1);
    }
    uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar6,PTR_s_initWithVm__102268e40,uVar3);
    (*(code *)puVar1)(param_1,PTR_s_setKeyboardBarButtonItem__102268e48,uVar3);
    (*(code *)PTR__objc_msgSend_1021e1c68)
              (param_1,PTR_s_addStackedView_withPriority__102268e50,uVar3,0);
  }
  else {
    uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_keyboardBarButtonItem_102268e38);
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    uVar6 = 0;
    if ((*(long *)(param_1 + _vm) != 0) && (uVar6 = 0, *(int *)(*(long *)(param_1 + _vm) + 4) != 0))
    {
      uVar6 = *(undefined8 *)(_vm + 8 + param_1);
    }
    (*(code *)PTR__objc_msgSend_1021e1c68)(uVar3,PTR_s_setVm__102268e58,uVar6);
  }
  (*(code *)PTR__objc_release_1021e1c70)(uVar3);
  uVar3 = 0;
  if ((*(long *)(param_1 + _vm) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + _vm) + 4) != 0)) {
    uVar3 = *(undefined8 *)(_vm + 8 + param_1);
  }
  uVar3 = FUN_10018f4e0(uVar3);
  plVar5 = (long *)FUN_1007c65a0(uVar3);
  local_40 = (Data *)*plVar5;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 == 0) {
      QListData::detach((int)&local_40);
      lVar9 = (long)*(int *)(local_40 + 8);
      lVar4 = *plVar5;
      if (((Data *)(lVar4 + (long)*(int *)(lVar4 + 8) * 8) != local_40 + lVar9 * 8) &&
         (lVar10 = *(int *)(local_40 + 0xc) - lVar9,
         lVar10 != 0 && lVar9 <= *(int *)(local_40 + 0xc))) {
        _memcpy(local_40 + lVar9 * 8 + 0x10,(void *)(lVar4 + 0x10 + (long)*(int *)(lVar4 + 8) * 8),
                lVar10 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + 1;
      local_32 = *(int *)local_40 != 0;
      UNLOCK();
    }
  }
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_deviceBarButtonItems_102268e60);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  lVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar3,PTR_s_count_102268e68);
  if (lVar4 == (long)*(int *)(local_40 + 0xc) - (long)*(int *)(local_40 + 8)) {
    uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_deviceBarButtonItems_102268e60);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    lVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar6,PTR_s_count_102268e68);
    puVar1 = PTR__objc_release_1021e1c70;
    if (lVar4 == 0) {
      (*(code *)PTR__objc_release_1021e1c70)(uVar6);
      (*(code *)puVar1)(uVar3);
      goto LAB_10001377d;
    }
    uVar7 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_deviceBarButtonItems_102268e60);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    lVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar7,PTR_s_pointerAtIndex__102268e70,0);
    puVar1 = PTR__objc_release_1021e1c70;
    (*(code *)PTR__objc_release_1021e1c70)(uVar7);
    (*(code *)puVar1)(uVar6);
    (*(code *)puVar1)(uVar3);
    if (lVar4 == 0) goto LAB_10001377d;
    lVar4 = 0;
    uVar11 = 0;
    while( true ) {
      uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_deviceBarButtonItems_102268e60);
      uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
      uVar8 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar3,PTR_s_count_102268e68);
      (*(code *)PTR__objc_release_1021e1c70)(uVar3);
      if (uVar8 <= uVar11) break;
      uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_deviceBarButtonItems_102268e60);
      uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
      uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar3,PTR_s_pointerAtIndex__102268e70,uVar11);
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      (*(code *)PTR__objc_release_1021e1c70)(uVar3);
      (*(code *)PTR__objc_msgSend_1021e1c68)
                (uVar6,PTR_s_setActionSet__102268e78,
                 *(undefined8 *)
                  (local_40 + ((lVar4 >> 0x20) + (long)*(int *)(local_40 + 8)) * 8 + 0x10));
      (*(code *)PTR__objc_release_1021e1c70)(uVar6);
      uVar11 = uVar11 + 1;
      lVar4 = lVar4 + 0x100000000;
    }
  }
  else {
    (*(code *)PTR__objc_release_1021e1c70)(uVar3);
LAB_10001377d:
    uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_toolsBarButtonItem_102268e80);
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_removeStackedView__102268e88,uVar3);
    (*(code *)PTR__objc_release_1021e1c70)(uVar3);
    (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_setToolsBarButtonItem__102268e90,0);
    uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_developBarButtonItem_102268e98);
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_removeStackedView__102268e88,uVar3);
    (*(code *)PTR__objc_release_1021e1c70)(uVar3);
    (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_setDevelopBarButtonItem__102268ea0,0);
    uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (param_1,PTR_s_sharedFoldersBarButtonItem_102268ea8);
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_removeStackedView__102268e88,uVar3);
    (*(code *)PTR__objc_release_1021e1c70)(uVar3);
    (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_setSharedFoldersBarButtonItem__102268eb0,0)
    ;
    puVar1 = PTR_s_deviceBarButtonItems_102268e60;
    uVar11 = 0;
    while( true ) {
      uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,puVar1);
      uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
      uVar8 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar3,PTR_s_count_102268e68);
      (*(code *)PTR__objc_release_1021e1c70)(uVar3);
      if (uVar8 <= uVar11) break;
      uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,puVar1);
      uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
      uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar3,PTR_s_pointerAtIndex__102268e70,uVar11);
      (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_removeStackedView__102268e88,uVar6);
      (*(code *)PTR__objc_release_1021e1c70)(uVar3);
      uVar11 = uVar11 + 1;
    }
    uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (PTR__OBJC_CLASS___NSPointerArray_10226a7b0,
                       PTR_s_weakObjectsPointerArray_102268c18);
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_setDeviceBarButtonItems__102268eb8,uVar3);
    (*(code *)PTR__objc_release_1021e1c70)(uVar3);
    puVar1 = PTR_s_addStackedView_withPriority__102268e50;
    if (*(int *)(local_40 + 8) < *(int *)(local_40 + 0xc)) {
      lVar4 = 0;
      do {
        uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                          (PTR_PDDeviceBarButtonItem_10226a7f0,PTR_s_alloc_102268b58);
        uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                          (uVar3,PTR_s_initWithActionSet__102268ec0,
                           *(undefined8 *)(local_40 + (*(int *)(local_40 + 8) + lVar4) * 8 + 0x10));
        uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_deviceBarButtonItems_102268e60)
        ;
        uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
        (*(code *)PTR__objc_msgSend_1021e1c68)(uVar6,PTR_s_addPointer__102268ec8,uVar3);
        (*(code *)PTR__objc_release_1021e1c70)(uVar6);
        (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,puVar1,uVar3,0);
        (*(code *)PTR__objc_release_1021e1c70)(uVar3);
        lVar4 = lVar4 + 1;
      } while (lVar4 < (long)*(int *)(local_40 + 0xc) - (long)*(int *)(local_40 + 8));
    }
  }
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_sharedFoldersBarButtonItem_102268ea8)
  ;
  lVar4 = _vm;
  lVar9 = _objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)PTR__objc_release_1021e1c70)(lVar9);
  if (lVar9 == 0) {
    uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (PTR_PDSharedFoldersBarButtonItem_10226a7f8,PTR_s_alloc_102268b58);
    uVar3 = 0;
    if ((*(long *)(param_1 + lVar4) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_1 + lVar4) + 4) != 0)) {
      uVar3 = *(undefined8 *)(lVar4 + 8 + param_1);
    }
    uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar6,PTR_s_initWithVm__102268e40,uVar3);
    (*(code *)PTR__objc_msgSend_1021e1c68)
              (param_1,PTR_s_setSharedFoldersBarButtonItem__102268eb0,uVar3);
    (*(code *)PTR__objc_msgSend_1021e1c68)
              (param_1,PTR_s_addStackedView_withPriority__102268e50,uVar3,0);
  }
  else {
    uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (param_1,PTR_s_sharedFoldersBarButtonItem_102268ea8);
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    uVar6 = 0;
    if ((*(long *)(param_1 + lVar4) != 0) &&
       (uVar6 = 0, *(int *)(*(long *)(param_1 + lVar4) + 4) != 0)) {
      uVar6 = *(undefined8 *)(lVar4 + 8 + param_1);
    }
    (*(code *)PTR__objc_msgSend_1021e1c68)(uVar3,PTR_s_setVm__102268e58,uVar6);
  }
  (*(code *)PTR__objc_release_1021e1c70)(uVar3);
  uVar6 = FUN_1006915d0();
  uVar3 = 0;
  if ((*(long *)(param_1 + lVar4) != 0) &&
     (uVar3 = 0, *(int *)(*(long *)(param_1 + lVar4) + 4) != 0)) {
    uVar3 = *(undefined8 *)(lVar4 + 8 + param_1);
  }
  lVar9 = FUN_100691620(uVar6,0xc,uVar3);
  if ((lVar9 == 0) || (cVar2 = QAction::isVisible(), cVar2 == '\0')) {
    uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_developBarButtonItem_102268e98);
    lVar9 = _objc_retainAutoreleasedReturnValue(uVar3);
    (*(code *)PTR__objc_release_1021e1c70)(lVar9);
    if (lVar9 != 0) {
      uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_developBarButtonItem_102268e98);
      uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
      (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_removeStackedView__102268e88,uVar3);
      goto LAB_100013c14;
    }
  }
  else {
    uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_developBarButtonItem_102268e98);
    lVar9 = _objc_retainAutoreleasedReturnValue(uVar3);
    (*(code *)PTR__objc_release_1021e1c70)(lVar9);
    if (lVar9 == 0) {
      uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)
                        (PTR_PDDevelopBarButtonItem_10226a800,PTR_s_alloc_102268b58);
      uVar3 = 0;
      if ((*(long *)(param_1 + lVar4) != 0) &&
         (uVar3 = 0, *(int *)(*(long *)(param_1 + lVar4) + 4) != 0)) {
        uVar3 = *(undefined8 *)(lVar4 + 8 + param_1);
      }
      uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar6,PTR_s_initWithVm__102268e40,uVar3);
      (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_setDevelopBarButtonItem__102268ea0,uVar3)
      ;
      (*(code *)PTR__objc_msgSend_1021e1c68)
                (param_1,PTR_s_addStackedView_withPriority__102268e50,uVar3,0);
    }
    else {
      uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_developBarButtonItem_102268e98);
      uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
      uVar6 = 0;
      if ((*(long *)(param_1 + lVar4) != 0) &&
         (uVar6 = 0, *(int *)(*(long *)(param_1 + lVar4) + 4) != 0)) {
        uVar6 = *(undefined8 *)(lVar4 + 8 + param_1);
      }
      (*(code *)PTR__objc_msgSend_1021e1c68)(uVar3,PTR_s_setVm__102268e58,uVar6);
    }
LAB_100013c14:
    (*(code *)PTR__objc_release_1021e1c70)(uVar3);
  }
  if (*(char *)(param_1 + _toolsWarningVisible) == '\0') {
    uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_toolsBarButtonItem_102268e80);
    lVar4 = _objc_retainAutoreleasedReturnValue(uVar3);
    (*(code *)PTR__objc_release_1021e1c70)(lVar4);
    if (lVar4 == 0) goto LAB_100013d70;
    uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_toolsBarButtonItem_102268e80);
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_removeStackedView__102268e88,uVar3);
  }
  else {
    uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)();
    lVar9 = _objc_retainAutoreleasedReturnValue(uVar3);
    (*(code *)PTR__objc_release_1021e1c70)(lVar9);
    if (lVar9 == 0) {
      uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)
                        (PTR_PDToolsBarButtonItem_10226a808,PTR_s_alloc_102268b58);
      uVar3 = 0;
      if ((*(long *)(param_1 + lVar4) != 0) &&
         (uVar3 = 0, *(int *)(*(long *)(param_1 + lVar4) + 4) != 0)) {
        uVar3 = *(undefined8 *)(lVar4 + 8 + param_1);
      }
      uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar6,PTR_s_initWithVm__102268e40,uVar3);
      (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_setToolsBarButtonItem__102268e90,uVar3);
      (*(code *)PTR__objc_msgSend_1021e1c68)
                (param_1,PTR_s_addStackedView_withPriority__102268e50,uVar3,1);
    }
    else {
      uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_toolsBarButtonItem_102268e80);
      uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
      uVar6 = 0;
      if ((*(long *)(param_1 + lVar4) != 0) &&
         (uVar6 = 0, *(int *)(*(long *)(param_1 + lVar4) + 4) != 0)) {
        uVar6 = *(undefined8 *)(lVar4 + 8 + param_1);
      }
      (*(code *)PTR__objc_msgSend_1021e1c68)(uVar3,PTR_s_setVm__102268e58,uVar6);
    }
  }
  (*(code *)PTR__objc_release_1021e1c70)(uVar3);
LAB_100013d70:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_31 = 0;
    }
    QListData::dispose(local_40);
  }
  return;
}

