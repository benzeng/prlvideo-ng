
/* Function Stack Size: 0x10 bytes */

void CVideoDataAVF_objc::Close(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 local_1b8;
  long lStack_1b0;
  long *local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  long lStack_170;
  long *local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined1 local_138 [128];
  undefined1 local_b8 [128];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  iVar3 = (*(code *)PTR__objc_msgSend_100ba25e8)(param_1,PTR_s_m_frame_size_100bed670);
  if (iVar3 != 0) {
    lVar4 = (*(code *)PTR__objc_msgSend_100ba25e8)(param_1,PTR_s_m_session_100bed540);
    puVar2 = PTR__objc_msgSend_100ba25e8;
    if (lVar4 != 0) {
      (*(code *)PTR__objc_msgSend_100ba25e8)(param_1,PTR_s_StopSession__100bed688,1);
      local_148 = 0;
      uStack_140 = 0;
      local_158 = 0;
      uStack_150 = 0;
      local_168 = (long *)0x0;
      uStack_160 = 0;
      local_178 = 0;
      lStack_170 = 0;
      uVar5 = (*(code *)puVar2)(param_1,PTR_s_m_session_100bed540);
      uVar5 = (*(code *)puVar2)(uVar5,PTR_s_inputs_100bed690);
      uVar6 = (*(code *)puVar2)(uVar5,PTR_s_countByEnumeratingWithState_obje_100bed4b8,&local_178,
                                local_b8,0x10);
      if (uVar6 != 0) {
        lVar4 = *local_168;
        do {
          uVar8 = 0;
          do {
            if (*local_168 != lVar4) {
              _objc_enumerationMutation(uVar5);
            }
            uVar1 = *(undefined8 *)(lStack_170 + uVar8 * 8);
            uVar7 = (*(code *)puVar2)(param_1,PTR_s_m_session_100bed540);
            (*(code *)puVar2)(uVar7,PTR_s_removeInput__100bed698,uVar1);
            uVar8 = uVar8 + 1;
          } while (uVar8 < uVar6);
          uVar6 = (*(code *)PTR__objc_msgSend_100ba25e8)
                            (uVar5,PTR_s_countByEnumeratingWithState_obje_100bed4b8,&local_178,
                             local_b8,0x10);
        } while (uVar6 != 0);
      }
      local_188 = 0;
      uStack_180 = 0;
      local_198 = 0;
      uStack_190 = 0;
      local_1a8 = (long *)0x0;
      uStack_1a0 = 0;
      local_1b8 = 0;
      lStack_1b0 = 0;
      uVar5 = (*(code *)puVar2)(param_1,PTR_s_m_session_100bed540);
      uVar5 = (*(code *)puVar2)(uVar5,PTR_s_outputs_100bed6a0);
      uVar6 = (*(code *)puVar2)(uVar5,PTR_s_countByEnumeratingWithState_obje_100bed4b8,&local_1b8,
                                local_138,0x10);
      if (uVar6 != 0) {
        lVar4 = *local_1a8;
        do {
          uVar8 = 0;
          do {
            if (*local_1a8 != lVar4) {
              _objc_enumerationMutation(uVar5);
            }
            uVar1 = *(undefined8 *)(lStack_1b0 + uVar8 * 8);
            uVar7 = (*(code *)puVar2)(param_1,PTR_s_m_session_100bed540);
            (*(code *)puVar2)(uVar7,PTR_s_removeOutput__100bed6a8,uVar1);
            uVar8 = uVar8 + 1;
          } while (uVar8 < uVar6);
          uVar6 = (*(code *)PTR__objc_msgSend_100ba25e8)
                            (uVar5,PTR_s_countByEnumeratingWithState_obje_100bed4b8,&local_1b8,
                             local_138,0x10);
        } while (uVar6 != 0);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

