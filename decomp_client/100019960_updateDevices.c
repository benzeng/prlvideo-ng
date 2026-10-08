
/* Function Stack Size: 0x10 bytes */

void CVmConsoleWindowToolbarController::updateDevices(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  char cVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long local_128;
  undefined8 local_118;
  long lStack_110;
  long *local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  Data *local_d8;
  undefined1 local_c9;
  undefined1 local_c8 [128];
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  long local_38;
  
  lVar17 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar17;
  cVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_isDevicesHidden_102268e08);
  puVar2 = PTR__objc_msgSend_1021e1c68;
  if (cVar5 != '\0') {
    uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)(DAT_102311d80,PTR_s_mutableCopy_102269158);
    (*(code *)puVar2)(uVar6,PTR_s_insertObject_atIndex__102269080,&cf_Show_HideDevices,0);
    (*(code *)PTR__objc_msgSend_1021e1c68)(uVar6,PTR_s_insertObject_atIndex__102269080,&cf_Tools,0);
    (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_removeToolbarItems__102269130,uVar6);
    if (lVar17 == local_38) {
      (*(code *)PTR__objc_release_1021e1c70)(uVar6);
      return;
    }
    goto LAB_10001a16a;
  }
  lVar7 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (param_1,PTR_s_indexOfToolbarItemWithItemIdenti_102269128,&cf_ConfigureVM);
  puVar2 = PTR__objc_msgSend_1021e1c68;
  if (lVar7 != 0x7fffffffffffffff) {
    if (*(char *)(param_1 + _toolsWarningVisible) == '\0') {
      local_40 = &cf_Tools;
      uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)
                        (PTR__OBJC_CLASS___NSArray_10226a818,PTR_s_arrayWithObjects_count__102268f00
                         ,&local_40,1);
      (*(code *)puVar2)(param_1,PTR_s_removeToolbarItems__102269130,uVar6);
    }
    else {
      uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)
                        (param_1,PTR_s_toolbarItemWithItemIdentifier_cr_102269020,&cf_Tools,1,lVar7)
      ;
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      (*(code *)PTR__objc_release_1021e1c70)(uVar6);
    }
    uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (param_1,PTR_s_toolbarItemWithItemIdentifier_cr_102269020,&cf_Show_HideDevices
                       ,1,lVar7);
    lVar7 = _objc_retainAutoreleasedReturnValue(uVar6);
    if (lVar7 != 0) {
      lVar8 = (*(code *)PTR__objc_msgSend_1021e1c68)(lVar7,PTR_s_tag_102269160);
      if (lVar8 == 0) {
        (*(code *)PTR__objc_msgSend_1021e1c68)
                  (param_1,PTR_s_removeToolbarItems__102269130,DAT_102311d80);
      }
      else {
        local_128 = (*(code *)PTR__objc_msgSend_1021e1c68)
                              (param_1,PTR_s_indexOfToolbarItemWithItemIdenti_102269128,
                               &cf_Show_HideDevices);
        if (local_128 == 0x7fffffffffffffff) goto LAB_10001a0d1;
        uVar9 = FUN_1006915d0();
        lVar8 = _vm;
        uVar6 = 0;
        if ((*(long *)(param_1 + _vm) != 0) &&
           (uVar6 = 0, *(int *)(*(long *)(param_1 + _vm) + 4) != 0)) {
          uVar6 = *(undefined8 *)(_vm + 8 + param_1);
        }
        lVar10 = FUN_100691620(uVar9,0xc,uVar6);
        if ((lVar10 == 0) || (cVar5 = QAction::isVisible(), cVar5 == '\0')) {
          local_48 = &cf_Develop;
          uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)
                            (PTR__OBJC_CLASS___NSArray_10226a818,
                             PTR_s_arrayWithObjects_count__102268f00,&local_48,1);
          (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_removeToolbarItems__102269130,uVar6);
        }
        else {
          uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)
                            (param_1,PTR_s_toolbarItemWithItemIdentifier_cr_102269020,&cf_Develop,1,
                             local_128);
          uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
          (*(code *)PTR__objc_release_1021e1c70)(uVar6);
        }
        uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)
                          (param_1,PTR_s_toolbarItemWithItemIdentifier_cr_102269020,
                           &cf_SharedFolders,1,local_128);
        uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
        (*(code *)PTR__objc_release_1021e1c70)(uVar6);
        uVar9 = (*(code *)PTR__objc_msgSend_1021e1c68)(DAT_102311d80,PTR_s_mutableCopy_102269158);
        (*(code *)PTR__objc_msgSend_1021e1c68)(uVar9,PTR_s_removeObject__102269168,&cf_Keyboard);
        (*(code *)PTR__objc_msgSend_1021e1c68)
                  (uVar9,PTR_s_removeObject__102269168,&cf_SharedFolders);
        (*(code *)PTR__objc_msgSend_1021e1c68)(uVar9,PTR_s_removeObject__102269168,&cf_Develop);
        uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)
                          (param_1,PTR_s_toolbarItemsWithItemIdentifiers__102269040,uVar9);
        uVar11 = _objc_retainAutoreleasedReturnValue(uVar6);
        lVar10 = *(long *)(param_1 + lVar8);
        uVar6 = 0;
        if ((lVar10 != 0) && (uVar6 = 0, *(int *)(lVar10 + 4) != 0)) {
          uVar6 = *(undefined8 *)(lVar8 + 8 + param_1);
        }
        uVar6 = FUN_10018f4e0(uVar6);
        plVar12 = (long *)FUN_1007c65a0(uVar6);
        local_d8 = (Data *)*plVar12;
        if (*(int *)local_d8 != -1) {
          if (*(int *)local_d8 == 0) {
            QListData::detach((int)&local_d8);
            lVar10 = (long)*(int *)(local_d8 + 8);
            lVar8 = *plVar12;
            if (((Data *)(lVar8 + (long)*(int *)(lVar8 + 8) * 8) != local_d8 + lVar10 * 8) &&
               (lVar16 = *(int *)(local_d8 + 0xc) - lVar10,
               lVar16 != 0 && lVar10 <= *(int *)(local_d8 + 0xc))) {
              _memcpy(local_d8 + lVar10 * 8 + 0x10,
                      (void *)(lVar8 + 0x10 + (long)*(int *)(lVar8 + 8) * 8),lVar16 * 8);
            }
          }
          else {
            LOCK();
            *(int *)local_d8 = *(int *)local_d8 + 1;
            local_c9 = *(int *)local_d8 != 0;
            UNLOCK();
          }
        }
        lVar8 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar11,PTR_s_count_102268e68);
        if ((lVar8 == (long)*(int *)(local_d8 + 0xc) - (long)*(int *)(local_d8 + 8)) &&
           (lVar8 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar11,PTR_s_count_102268e68), lVar8 != 0
           )) {
          local_e8 = 0;
          uStack_e0 = 0;
          local_f8 = 0;
          uStack_f0 = 0;
          local_108 = (long *)0x0;
          uStack_100 = 0;
          local_118 = 0;
          lStack_110 = 0;
          uVar6 = (*(code *)PTR__objc_retain_1021e1c78)(uVar11);
          uVar13 = (*(code *)PTR__objc_msgSend_1021e1c68)
                             (uVar6,PTR_s_countByEnumeratingWithState_obje_102269048,&local_118,
                              local_c8,0x10);
          if (uVar13 != 0) {
            lVar8 = *local_108;
            lVar17 = 0;
            do {
              lVar10 = lVar17 * 0x100000000;
              uVar4 = 0;
              do {
                uVar14 = uVar4;
                if (*local_108 != lVar8) {
                  _objc_enumerationMutation(uVar6);
                }
                uVar15 = (*(code *)PTR__objc_msgSend_1021e1c68)
                                   (*(undefined8 *)(lStack_110 + uVar14 * 8),PTR_s_view_102269138);
                uVar15 = _objc_retainAutoreleasedReturnValue(uVar15);
                (*(code *)PTR__objc_msgSend_1021e1c68)
                          (uVar15,PTR_s_setActionSet__102268e78,
                           *(undefined8 *)
                            (local_d8 + ((lVar10 >> 0x20) + (long)*(int *)(local_d8 + 8)) * 8 + 0x10
                            ));
                (*(code *)PTR__objc_release_1021e1c70)(uVar15);
                lVar10 = lVar10 + 0x100000000;
                uVar4 = uVar14 + 1;
              } while (uVar14 + 1 < uVar13);
              uVar13 = (*(code *)PTR__objc_msgSend_1021e1c68)
                                 (uVar6,PTR_s_countByEnumeratingWithState_obje_102269048,&local_118,
                                  local_c8,0x10);
              lVar17 = lVar17 + 1 + uVar14;
            } while (uVar13 != 0);
          }
          (*(code *)PTR__objc_release_1021e1c70)(uVar6);
          lVar17 = *(long *)PTR____stack_chk_guard_1021e1840;
        }
        else {
          (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_removeToolbarItems__102269130,uVar9);
          local_128 = (*(code *)PTR__objc_msgSend_1021e1c68)
                                (param_1,PTR_s_indexOfToolbarItemWithItemIdenti_102269128,
                                 &cf_SharedFolders);
          puVar3 = PTR_s_toolbarItemWithItemIdentifier_cr_102269020;
          puVar2 = PTR__objc_release_1021e1c70;
          lVar8 = 0x18;
          if ((int)((long)*(int *)(local_d8 + 0xc) - (long)*(int *)(local_d8 + 8)) < 0x1a) {
            lVar8 = ((long)*(int *)(local_d8 + 0xc) - (long)*(int *)(local_d8 + 8)) + -1;
          }
          if (-1 < lVar8) {
            do {
              uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)
                                (uVar9,PTR_s_objectAtIndexedSubscript__102269170,lVar8);
              uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
              uVar15 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,puVar3,uVar6,1,local_128);
              uVar15 = _objc_retainAutoreleasedReturnValue(uVar15);
              (*(code *)puVar2)(uVar15);
              (*(code *)puVar2)(uVar6);
              bVar1 = 0 < lVar8;
              lVar8 = lVar8 + -1;
            } while (bVar1);
            lVar17 = *(long *)PTR____stack_chk_guard_1021e1840;
          }
        }
        uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)
                          (param_1,PTR_s_toolbarItemWithItemIdentifier_cr_102269020,&cf_Keyboard,1,
                           local_128);
        uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
        (*(code *)PTR__objc_release_1021e1c70)(uVar6);
        if (*(int *)local_d8 != -1) {
          if (*(int *)local_d8 != 0) {
            LOCK();
            *(int *)local_d8 = *(int *)local_d8 + -1;
            local_c9 = *(int *)local_d8 != 0;
            UNLOCK();
            if ((bool)local_c9) goto LAB_10001a0ac;
          }
          QListData::dispose(local_d8);
        }
LAB_10001a0ac:
        puVar2 = PTR__objc_release_1021e1c70;
        (*(code *)PTR__objc_release_1021e1c70)(uVar11);
        (*(code *)puVar2)(uVar9);
      }
      (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_updateSize_102269150);
    }
LAB_10001a0d1:
    (*(code *)PTR__objc_release_1021e1c70)(lVar7);
  }
  if (lVar17 == local_38) {
    return;
  }
LAB_10001a16a:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

