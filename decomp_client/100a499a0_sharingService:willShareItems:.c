
/* Function Stack Size: 0x20 bytes */

void SSBaseDelegate::sharingService_willShareItems_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  char cVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
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
  
  puVar3 = PTR__objc_msgSend_1021e1c68;
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  uVar7 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSURL_10226a8d0,PTR_s_class_102269100);
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = (long *)0x0;
  uStack_e0 = 0;
  local_f8 = 0;
  lStack_f0 = 0;
  uVar8 = (*(code *)puVar3)(param_4,PTR_s_countByEnumeratingWithState_obje_102269048,&local_f8,
                            local_b8,0x10);
  if (uVar8 != 0) {
    lVar1 = *local_e8;
    do {
      uVar10 = 0;
      do {
        if (*local_e8 != lVar1) {
          _objc_enumerationMutation(param_4);
        }
        uVar2 = *(undefined8 *)(lStack_f0 + uVar10 * 8);
        cVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar2,PTR_s_isKindOfClass__102269108,uVar7);
        if ((cVar5 != '\0') &&
           (cVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar2,PTR_s_isFileURL_10226a288),
           cVar5 == '\0')) {
          uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)
                            (*(undefined8 *)(param_1 + m_parentWnd),PTR_s_windowNumber_102269660);
          lVar9 = _CGWindowListCreateImage(8,uVar6,1);
          lVar4 = m_screenshot;
          if (lVar9 != 0) {
            if (*(long *)(param_1 + m_screenshot) != 0) {
              (*(code *)PTR__objc_msgSend_1021e1c68)
                        (*(long *)(param_1 + m_screenshot),PTR_s_release_1022699b8);
            }
            puVar3 = PTR__objc_msgSend_1021e1c68;
            uVar7 = (*(code *)PTR__objc_msgSend_1021e1c68)
                              (PTR__OBJC_CLASS___NSImage_10226a7c0,PTR_s_alloc_102268b58);
            uVar7 = (*(code *)puVar3)(*(undefined8 *)PTR__NSZeroSize_1021e11c0,
                                      *(undefined8 *)(PTR__NSZeroSize_1021e11c0 + 8),uVar7,
                                      PTR_s_initWithCGImage_size__10226a290,lVar9);
            *(undefined8 *)(param_1 + lVar4) = uVar7;
            _CGImageRelease(lVar9);
            goto LAB_100a49c09;
          }
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar8);
      uVar8 = (*(code *)PTR__objc_msgSend_1021e1c68)
                        (param_4,PTR_s_countByEnumeratingWithState_obje_102269048,&local_f8,local_b8
                         ,0x10);
    } while (uVar8 != 0);
  }
LAB_100a49c09:
  if (*(long *)PTR____stack_chk_guard_1021e1840 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

