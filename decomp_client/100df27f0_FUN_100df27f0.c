
undefined8 * FUN_100df27f0(undefined8 *param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  undefined *puVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  QArrayData *local_128;
  QArrayData *local_120;
  undefined8 local_118;
  long lStack_110;
  long *local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_b9;
  undefined1 local_b8 [128];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  *param_1 = PTR_shared_null_1021e15e8;
  uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSAutoreleasePool_10226a970,PTR_s_alloc_102268b58);
  uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar5,PTR_s_init_102268ca8);
  puVar2 = PTR__OBJC_CLASS___NSURL_10226a8d0;
  local_c8 = 0;
  local_d0 = 0;
  uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSString_10226a7c8,PTR_s_stringWithQString__102268d00,param_2
                    );
  uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)(puVar2,PTR_s_fileURLWithPath__1022699c8,uVar5);
  cVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (uVar5,PTR_s_getResourceValue_forKey_error__10226a698,&local_d0,
                     &cf_NSURLTagNamesKey,&local_c8);
  uVar5 = local_d0;
  if (cVar3 == '\0') {
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = 0;
    }
    QString::toUtf8();
    lVar1 = *(long *)(local_128 + 0x10);
    uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(local_c8,PTR_s_code_10226a6a0);
    uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)(local_c8,PTR_s_localizedDescription_10226a6a8);
    uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar5,PTR_s_UTF8String_1022699e8);
    FUN_100df99c0("","FinderTagsHelper",0,"Can\'t get tags for [%s], error %i: %s",local_128 + lVar1
                  ,uVar4,uVar5);
    if (*(int *)local_128 != -1) {
      if (*(int *)local_128 != 0) {
        LOCK();
        *(int *)local_128 = *(int *)local_128 + -1;
        local_b9 = *(int *)local_128 != 0;
        UNLOCK();
        if ((bool)local_b9) goto LAB_100df2ae0;
      }
      QArrayData::deallocate(local_128,1,8);
    }
  }
  else {
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = 1;
    }
    local_e8 = 0;
    uStack_e0 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_108 = (long *)0x0;
    uStack_100 = 0;
    local_118 = 0;
    lStack_110 = 0;
    uVar7 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (local_d0,PTR_s_countByEnumeratingWithState_obje_102269048,&local_118,local_b8
                       ,0x10);
    if (uVar7 != 0) {
      lVar1 = *local_108;
      do {
        uVar8 = 0;
        do {
          if (*local_108 != lVar1) {
            _objc_enumerationMutation(uVar5);
          }
          if (PTR__OBJC_CLASS___NSString_10226a7c8 == (undefined *)0x0) {
            local_120 = (QArrayData *)0x0;
          }
          else {
            _objc_msgSend_stret((undefined *)&local_120,(ID)PTR__OBJC_CLASS___NSString_10226a7c8,
                                PTR_s_QStringWithString__1022696d0,
                                *(undefined8 *)(lStack_110 + uVar8 * 8));
          }
          FUN_1000341d0(param_1,&local_120);
          if (*(int *)local_120 != -1) {
            if (*(int *)local_120 != 0) {
              LOCK();
              *(int *)local_120 = *(int *)local_120 + -1;
              local_b9 = *(int *)local_120 != 0;
              UNLOCK();
              if ((bool)local_b9) goto LAB_100df29d2;
            }
            QArrayData::deallocate(local_120,2,8);
          }
LAB_100df29d2:
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar7);
        uVar7 = (*(code *)PTR__objc_msgSend_1021e1c68)
                          (uVar5,PTR_s_countByEnumeratingWithState_obje_102269048,&local_118,
                           local_b8,0x10);
      } while (uVar7 != 0);
    }
  }
LAB_100df2ae0:
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar6,PTR_s_release_1022699b8);
  if (*(long *)PTR____stack_chk_guard_1021e1840 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_1;
}

