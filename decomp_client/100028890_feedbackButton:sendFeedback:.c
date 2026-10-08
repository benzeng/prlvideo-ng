
/* Function Stack Size: 0x20 bytes */

void PDLFeedbackButtonDelegate::feedbackButton_sendFeedback_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  char cVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  QArrayData *local_128;
  QString local_120;
  QString local_118;
  QString local_110;
  undefined8 local_108;
  long lStack_100;
  long *local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  _func_void_Node_ptr *local_c8;
  undefined1 local_b9;
  undefined1 local_b8 [128];
  long local_38;
  
  puVar4 = PTR__objc_retain_1021e1c78;
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  uVar7 = (*(code *)PTR__objc_retain_1021e1c78)(param_3);
  uVar8 = (*(code *)puVar4)(param_4);
  local_c8 = (_func_void_Node_ptr *)PTR_shared_null_1021e15d0;
  uVar9 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar7,PTR_s_buttonIdentifier_102269798);
  uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
  uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar9,PTR_s_intValue_1022697a0);
  (*(code *)PTR__objc_release_1021e1c70)(uVar9);
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = (long *)0x0;
  uStack_f0 = 0;
  local_108 = 0;
  lStack_100 = 0;
  uVar9 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar8,PTR_s_allKeys_1022697a8);
  uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
  uVar10 = (*(code *)PTR__objc_msgSend_1021e1c68)
                     (uVar9,PTR_s_countByEnumeratingWithState_obje_102269048,&local_108,local_b8,
                      0x10);
  if (uVar10 != 0) {
    lVar2 = *local_f8;
    do {
      uVar13 = 0;
      do {
        if (*local_f8 != lVar2) {
          _objc_enumerationMutation(uVar9);
        }
        uVar3 = *(undefined8 *)(lStack_100 + uVar13 * 8);
        uVar11 = (*(code *)PTR__objc_msgSend_1021e1c68)
                           (uVar8,PTR_s_objectForKeyedSubscript__102269240,uVar3);
        uVar11 = _objc_retainAutoreleasedReturnValue(uVar11);
        local_110.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
        uVar12 = (*(code *)PTR__objc_msgSend_1021e1c68)
                           (PTR__OBJC_CLASS___NSString_10226a7c8,PTR_s_class_102269100);
        cVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar11,PTR_s_isKindOfClass__102269108,uVar12)
        ;
        if (cVar5 == '\0') {
          uVar12 = (*(code *)PTR__objc_msgSend_1021e1c68)
                             (PTR__OBJC_CLASS___NSNumber_10226a848,PTR_s_class_102269100);
          cVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                            (uVar11,PTR_s_isKindOfClass__102269108,uVar12);
          puVar4 = PTR__OBJC_CLASS___NSString_10226a7c8;
          if (cVar5 != '\0') {
            uVar12 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar11,PTR_s_stringValue_1022691d0);
            uVar12 = _objc_retainAutoreleasedReturnValue(uVar12);
            if (puVar4 == (undefined *)0x0) {
              local_120.field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
            }
            else {
              _objc_msgSend_stret((undefined *)&local_120,(ID)puVar4,
                                  PTR_s_QStringWithString__1022696d0,uVar12);
            }
            QString::operator=(&local_110,&local_120);
            if (*(int *)local_120.field0_0x0 != -1) {
              if (*(int *)local_120.field0_0x0 != 0) {
                LOCK();
                *(int *)local_120.field0_0x0 = *(int *)local_120.field0_0x0 + -1;
                local_b9 = *(int *)local_120.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_b9) goto LAB_100028bbd;
              }
              QArrayData::deallocate((QArrayData *)local_120.field0_0x0,2,8);
            }
LAB_100028bbd:
            (*(code *)PTR__objc_release_1021e1c70)(uVar12);
          }
        }
        else {
          if (PTR__OBJC_CLASS___NSString_10226a7c8 == (undefined *)0x0) {
            local_118.field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
          }
          else {
            _objc_msgSend_stret((undefined *)&local_118,(ID)PTR__OBJC_CLASS___NSString_10226a7c8,
                                PTR_s_QStringWithString__1022696d0,uVar11);
          }
          QString::operator=(&local_110,&local_118);
          if (*(int *)local_118.field0_0x0 != -1) {
            if (*(int *)local_118.field0_0x0 != 0) {
              LOCK();
              *(int *)local_118.field0_0x0 = *(int *)local_118.field0_0x0 + -1;
              local_b9 = *(int *)local_118.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_b9) goto LAB_100028bc6;
            }
            QArrayData::deallocate((QArrayData *)local_118.field0_0x0,2,8);
          }
        }
LAB_100028bc6:
        if (PTR__OBJC_CLASS___NSString_10226a7c8 == (undefined *)0x0) {
          local_128 = (QArrayData *)0x0;
        }
        else {
          _objc_msgSend_stret((undefined *)&local_128,(ID)PTR__OBJC_CLASS___NSString_10226a7c8,
                              PTR_s_QStringWithString__1022696d0,uVar3);
        }
        FUN_10002bf90(&local_c8,&local_128,&local_110);
        if (*(int *)local_128 != -1) {
          if (*(int *)local_128 != 0) {
            LOCK();
            *(int *)local_128 = *(int *)local_128 + -1;
            local_b9 = *(int *)local_128 != 0;
            UNLOCK();
            if ((bool)local_b9) goto LAB_100028c51;
          }
          QArrayData::deallocate(local_128,2,8);
        }
LAB_100028c51:
        if (*(int *)local_110.field0_0x0 != -1) {
          if (*(int *)local_110.field0_0x0 != 0) {
            LOCK();
            *(int *)local_110.field0_0x0 = *(int *)local_110.field0_0x0 + -1;
            local_b9 = *(int *)local_110.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_b9) goto LAB_100028c8d;
          }
          QArrayData::deallocate((QArrayData *)local_110.field0_0x0,2,8);
        }
LAB_100028c8d:
        (*(code *)PTR__objc_release_1021e1c70)(uVar11);
        uVar13 = uVar13 + 1;
      } while (uVar13 < uVar10);
      uVar10 = (*(code *)PTR__objc_msgSend_1021e1c68)
                         (uVar9,PTR_s_countByEnumeratingWithState_obje_102269048,&local_108,local_b8
                          ,0x10);
    } while (uVar10 != 0);
  }
  (*(code *)PTR__objc_release_1021e1c70)(uVar9);
  uVar9 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_owner_1022697b0);
  lVar2 = *(long *)PTR____stack_chk_guard_1021e1840;
  FUN_100028f70(uVar9,uVar6,&local_c8);
  if (*(int *)(local_c8 + 0x10) != -1) {
    if (*(int *)(local_c8 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_c8 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_b9 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_b9) goto LAB_100028d49;
    }
    QHashData::free_helper(local_c8);
  }
LAB_100028d49:
  puVar4 = PTR__objc_release_1021e1c70;
  (*(code *)PTR__objc_release_1021e1c70)(uVar8);
  (*(code *)puVar4)(uVar7);
  if (lVar2 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

