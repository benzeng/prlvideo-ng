
void FUN_10005e730(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  ulong local_100;
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
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  uVar5 = _objc_autoreleasePoolPush();
  cVar4 = '\0';
  uVar6 = _CGWindowListCopyWindowInfo(1,0);
  puVar2 = PTR__objc_msgSend_1021e1c68;
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar6,PTR_s_autorelease_102269a10);
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = (long *)0x0;
  uStack_e0 = 0;
  local_f8 = 0;
  lStack_f0 = 0;
  local_100 = (*(code *)puVar2)(uVar6,PTR_s_countByEnumeratingWithState_obje_102269048,&local_f8,
                                local_b8,0x10);
  if (local_100 != 0) {
    lVar1 = *local_e8;
    do {
      uVar10 = 0;
      do {
        if (*local_e8 != lVar1) {
          _objc_enumerationMutation(uVar6);
        }
        uVar8 = *(undefined8 *)(lStack_f0 + uVar10 * 8);
        uVar7 = (*(code *)puVar2)(uVar8,PTR_s_objectForKeyedSubscript__102269240,
                                  &cf_kCGWindowOwnerName);
        cVar4 = (*(code *)puVar2)(uVar7,PTR_s_isEqualToString__102268f68,&cf_Dock);
        puVar3 = PTR_s_objectForKeyedSubscript__102269240;
        if (cVar4 != '\0') {
          uVar7 = (*(code *)puVar2)(uVar8,PTR_s_objectForKeyedSubscript__102269240,
                                    &cf_kCGWindowStoreType);
          uVar8 = (*(code *)puVar2)(uVar8,puVar3,&cf_kCGWindowLayer);
          puVar3 = PTR_s_integerValue_102268fd8;
          lVar9 = (*(code *)puVar2)(uVar7,PTR_s_integerValue_102268fd8);
          if (lVar9 == 1) {
            lVar9 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar8,puVar3);
            cVar4 = '\x01';
            if (lVar9 == 0x12) goto LAB_10005e90b;
            lVar9 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar8,puVar3);
            if (lVar9 == 0x13) goto LAB_10005e90b;
          }
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < local_100);
      local_100 = (*(code *)PTR__objc_msgSend_1021e1c68)
                            (uVar6,PTR_s_countByEnumeratingWithState_obje_102269048,&local_f8,
                             local_b8,0x10);
    } while (local_100 != 0);
    cVar4 = '\0';
  }
LAB_10005e90b:
  _objc_autoreleasePoolPop(uVar5);
  if (*(char *)(param_1 + 0x20) != cVar4) {
    *(char *)(param_1 + 0x20) = cVar4;
    if (cVar4 == '\0') {
      QTimer::stop();
    }
    else {
      QTimer::start();
    }
    FUN_100809310(*(undefined8 *)(param_1 + 0x10),cVar4);
  }
  if (*(long *)PTR____stack_chk_guard_1021e1840 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

