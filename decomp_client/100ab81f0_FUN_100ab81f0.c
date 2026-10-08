
void FUN_100ab81f0(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
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
  uVar3 = _objc_autoreleasePoolPush();
  puVar2 = PTR__objc_msgSend_1021e1c68;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = (long *)0x0;
  uStack_e0 = 0;
  local_f8 = 0;
  lStack_f0 = 0;
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_2,PTR_s_representations_10226a3e0);
  local_100 = (*(code *)puVar2)(uVar4,PTR_s_countByEnumeratingWithState_obje_102269048,&local_f8,
                                local_b8,0x10);
  if (local_100 != 0) {
    lVar1 = *local_e8;
    do {
      uVar7 = 0;
      do {
        if (*local_e8 != lVar1) {
          _objc_enumerationMutation(uVar4);
        }
        uVar6 = *(undefined8 *)(lStack_f0 + uVar7 * 8);
        uVar5 = (*(code *)puVar2)(PTR__OBJC_CLASS___NSBitmapImageRep_10226aab0,PTR_s_alloc_102268b58
                                 );
        uVar6 = (*(code *)puVar2)(uVar6,PTR_s_CGImageForProposedRect_context_h_10226a408,0,0,0);
        uVar6 = (*(code *)puVar2)(uVar5,PTR_s_initWithCGImage__10226a410,uVar6);
        (*(code *)puVar2)(*param_1,PTR_s_addRepresentation__10226a400,uVar6);
        (*(code *)puVar2)(uVar6,PTR_s_release_1022699b8);
        uVar7 = uVar7 + 1;
      } while (uVar7 < local_100);
      local_100 = (*(code *)PTR__objc_msgSend_1021e1c68)
                            (uVar4,PTR_s_countByEnumeratingWithState_obje_102269048,&local_f8,
                             local_b8);
    } while (local_100 != 0);
  }
  _objc_autoreleasePoolPop(uVar3);
  if (*(long *)PTR____stack_chk_guard_1021e1840 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

