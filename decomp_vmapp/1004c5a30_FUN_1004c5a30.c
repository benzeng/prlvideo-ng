
undefined1 FUN_1004c5a30(undefined8 param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  ulong uVar7;
  long lVar8;
  QArrayData *local_140;
  undefined8 local_138;
  long lStack_130;
  long *local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  string local_f0;
  undefined1 local_ef [15];
  undefined1 *local_e0;
  string local_d8;
  undefined1 local_d7 [15];
  undefined1 *local_c8;
  undefined1 local_c0 [7];
  undefined1 local_b9;
  undefined1 local_b8 [128];
  long local_38;
  
  lVar8 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar8;
  if (DAT_1011bc008 == 0) {
    FUN_1008ec270(&local_d8,
                  "L1N5c3RlbS9MaWJyYXJ5L1ByaXZhdGVGcmFtZXdvcmtzL0Nsb3VkRG9jcy5mcmFtZXdvcmsvQ2xvdWREb2Nz"
                 );
    if (((byte)local_d8 & 1) == 0) {
      local_c8 = local_d7;
    }
    lVar2 = _dlopen(local_c8,2);
    std::string::~string(&local_d8);
    FUN_1008ec270(&local_f0,"QlJDb250YWluZXI=");
    if (((byte)local_f0 & 1) == 0) {
      local_e0 = local_ef;
    }
    DAT_1011bc010 = _objc_getClass(local_e0);
    std::string::~string(&local_f0);
    cVar1 = _OSAtomicCompareAndSwap32(0,1,&DAT_1011bc008);
    if ((lVar2 != 0) && (cVar1 != '\x01' || DAT_1011bc010 == 0)) {
      _dlclose(lVar2);
    }
  }
  lVar2 = DAT_1011bc010;
  if (DAT_1011bc010 == 0) {
    uVar6 = 0;
  }
  else {
    uVar3 = (*(code *)PTR__objc_msgSend_100ba25e8)
                      (PTR__OBJC_CLASS___NSAutoreleasePool_100bedb20,PTR_s_alloc_100bed228);
    uVar3 = (*(code *)PTR__objc_msgSend_100ba25e8)(uVar3,PTR_s_init_100bed248);
    lVar2 = (*(code *)PTR__objc_msgSend_100ba25e8)(lVar2,PTR_s_documentContainers_100bed7f0);
    if (lVar2 == 0) {
      uVar6 = 0;
    }
    else {
      local_108 = 0;
      uStack_100 = 0;
      local_118 = 0;
      uStack_110 = 0;
      local_128 = (long *)0x0;
      uStack_120 = 0;
      local_138 = 0;
      lStack_130 = 0;
      uVar4 = (*(code *)PTR__objc_msgSend_100ba25e8)
                        (lVar2,PTR_s_countByEnumeratingWithState_obje_100bed4b8,&local_138,local_b8,
                         0x10);
      if (uVar4 == 0) {
        uVar6 = 1;
      }
      else {
        lVar8 = *local_128;
        do {
          uVar7 = 0;
          do {
            if (*local_128 != lVar8) {
              _objc_enumerationMutation(lVar2);
            }
            uVar5 = *(undefined8 *)(lStack_130 + uVar7 * 8);
            cVar1 = (*(code *)PTR__objc_msgSend_100ba25e8)
                              (uVar5,PTR_s_respondsToSelector__100bed958,
                               PTR_s_isInInitialState_100bed7f8);
            if (((cVar1 == '\0') ||
                (cVar1 = (*(code *)PTR__objc_msgSend_100ba25e8)
                                   (uVar5,PTR_s_isInInitialState_100bed7f8), cVar1 == '\0')) &&
               (cVar1 = (*(code *)PTR__objc_msgSend_100ba25e8)
                                  (uVar5,PTR_s_isDocumentScopePublic_100bed800), cVar1 != '\0')) {
              cVar1 = (*(code *)PTR__objc_msgSend_100ba25e8)
                                (uVar5,PTR_s_respondsToSelector__100bed958,
                                 PTR_s__mangledID_100bed808);
              if (cVar1 == '\0') {
                uVar5 = (*(code *)PTR__objc_msgSend_100ba25e8)(uVar5,PTR_s_mangledID_100bed810);
              }
              else {
                uVar5 = (*(code *)PTR__objc_msgSend_100ba25e8)(uVar5,PTR_s__mangledID_100bed808);
              }
              if (PTR__OBJC_CLASS___NSString_100bedb00 == (undefined *)0x0) {
                local_140 = (QArrayData *)0x0;
              }
              else {
                _objc_msgSend_stret((undefined *)&local_140,(ID)PTR__OBJC_CLASS___NSString_100bedb00
                                    ,PTR_s_QStringWithString__100bed818,uVar5);
              }
              FUN_100022e50(param_1,&local_140,local_c0);
              if (*(int *)local_140 != -1) {
                if (*(int *)local_140 != 0) {
                  LOCK();
                  *(int *)local_140 = *(int *)local_140 + -1;
                  local_b9 = *(int *)local_140 != 0;
                  UNLOCK();
                  if ((bool)local_b9) goto LAB_1004c5d10;
                }
                QArrayData::deallocate(local_140,2,8);
              }
            }
LAB_1004c5d10:
            uVar7 = uVar7 + 1;
          } while (uVar7 < uVar4);
          uVar4 = (*(code *)PTR__objc_msgSend_100ba25e8)
                            (lVar2,PTR_s_countByEnumeratingWithState_obje_100bed4b8,&local_138,
                             local_b8,0x10);
        } while (uVar4 != 0);
        lVar8 = *(long *)PTR____stack_chk_guard_100ba2320;
        uVar6 = 1;
      }
    }
    (*(code *)PTR__objc_msgSend_100ba25e8)(uVar3,PTR_s_drain_100bed2a8);
  }
  if (lVar8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar6;
}

