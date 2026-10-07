
undefined8 FUN_1005098f0(undefined8 *param_1)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
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
  
  puVar1 = PTR__objc_msgSend_100ba25e8;
  lVar10 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar10;
  uVar3 = (*(code *)PTR__objc_msgSend_100ba25e8)(*param_1,PTR_s_representations_100bed878);
  lVar4 = (*(code *)puVar1)(uVar3,PTR_s_count_100bed950);
  uVar3 = 0;
  if (lVar4 != 0) {
    uVar3 = 0;
    lVar4 = _CFDataCreateMutable(0,0);
    if (lVar4 != 0) {
      uVar3 = (*(code *)PTR__objc_msgSend_100ba25e8)(*param_1,PTR_s_representations_100bed878);
      uVar3 = (*(code *)PTR__objc_msgSend_100ba25e8)(uVar3,PTR_s_count_100bed950);
      lVar5 = _CGImageDestinationCreateWithData
                        (lVar4,*(undefined8 *)PTR__kUTTypeAppleICNS_100ba25a8,uVar3,0);
      uVar3 = 0;
      if (lVar5 != 0) {
        uVar3 = _objc_autoreleasePoolPush();
        local_c8 = 0;
        uStack_c0 = 0;
        local_d8 = 0;
        uStack_d0 = 0;
        local_e8 = (long *)0x0;
        uStack_e0 = 0;
        local_f8 = 0;
        lStack_f0 = 0;
        uVar6 = (*(code *)PTR__objc_msgSend_100ba25e8)(*param_1,PTR_s_representations_100bed878);
        uVar7 = (*(code *)PTR__objc_msgSend_100ba25e8)
                          (uVar6,PTR_s_countByEnumeratingWithState_obje_100bed4b8,&local_f8,local_b8
                           ,0x10);
        if (uVar7 != 0) {
          lVar10 = *local_e8;
          do {
            uVar9 = 0;
            do {
              if (*local_e8 != lVar10) {
                _objc_enumerationMutation(uVar6);
              }
              uVar8 = (*(code *)PTR__objc_msgSend_100ba25e8)
                                (*(undefined8 *)(lStack_f0 + uVar9 * 8),
                                 PTR_s_CGImageForProposedRect_context_h_100bed748,0,0,0);
              _CGImageDestinationAddImage(lVar5,uVar8,0);
              uVar9 = uVar9 + 1;
            } while (uVar9 < uVar7);
            uVar7 = (*(code *)PTR__objc_msgSend_100ba25e8)
                              (uVar6,PTR_s_countByEnumeratingWithState_obje_100bed4b8,&local_f8);
          } while (uVar7 != 0);
        }
        _objc_autoreleasePoolPop(uVar3);
        lVar10 = *(long *)PTR____stack_chk_guard_100ba2320;
        cVar2 = _CGImageDestinationFinalize(lVar5);
        uVar3 = 0;
        if (cVar2 != '\0') {
          uVar3 = _CFRetain(lVar4);
        }
        _CFRelease(lVar5);
      }
      _CFRelease(lVar4);
    }
  }
  if (lVar10 == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

