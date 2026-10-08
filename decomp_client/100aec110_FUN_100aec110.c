
void FUN_100aec110(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
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
                    (PTR__OBJC_CLASS___NSNotificationCenter_10226a7a8,PTR_s_defaultCenter_102268ba8)
  ;
  uVar3 = DAT_102311860;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = (long *)0x0;
  uStack_e0 = 0;
  local_f8 = 0;
  lStack_f0 = 0;
  uVar5 = (*(code *)puVar2)(DAT_102311860,PTR_s_countByEnumeratingWithState_obje_102269048,&local_f8
                            ,local_b8,0x10);
  puVar2 = PTR_s_removeObserver__102268c30;
  if (uVar5 != 0) {
    lVar1 = *local_e8;
    do {
      uVar6 = 0;
      do {
        if (*local_e8 != lVar1) {
          _objc_enumerationMutation(uVar3);
        }
        (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,puVar2,*(undefined8 *)(lStack_f0 + uVar6 * 8));
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar5);
      uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                        (uVar3,PTR_s_countByEnumeratingWithState_obje_102269048,&local_f8,local_b8,
                         0x10);
    } while (uVar5 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_1021e1840 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

