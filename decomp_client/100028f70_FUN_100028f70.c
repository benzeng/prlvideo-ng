
void FUN_100028f70(long param_1,int param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  size_t sVar6;
  QString *pQVar7;
  undefined8 uVar8;
  ID self;
  long lVar9;
  QVariant local_188;
  Data_conflict local_178;
  QArrayData *local_170;
  QString local_168 [2];
  QString local_158;
  QArrayData *local_150;
  QString local_148;
  QArrayData *local_140;
  QArrayData *local_138;
  QString local_130;
  QArrayData *local_128;
  QString local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  _func_void_Node_ptr *local_f0;
  QString local_e8;
  QString local_e0;
  QString local_d8;
  QString local_d0;
  QString local_c8;
  QString local_c0;
  QString local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QString local_98;
  QArrayData *local_90;
  QString local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined1 local_31;
  
  if (PTR__OBJC_CLASS___NSString_10226a7c8 == (undefined *)0x0) {
    local_90 = (QArrayData *)0x0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_90,(ID)PTR__OBJC_CLASS___NSString_10226a7c8,
                        PTR_s_QStringWithString__1022696d0,
                        *(undefined8 *)PTR__PDFeedbackRatingKey_1021e11f0);
  }
  FUN_10002c180(&local_88,param_3,&local_90);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10002900c;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_10002900c:
  if (PTR__OBJC_CLASS___NSString_10226a7c8 == (undefined *)0x0) {
    local_a0 = (QArrayData *)0x0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_a0,(ID)PTR__OBJC_CLASS___NSString_10226a7c8,
                        PTR_s_QStringWithString__1022696d0,
                        *(undefined8 *)PTR__PDFeedbackEmailKey_1021e11e8);
  }
  FUN_10002c180(&local_98,param_3,&local_a0);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_31 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10002908e;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_10002908e:
  if (PTR__OBJC_CLASS___NSString_10226a7c8 == (undefined *)0x0) {
    local_b0 = (QArrayData *)0x0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_b0,(ID)PTR__OBJC_CLASS___NSString_10226a7c8,
                        PTR_s_QStringWithString__1022696d0,
                        *(undefined8 *)PTR__PDFeedbackTextKey_1021e11f8);
  }
  FUN_10002c180(&local_a8,param_3,&local_b0);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_31 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100029110;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_100029110:
  local_b8.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("12.2.1 (41615)",0xe);
  local_c0.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)
       QString::fromAscii_helper("Parallels Desktop Lite Feedback",0x1f);
  local_c8.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  QString::fromUtf8_helper((char *)&local_d8,0x1db540c);
  QString::append(&local_d8);
  local_d0.field0_0x0 = local_d8.field0_0x0;
  if (1 < *(int *)local_d8.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_d8.field0_0x0 = *(int *)local_d8.field0_0x0 + 1;
    local_31 = *(int *)local_d8.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_80,0x1eeaa60);
  QString::append(&local_d0);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000291ed;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1000291ed:
  QString::append(&local_c8);
  if (*(int *)local_d0.field0_0x0 != -1) {
    if (*(int *)local_d0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + -1;
      local_31 = *(int *)local_d0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100029236;
    }
    QArrayData::deallocate((QArrayData *)local_d0.field0_0x0,2,8);
  }
LAB_100029236:
  if (*(int *)local_d8.field0_0x0 != -1) {
    if (*(int *)local_d8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_d8.field0_0x0 = *(int *)local_d8.field0_0x0 + -1;
      local_31 = *(int *)local_d8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10002926c;
    }
    QArrayData::deallocate((QArrayData *)local_d8.field0_0x0,2,8);
  }
LAB_10002926c:
  QString::fromUtf8_helper((char *)&local_e8,0x1db5416);
  QString::append(&local_e8);
  local_e0.field0_0x0 = local_e8.field0_0x0;
  if (1 < *(int *)local_e8.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_e8.field0_0x0 = *(int *)local_e8.field0_0x0 + 1;
    local_31 = *(int *)local_e8.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_78,0x1eeaa60);
  QString::append(&local_e0);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10002930b;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_10002930b:
  QString::append(&local_c8);
  if (*(int *)local_e0.field0_0x0 != -1) {
    if (*(int *)local_e0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_e0.field0_0x0 = *(int *)local_e0.field0_0x0 + -1;
      local_31 = *(int *)local_e0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100029354;
    }
    QArrayData::deallocate((QArrayData *)local_e0.field0_0x0,2,8);
  }
LAB_100029354:
  if (*(int *)local_e8.field0_0x0 != -1) {
    if (*(int *)local_e8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_e8.field0_0x0 = *(int *)local_e8.field0_0x0 + -1;
      local_31 = *(int *)local_e8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10002938a;
    }
    QArrayData::deallocate((QArrayData *)local_e8.field0_0x0,2,8);
  }
