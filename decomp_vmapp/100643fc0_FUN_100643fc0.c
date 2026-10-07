
void FUN_100643fc0(void)

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
  
  puVar2 = PTR__objc_msgSend_100ba25e8;
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  uVar4 = (*(code *)PTR__objc_msgSend_100ba25e8)
                    (PTR__OBJC_CLASS___NSNotificationCenter_100bedb78,PTR_s_defaultCenter_100bed538)
  ;
  uVar3 = DAT_1011cca98;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = (long *)0x0;
  uStack_e0 = 0;
  local_f8 = 0;
  lStack_f0 = 0;
  uVar5 = (*(code *)puVar2)(DAT_1011cca98,PTR_s_countByEnumeratingWithState_obje_100bed4b8,&local_f8
                            ,local_b8,0x10);
  puVar2 = PTR_s_removeObserver__100bed588;
  if (uVar5 != 0) {
    lVar1 = *local_e8;
    do {
      uVar6 = 0;
      do {
        if (*local_e8 != lVar1) {
          _objc_enumerationMutation(uVar3);
        }
        (*(code *)PTR__objc_msgSend_100ba25e8)(uVar4,puVar2,*(undefined8 *)(lStack_f0 + uVar6 * 8));
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar5);
      uVar5 = (*(code *)PTR__objc_msgSend_100ba25e8)
                        (uVar3,PTR_s_countByEnumeratingWithState_obje_100bed4b8,&local_f8,local_b8,
                         0x10);
    } while (uVar5 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

