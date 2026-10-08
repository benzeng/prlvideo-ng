
/* Function Stack Size: 0x28 bytes */

ID QLResponder::previewPanel_transitionImageForPreviewItem_contentRect_
             (ID param_1,SEL param_2,ID param_3,ID param_4,CGRect *param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ID IVar9;
  ulong uVar10;
  double dVar11;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  double dStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  double local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
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
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSWindow_10226aa00,PTR_s_windowNumbersWithOptions__10226a4c8,
                     0);
  uVar5 = _CFArrayCreateMutable(0,0,0);
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = (long *)0x0;
  uStack_e0 = 0;
  local_f8 = 0;
  lStack_f0 = 0;
  uVar6 = (*(code *)puVar2)(uVar4,PTR_s_countByEnumeratingWithState_obje_102269048,&local_f8,
                            local_b8,0x10);
  if (uVar6 != 0) {
    lVar8 = *local_e8;
    do {
      uVar10 = 0;
      do {
        if (*local_e8 != lVar8) {
          _objc_enumerationMutation(uVar4);
        }
        uVar1 = *(undefined8 *)(lStack_f0 + uVar10 * 8);
        iVar3 = (*(code *)puVar2)(uVar1,PTR_s_intValue_1022697a0);
        lVar7 = (*(code *)puVar2)(param_3,PTR_s_windowNumber_102269660);
        if (iVar3 != lVar7) {
          iVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar1,PTR_s_intValue_1022697a0);
          _CFArrayAppendValue(uVar5,(long)iVar3);
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar6);
      uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)
                        (uVar4,PTR_s_countByEnumeratingWithState_obje_102269048,&local_f8,local_b8,
                         0x10);
    } while (uVar6 != 0);
  }
  if (param_1 == 0) {
    local_108 = 0;
    uStack_100 = 0;
    local_118 = 0;
    uStack_110 = 0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_118,param_1,PTR_s_focusRect_10226a4c0);
  }
  IVar9 = 0;
  lVar8 = _CGWindowListCreateImageFromArray(uVar5,0);
  _CFRelease(uVar5);
  if (lVar8 != 0) {
    uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (PTR__OBJC_CLASS___NSImage_10226a7c0,PTR_s_alloc_102268b58);
    if (param_1 == 0) {
      local_128 = 0;
      uStack_120 = 0;
      local_138 = 0;
      uStack_130 = 0;
      local_148 = 0;
      uStack_140 = 0;
      local_158 = 0;
      uStack_150 = 0;
      uVar5 = 0;
    }
    else {
      _objc_msgSend_stret((undefined *)&local_138,param_1,PTR_s_focusRect_10226a4c0);
      uVar5 = local_128;
      _objc_msgSend_stret((undefined *)&local_158,param_1,PTR_s_focusRect_10226a4c0);
    }
    uVar4 = (*(code *)puVar2)(uVar5,uStack_140,uVar4,PTR_s_initWithCGImage_size__10226a290,lVar8);
    IVar9 = (*(code *)puVar2)(uVar4,PTR_s_autorelease_102269a10);
    if (param_1 == 0) {
      local_168 = 0.0;
      uStack_160 = 0;
      local_178 = 0;
      uStack_170 = 0;
      local_188 = 0;
      dStack_180 = 0.0;
      local_198 = 0;
      uStack_190 = 0;
      dVar11 = 0.0;
    }
    else {
      _objc_msgSend_stret((undefined *)&local_178,param_1,PTR_s_focusRect_10226a4c0);
      dVar11 = local_168;
      _objc_msgSend_stret((undefined *)&local_198,param_1,PTR_s_focusRect_10226a4c0);
    }
    (param_5->field0_0x0).field1_0x8 = 0.0;
    (param_5->field0_0x0).field0_0x0 = 0.0;
    (param_5->field1_0x10).field0_0x0 = dVar11;
    (param_5->field1_0x10).field1_0x8 = dStack_180;
    _CGImageRelease(lVar8);
  }
  if (*(long *)PTR____stack_chk_guard_1021e1840 == local_38) {
    return IVar9;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