LAB_10002938a:
  puVar2 = PTR_s_email_1022750a8;
  local_f0 = (_func_void_Node_ptr *)PTR_shared_null_1021e15d0;
  iVar5 = -1;
  if (PTR_s_email_1022750a8 != (undefined *)0x0) {
    sVar6 = _strlen(PTR_s_email_1022750a8);
    iVar5 = (int)sVar6;
  }
  local_f8 = (QArrayData *)QString::fromAscii_helper(puVar2,iVar5);
  pQVar7 = (QString *)FUN_10002c250(&local_f0,&local_f8);
  QString::operator=(pQVar7,&local_98);
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      local_31 = *(int *)local_f8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10002941e;
    }
    QArrayData::deallocate(local_f8,2,8);
  }
LAB_10002941e:
  puVar2 = PTR_s_subject_1022750b0;
  iVar5 = -1;
  if (PTR_s_subject_1022750b0 != (undefined *)0x0) {
    sVar6 = _strlen(PTR_s_subject_1022750b0);
    iVar5 = (int)sVar6;
  }
  local_100 = (QArrayData *)QString::fromAscii_helper(puVar2,iVar5);
  pQVar7 = (QString *)FUN_10002c250(&local_f0,&local_100);
  QString::operator=(pQVar7,&local_c0);
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_31 = *(int *)local_100 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000294a4;
    }
    QArrayData::deallocate(local_100,2,8);
  }
LAB_1000294a4:
  puVar2 = PTR_s_content_1022750b8;
  iVar5 = -1;
  if (PTR_s_content_1022750b8 != (undefined *)0x0) {
    sVar6 = _strlen(PTR_s_content_1022750b8);
    iVar5 = (int)sVar6;
  }
  local_108 = (QArrayData *)QString::fromAscii_helper(puVar2,iVar5);
  pQVar7 = (QString *)FUN_10002c250(&local_f0,&local_108);
  QString::operator=(pQVar7,&local_c8);
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_31 = *(int *)local_108 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10002952a;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_10002952a:
  puVar2 = PTR_s_Build_1022750c0;
  iVar5 = -1;
  if (PTR_s_Build_1022750c0 != (undefined *)0x0) {
    sVar6 = _strlen(PTR_s_Build_1022750c0);
    iVar5 = (int)sVar6;
  }
  local_110 = (QArrayData *)QString::fromAscii_helper(puVar2,iVar5);
  pQVar7 = (QString *)FUN_10002c250(&local_f0,&local_110);
  QString::operator=(pQVar7,&local_b8);
  if (*(int *)local_110 != -1) {
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      local_31 = *(int *)local_110 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000295b0;
    }
    QArrayData::deallocate(local_110,2,8);
  }
LAB_1000295b0:
  puVar2 = PTR_s_HostOS_1022750c8;
  iVar5 = -1;
  if (PTR_s_HostOS_1022750c8 != (undefined *)0x0) {
    sVar6 = _strlen(PTR_s_HostOS_1022750c8);
    iVar5 = (int)sVar6;
  }
  local_118 = (QArrayData *)QString::fromAscii_helper(puVar2,iVar5);
  pQVar7 = (QString *)FUN_10002c250(&local_f0,&local_118);
  uVar8 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSProcessInfo_10226a8e0,PTR_s_processInfo_1022697f8);
  self = _objc_retainAutoreleasedReturnValue(uVar8);
  if (self == 0) {
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_58,self,PTR_s_operatingSystemVersion_102269800);
  }
  (*(code *)PTR__objc_release_1021e1c70)(self);
  local_70 = (QArrayData *)QString::fromAscii_helper("%1.%2.%3",8);
  QString::arg(&local_68,&local_70,local_58,0,10,0x20);
  QString::arg(&local_60,&local_68,uStack_50,0,10,0x20);
  QString::arg(&local_120,&local_60,local_48,0,10,0x20);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000296fb;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1000296fb:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10002972b;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10002972b:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10002975b;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10002975b:
  QString::operator=(pQVar7,&local_120);
  if (*(int *)local_120.field0_0x0 != -1) {
    if (*(int *)local_120.field0_0x0 != 0) {
      LOCK();
      *(int *)local_120.field0_0x0 = *(int *)local_120.field0_0x0 + -1;
      local_31 = *(int *)local_120.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000297a0;
    }
    QArrayData::deallocate((QArrayData *)local_120.field0_0x0,2,8);
  }
