
void FUN_100ac8d70(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined4 local_fc;
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
  
  lVar4 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar4;
  FUN_100223940(param_2);
  lVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSWindow_10226aa00,PTR_s_windowNumbersWithOptions__10226a4c8,
                     1);
  if (lVar2 != 0) {
    local_c8 = 0;
    uStack_c0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_e8 = (long *)0x0;
    uStack_e0 = 0;
    local_f8 = 0;
    lStack_f0 = 0;
    uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (lVar2,PTR_s_countByEnumeratingWithState_obje_102269048,&local_f8,local_b8,
                       0x10);
    if (uVar3 != 0) {
      lVar4 = *local_e8;
      do {
        uVar5 = 0;
        do {
          if (*local_e8 != lVar4) {
            _objc_enumerationMutation(lVar2);
          }
          local_fc = (*(code *)PTR__objc_msgSend_1021e1c68)
                               (*(undefined8 *)(lStack_f0 + uVar5 * 8),
                                PTR_s_unsignedIntValue_10226a540);
          cVar1 = FUN_100add1c0(param_1,local_fc);
          if (cVar1 != '\0') {
            FUN_1000bf010(param_2,&local_fc);
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar3);
        uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                          (lVar2,PTR_s_countByEnumeratingWithState_obje_102269048,&local_f8,local_b8
                           ,0x10);
      } while (uVar3 != 0);
    }
    FUN_100add200(param_1,param_2);
    FUN_100add300(param_1,param_2);
    lVar4 = *(long *)PTR____stack_chk_guard_1021e1840;
  }
  if (lVar4 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

