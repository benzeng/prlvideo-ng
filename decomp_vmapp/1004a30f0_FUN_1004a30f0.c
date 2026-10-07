
/* WARNING: Removing unreachable block (ram,0x0001004a352b) */
/* WARNING: Removing unreachable block (ram,0x0001004a3534) */
/* WARNING: Removing unreachable block (ram,0x0001004a353b) */

void FUN_1004a30f0(long param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  undefined1 *local_138;
  undefined1 *puStack_130;
  undefined1 *local_128;
  undefined8 local_108;
  long lStack_100;
  long *local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c0;
  undefined1 local_b8 [128];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  uVar3 = (*(code *)PTR__objc_msgSend_100ba25e8)
                    (PTR__OBJC_CLASS___NSAutoreleasePool_100bedb20,PTR_s_alloc_100bed228);
  uVar3 = (*(code *)PTR__objc_msgSend_100ba25e8)(uVar3,PTR_s_init_100bed248);
  lVar16 = *(long *)(param_1 + 8);
  if (lVar16 != param_1) {
    uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_100ba23b0;
    uVar2 = *(undefined8 *)PTR__kCFAllocatorNull_100ba23b8;
    do {
      local_c0 = 0;
      uVar4 = (*(code *)PTR__objc_msgSend_100ba25e8)
                        (PTR__OBJC_CLASS___NSDataDetector_100bedbb8,
                         PTR_s_dataDetectorWithTypes_error__100bed750,0x800,&local_c0);
      lVar5 = *(long *)(lVar16 + 0x10);
      if ((*(byte *)(lVar5 + 0x10) & 1) == 0) {
        lVar15 = lVar5 + 0x12;
        uVar13 = (ulong)(*(byte *)(lVar5 + 0x10) >> 1);
      }
      else {
        uVar13 = *(ulong *)(lVar5 + 0x18);
        lVar15 = *(long *)(lVar5 + 0x20);
      }
      lVar5 = _CFStringCreateWithCharactersNoCopy(uVar1,lVar15,uVar13,uVar2);
      if (lVar5 != 0) {
        uVar6 = (*(code *)PTR__objc_msgSend_100ba25e8)(lVar5,PTR_s_length_100bed478);
        uVar4 = (*(code *)PTR__objc_msgSend_100ba25e8)
                          (uVar4,PTR_s_matchesInString_options_range__100bed758,lVar5,0,0,uVar6);
        lVar15 = (*(code *)PTR__objc_msgSend_100ba25e8)(uVar4,PTR_s_count_100bed950);
        if (lVar15 != 0) {
          local_d8 = 0;
          uStack_d0 = 0;
          local_e8 = 0;
          uStack_e0 = 0;
          local_f8 = (long *)0x0;
          uStack_f0 = 0;
          local_108 = 0;
          lStack_100 = 0;
          uVar13 = (*(code *)PTR__objc_msgSend_100ba25e8)
                             (uVar4,PTR_s_countByEnumeratingWithState_obje_100bed4b8,&local_108,
                              local_b8);
          if (uVar13 != 0) {
            lVar15 = *local_f8;
            do {
              uVar17 = 0;
              do {
                if (*local_f8 != lVar15) {
                  _objc_enumerationMutation(uVar4);
                }
                uVar6 = (*(code *)PTR__objc_msgSend_100ba25e8)
                                  (*(undefined8 *)(lStack_100 + uVar17 * 8),
                                   PTR_s_phoneNumber_100bed760);
                (*(code *)PTR__objc_msgSend_100ba25e8)(uVar6,PTR_s_length_100bed478);
                lVar7 = (*(code *)PTR__objc_msgSend_100ba25e8)
                                  (uVar6,PTR_s_stringByReplacingOccurrencesOfSt_100bed768,
                                   &cf_phonenumber,&cf___,1);
                uVar8 = (*(code *)PTR__objc_msgSend_100ba25e8)(lVar7,PTR_s_length_100bed478);
                uVar9 = (*(code *)PTR__objc_msgSend_100ba25e8)(uVar6,PTR_s_length_100bed478);
                if (uVar8 < uVar9) {
                  uVar6 = (*(code *)PTR__objc_msgSend_100ba25e8)
                                    (PTR__OBJC_CLASS___NSCharacterSet_100bedbc0,
                                     PTR_s_whitespaceAndNewlineCharacterSet_100bed770);
                  lVar7 = (*(code *)PTR__objc_msgSend_100ba25e8)
                                    (lVar7,PTR_s_stringByTrimmingCharactersInSet__100bed778,uVar6);
                }
                if ((lVar7 != 0) && (lVar10 = _CFStringGetLength(lVar7), lVar10 != 0)) {
                  uVar8 = lVar10 * 2;
                  local_138 = (undefined1 *)0x0;
                  puStack_130 = (undefined1 *)0x0;
                  local_128 = (undefined1 *)0x0;
                  if (uVar8 != 0) {
                    if ((long)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
                      std::__vector_base_common<true>::__throw_length_error();
                    }
                    local_138 = operator_new(uVar8);
                    local_128 = local_138 + uVar8;
                    lVar14 = lVar10 * -2;
                    puStack_130 = local_138;
                    do {
                      *puStack_130 = 0;
                      puStack_130 = puStack_130 + 1;
                      lVar14 = lVar14 + 1;
                    } while (lVar14 != 0);
                  }
                  _CFStringGetCharacters(lVar7,0,lVar10,local_138);
                  plVar11 = operator_new(0x28);
                  *(undefined4 *)(plVar11 + 1) = 1;
                  *plVar11 = (long)&PTR_FUN_10111c960;
                  *(undefined4 *)((long)plVar11 + 0xc) = 0x19;
                  plVar11[3] = 0;
                  plVar11[2] = 0;
                  plVar11[2] = (long)local_138;
                  plVar11[3] = (long)puStack_130;
                  plVar11[4] = (long)local_128;
                  plVar12 = operator_new(0x18);
                  plVar12[2] = (long)plVar11;
                  LOCK();
                  *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
                  UNLOCK();
                  plVar12[1] = (long)param_2;
                  lVar7 = *param_2;
                  *plVar12 = lVar7;
                  *(long **)(lVar7 + 8) = plVar12;
                  *param_2 = (long)plVar12;
                  param_2[2] = param_2[2] + 1;
                  LOCK();
                  plVar12 = plVar11 + 1;
                  lVar7 = *plVar12;
                  *(int *)plVar12 = (int)*plVar12 + -1;
                  UNLOCK();
                  if ((int)lVar7 == 1) {
                    (**(code **)(*plVar11 + 0x10))(plVar11);
                  }
                }
                uVar17 = uVar17 + 1;
              } while (uVar17 < uVar13);
              uVar13 = (*(code *)PTR__objc_msgSend_100ba25e8)
                                 (uVar4,PTR_s_countByEnumeratingWithState_obje_100bed4b8,&local_108,
                                  local_b8);
            } while (uVar13 != 0);
          }
        }
        _CFRelease(lVar5);
      }
      lVar16 = *(long *)(lVar16 + 8);
    } while (lVar16 != param_1);
  }
  (*(code *)PTR__objc_msgSend_100ba25e8)(uVar3,PTR_s_drain_100bed2a8);
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