LAB_1000297a0:
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_31 = *(int *)local_118 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000297d6;
    }
    QArrayData::deallocate(local_118,2,8);
  }
LAB_1000297d6:
  puVar2 = PTR_s_GuestOS_1022750d0;
  iVar5 = -1;
  if (PTR_s_GuestOS_1022750d0 != (undefined *)0x0) {
    sVar6 = _strlen(PTR_s_GuestOS_1022750d0);
    iVar5 = (int)sVar6;
  }
  local_128 = (QArrayData *)QString::fromAscii_helper(puVar2,iVar5);
  pQVar7 = (QString *)FUN_10002c250(&local_f0,&local_128);
  uVar8 = FUN_100152280();
  lVar9 = FUN_1001554a0(uVar8);
  iVar5 = 0;
  if (lVar9 != 0) {
    iVar3 = FUN_10015d3a0(lVar9);
    iVar5 = 0;
    if (0 < iVar3) {
      iVar3 = 0;
      do {
        uVar8 = FUN_10015d330(lVar9,iVar3);
        iVar4 = FUN_10018a9d0(uVar8);
        if ((iVar4 == 0x30000004) || (iVar4 = FUN_10018a9d0(uVar8), iVar4 == 0x30000005)) {
          iVar5 = FUN_10018f890(uVar8);
          break;
        }
        iVar4 = FUN_10015d3a0(lVar9);
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar4);
    }
  }
  QString::number((uint)&local_130,iVar5);
  QString::operator=(pQVar7,&local_130);
  if (*(int *)local_130.field0_0x0 != -1) {
    if (*(int *)local_130.field0_0x0 != 0) {
      LOCK();
      *(int *)local_130.field0_0x0 = *(int *)local_130.field0_0x0 + -1;
      local_31 = *(int *)local_130.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100029902;
    }
    QArrayData::deallocate((QArrayData *)local_130.field0_0x0,2,8);
  }
LAB_100029902:
  if (*(int *)local_128 != -1) {
    if (*(int *)local_128 != 0) {
      LOCK();
      *(int *)local_128 = *(int *)local_128 + -1;
      local_31 = *(int *)local_128 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100029946;
    }
    QArrayData::deallocate(local_128,2,8);
  }
LAB_100029946:
  puVar2 = PTR_s_Rating_1022750d8;
  iVar5 = -1;
  if (PTR_s_Rating_1022750d8 != (undefined *)0x0) {
    sVar6 = _strlen(PTR_s_Rating_1022750d8);
    iVar5 = (int)sVar6;
  }
  local_138 = (QArrayData *)QString::fromAscii_helper(puVar2,iVar5);
  pQVar7 = (QString *)FUN_10002c250(&local_f0,&local_138);
  QString::operator=(pQVar7,&local_88);
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_31 = *(int *)local_138 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000299c9;
    }
    QArrayData::deallocate(local_138,2,8);
  }
LAB_1000299c9:
  puVar2 = PTR_s_ScreenID_1022750e0;
  iVar5 = -1;
  if (PTR_s_ScreenID_1022750e0 != (undefined *)0x0) {
    sVar6 = _strlen(PTR_s_ScreenID_1022750e0);
    iVar5 = (int)sVar6;
  }
  local_140 = (QArrayData *)QString::fromAscii_helper(puVar2,iVar5);
  pQVar7 = (QString *)FUN_10002c250(&local_f0,&local_140);
  QString::number((int)&local_148,param_2);
  QString::operator=(pQVar7,&local_148);
  if (*(int *)local_148.field0_0x0 != -1) {
    if (*(int *)local_148.field0_0x0 != 0) {
      LOCK();
      *(int *)local_148.field0_0x0 = *(int *)local_148.field0_0x0 + -1;
      local_31 = *(int *)local_148.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100029a66;
    }
    QArrayData::deallocate((QArrayData *)local_148.field0_0x0,2,8);
  }
LAB_100029a66:
  if (*(int *)local_140 != -1) {
    if (*(int *)local_140 != 0) {
      LOCK();
      *(int *)local_140 = *(int *)local_140 + -1;
      local_31 = *(int *)local_140 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100029a9c;
    }
    QArrayData::deallocate(local_140,2,8);
  }
LAB_100029a9c:
  uVar8 = FUN_100152280();
  lVar9 = FUN_1001554a0(uVar8);
  puVar2 = PTR_s_PDLType_1022750e8;
  if (lVar9 != 0) {
    iVar5 = -1;
    if (PTR_s_PDLType_1022750e8 != (undefined *)0x0) {
      sVar6 = _strlen(PTR_s_PDLType_1022750e8);
      iVar5 = (int)sVar6;
    }
    local_150 = (QArrayData *)QString::fromAscii_helper(puVar2,iVar5);
    pQVar7 = (QString *)FUN_10002c250(&local_f0,&local_150);
    uVar8 = FUN_10016f500(lVar9);
    iVar5 = FUN_1006271d0(uVar8);
    QString::number((int)&local_158,iVar5);
    QString::operator=(pQVar7,&local_158);
    if (*(int *)local_158.field0_0x0 != -1) {
      if (*(int *)local_158.field0_0x0 != 0) {
        LOCK();
        *(int *)local_158.field0_0x0 = *(int *)local_158.field0_0x0 + -1;
        local_31 = *(int *)local_158.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100029b61;
      }
      QArrayData::deallocate((QArrayData *)local_158.field0_0x0,2,8);
    }
LAB_100029b61:
    if (*(int *)local_150 != -1) {
      if (*(int *)local_150 != 0) {
        LOCK();
        *(int *)local_150 = *(int *)local_150 + -1;
        local_31 = *(int *)local_150 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100029b97;
      }
      QArrayData::deallocate(local_150,2,8);
    }
  }
LAB_100029b97:
  FUN_1007daf60(*(undefined8 *)(param_1 + 0x20));
  if (*(char *)(param_1 + 0x44) == '\0') {
    *(undefined1 *)(param_1 + 0x44) = 1;
    QSettings::QSettings((QSettings *)local_168,(QObject *)0x0);
    puVar2 = PTR_s_PDLFeedback_102275060;
    iVar5 = -1;
    if (PTR_s_PDLFeedback_102275060 != (undefined *)0x0) {
      sVar6 = _strlen(PTR_s_PDLFeedback_102275060);
      iVar5 = (int)sVar6;
    }
    local_170 = (QArrayData *)QString::fromAscii_helper(puVar2,iVar5);
    QSettings::beginGroup(local_168);
    if (*(int *)local_170 != -1) {
      if (*(int *)local_170 != 0) {
        LOCK();
        *(int *)local_170 = *(int *)local_170 + -1;
        local_31 = *(int *)local_170 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100029c3f;
      }
      QArrayData::deallocate(local_170,2,8);
    }
LAB_100029c3f:
    puVar2 = PTR_s_FeedbackWasSent_102275078;
    iVar5 = -1;
    if (PTR_s_FeedbackWasSent_102275078 != (undefined *)0x0) {
      sVar6 = _strlen(PTR_s_FeedbackWasSent_102275078);
      iVar5 = (int)sVar6;
    }
    local_178.field7 = QString::fromAscii_helper(puVar2,iVar5);
    QVariant::QVariant(&local_188,true);
    QSettings::setValue(local_168,(QVariant *)&local_178);
    QVariant::~QVariant(&local_188);
    if (*(int *)local_178.field15 != -1) {
      if (*(int *)local_178.field15 != 0) {
        LOCK();
        *(int *)local_178.field15 = *(int *)local_178.field15 + -1;
        local_31 = *(int *)local_178.field15 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100029cda;
      }
      QArrayData::deallocate((QArrayData *)local_178.field15,2,8);
    }
LAB_100029cda:
    QSettings::sync();
    QSettings::~QSettings((QSettings *)local_168);
  }
  if (*(int *)(local_f0 + 0x10) != -1) {
    if (*(int *)(local_f0 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_f0 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100029d27;
    }
    QHashData::free_helper(local_f0);
  }
LAB_100029d27:
  if (*(int *)local_c8.field0_0x0 != -1) {
    if (*(int *)local_c8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_c8.field0_0x0 = *(int *)local_c8.field0_0x0 + -1;
      local_31 = *(int *)local_c8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100029d5d;
    }
    QArrayData::deallocate((QArrayData *)local_c8.field0_0x0,2,8);
  }
LAB_100029d5d:
  if (*(int *)local_c0.field0_0x0 != -1) {
    if (*(int *)local_c0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
      local_31 = *(int *)local_c0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100029d93;
    }
    QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
  }
LAB_100029d93:
  if (*(int *)local_b8.field0_0x0 != -1) {
    if (*(int *)local_b8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
      local_31 = *(int *)local_b8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100029dc9;
    }
    QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
  }
LAB_100029dc9:
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100029dff;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_100029dff:
  if (*(int *)local_98.field0_0x0 != -1) {
    if (*(int *)local_98.field0_0x0 != 0) {
      LOCK();
      *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
      local_31 = *(int *)local_98.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100029e35;
    }
    QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
  }
LAB_100029e35:
  if (*(int *)local_88.field0_0x0 != -1) {
    if (*(int *)local_88.field0_0x0 != 0) {
      LOCK();
      *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_88.field0_0x0 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
  }
  return;
}

