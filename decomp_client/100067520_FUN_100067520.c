
void FUN_100067520(long param_1)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ID self;
  undefined8 uVar5;
  ID self_00;
  undefined8 uVar6;
  QString *pQVar7;
  QWidget *pQVar8;
  QArrayData *local_188;
  QArrayData *local_180;
  QArrayData *local_178;
  QArrayData *local_170;
  QArrayData *local_168;
  QArrayData *local_160;
  QArrayData *local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 *local_148;
  char *local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 *local_b0;
  char *local_a8;
  QArrayData *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  
  if (1 < DAT_10230ffd0) {
    FUN_100df99c0("","prl_client_app",2,"Show GUI_QUESTION_ENABLE_ACCESSIBILITY_MODE question");
  }
  cVar2 = MessageUtils::isMessageHidden(0x3c4b);
  if (cVar2 != '\0') {
    local_14c = MessageUtils::getDefaultButtonForHiddenMessage(0x3c4b);
    FUN_100df99c0("","prl_client_app",0,"The message is hidden. Answer %i",local_14c);
    local_150 = 0x3c4b;
    local_c8 = 0;
    uStack_c0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_118 = 0;
    uStack_110 = 0;
    local_128 = 0;
    uStack_120 = 0;
    local_138 = 0;
    uStack_130 = 0;
    local_148 = &local_14c;
    local_140 = "Messaging::ButtonID";
    local_b0 = &local_150;
    local_a8 = "PRL_RESULT";
    QMetaObject::invokeMethod(param_1,"onQuestionCheckForAccessibilityModeClosed",2,0,0);
    return;
  }
  MessageUtils::getMessageString((int)&local_160,true);
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_10018d830(&local_168,uVar3);
  QString::arg(&local_158,&local_160,&local_168,0,0x20);
  if (*(int *)local_168 != -1) {
    if (*(int *)local_168 != 0) {
      LOCK();
      *(int *)local_168 = *(int *)local_168 + -1;
      UNLOCK();
      local_b0 = (undefined4 *)CONCAT71(local_b0._1_7_,*(int *)local_168 != 0);
      if (*(int *)local_168 != 0) goto LAB_1000677df;
    }
    QArrayData::deallocate(local_168,2,8);
  }
LAB_1000677df:
  if (*(int *)local_160 != -1) {
    if (*(int *)local_160 != 0) {
      LOCK();
      *(int *)local_160 = *(int *)local_160 + -1;
      UNLOCK();
      local_b0 = (undefined4 *)CONCAT71(local_b0._1_7_,*(int *)local_160 != 0);
      if (*(int *)local_160 != 0) goto LAB_10006781b;
    }
    QArrayData::deallocate(local_160,2,8);
  }
LAB_10006781b:
  MessageUtils::getMessageString((int)&local_178,true);
  local_188 = (QArrayData *)QString::fromAscii_helper("prlhelp.%1",10);
  QString::arg(&local_180,&local_188,0x88,0,10,0x20);
  QString::arg(&local_170,&local_178,&local_180,0,0x20);
  if (*(int *)local_180 != -1) {
    if (*(int *)local_180 != 0) {
      LOCK();
      *(int *)local_180 = *(int *)local_180 + -1;
      UNLOCK();
      local_b0 = (undefined4 *)CONCAT71(local_b0._1_7_,*(int *)local_180 != 0);
      if (*(int *)local_180 != 0) goto LAB_1000678ca;
    }
    QArrayData::deallocate(local_180,2,8);
  }
LAB_1000678ca:
  if (*(int *)local_188 != -1) {
    if (*(int *)local_188 != 0) {
      LOCK();
      *(int *)local_188 = *(int *)local_188 + -1;
      UNLOCK();
      local_b0 = (undefined4 *)CONCAT71(local_b0._1_7_,*(int *)local_188 != 0);
      if (*(int *)local_188 != 0) goto LAB_100067906;
    }
    QArrayData::deallocate(local_188,2,8);
  }
LAB_100067906:
  if (*(int *)local_178 != -1) {
    if (*(int *)local_178 != 0) {
      LOCK();
      *(int *)local_178 = *(int *)local_178 + -1;
      UNLOCK();
      local_b0 = (undefined4 *)CONCAT71(local_b0._1_7_,*(int *)local_178 != 0);
      if (*(int *)local_178 != 0) goto LAB_100067942;
    }
    QArrayData::deallocate(local_178,2,8);
  }
LAB_100067942:
  QString::toUtf8();
  QByteArray::QByteArray((QByteArray *)&local_38,(char *)(local_40 + *(long *)(local_40 + 0x10)),-1)
  ;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      local_b0 = (undefined4 *)CONCAT71(local_b0._1_7_,*(int *)local_40 != 0);
      if (*(int *)local_40 != 0) goto LAB_1000679a5;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_1000679a5:
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSData_10226a968,PTR_s_dataWithBytes_length__102269a90,
                     local_38 + *(long *)(local_38 + 0x10),(long)*(int *)(local_38 + 4));
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSAttributedString_10226a9b8,PTR_s_alloc_102268b58);
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (uVar4,PTR_s_initWithHTML_documentAttributes__102269be8,uVar3,0);
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar3,PTR_s_autorelease_102269a10);
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSAlert_10226a9c0,PTR_s_alloc_102268b58);
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_init_102268ca8);
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_autorelease_102269a10);
  self = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s__informationField_102269bf0);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_setShowsHelp__102269bf8,0);
  uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSString_10226a7c8,PTR_s_stringWithQString__102268d00,
                     &local_158);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_setMessageText__102269c00,uVar5);
  (*(code *)PTR__objc_msgSend_1021e1c68)(self,PTR_s_setAttributedStringValue__102269c08,uVar3);
  puVar1 = PTR__OBJC_CLASS___NSString_10226a7c8;
  QMetaObject::tr((char *)&local_48,PTR_staticMetaObject_1021e1520,(int)PTR_s_Yes_10226ddc8);
  uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (puVar1,PTR_s_stringWithQString__102268d00,&local_48);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_addButtonWithTitle__102269c10,uVar5);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      local_b0 = (undefined4 *)CONCAT71(local_b0._1_7_,*(int *)local_48 != 0);
      if (*(int *)local_48 != 0) goto LAB_100067b32;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100067b32:
  puVar1 = PTR__OBJC_CLASS___NSString_10226a7c8;
  QMetaObject::tr((char *)&local_50,PTR_staticMetaObject_1021e1520,(int)PTR_s_No_10226ddd0);
  uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (puVar1,PTR_s_stringWithQString__102268d00,&local_50);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_addButtonWithTitle__102269c10,uVar5);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      local_b0 = (undefined4 *)CONCAT71(local_b0._1_7_,*(int *)local_50 != 0);
      if (*(int *)local_50 != 0) goto LAB_100067bb8;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100067bb8:
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_setShowsSuppressionButton__102269c18,1);
  self_00 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_window_102268c08);
  if (self_00 == 0) {
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_78,self_00,PTR_s_frame_102268b50);
  }
  local_68 = 0x407e000000000000;
  (*(code *)PTR__objc_msgSend_1021e1c68)(self_00,PTR_s_setFrame_display__102268c00,0);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_layout_102269c20);
  uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSTextView_10226a9c8,PTR_s_alloc_102268b58);
  if (self == 0) {
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_98,self,PTR_s_frame_102268b50);
  }
  uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar5,PTR_s_initWithFrame__102268f78);
  uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar5,PTR_s_autorelease_102269a10);
  (*(code *)PTR__objc_msgSend_1021e1c68)
            (DAT_100e12878,0,uVar5,PTR_s_setTextContainerInset__102269c28);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar5,PTR_s_insertText__102269c30,uVar3);
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(PTR_CAlertDelegate_10226a9d0,PTR_s_alloc_102268b58)
  ;
  uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar3,PTR_s_initWithTask__102269c38,param_1);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar5,PTR_s_setDelegate__102268f50,uVar6);
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(self,PTR_s_font_1022691d8);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar5,PTR_s_setFont__1022690a0,uVar3);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar5,PTR_s_setEditable__1022690d0,0);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar5,PTR_s_setDrawsBackground__1022690d8,0);
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(self_00,PTR_s_contentView_102268b80);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar3,PTR_s_addSubview__102268d70,uVar5);
  (*(code *)PTR__objc_msgSend_1021e1c68)(self,PTR_s_setHidden__102268e10,1);
  pQVar7 = (QString *)CSearchParentHelper::instance();
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100188480(&local_a0,uVar3);
  pQVar8 = (QWidget *)
           CSearchParentHelper::getParentForMessage(pQVar7,SUB81(&local_a0,0),(QWidget *)0x0);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      UNLOCK();
      local_b0 = (undefined4 *)CONCAT71(local_b0._1_7_,*(int *)local_a0 != 0);
      if (*(int *)local_a0 != 0) goto LAB_100067e6a;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_100067e6a:
  uVar3 = 0;
  if (pQVar8 != (QWidget *)0x0) {
    uVar3 = MacUtils::getWindowRef(pQVar8);
  }
  (*(code *)PTR__objc_msgSend_1021e1c68)
            (uVar4,PTR_s_beginSheetModalForWindow_modalDe_102269c48,uVar3,uVar6,
             PTR_s_alertDidEnd_returnCode_contextIn_102269c40,uVar5);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      local_b0 = (undefined4 *)CONCAT71(local_b0._1_7_,*(int *)local_38 != 0);
      if (*(int *)local_38 != 0) goto LAB_100067ed3;
    }
    QArrayData::deallocate(local_38,1,8);
  }
LAB_100067ed3:
  if (*(int *)local_170 != -1) {
    if (*(int *)local_170 != 0) {
      LOCK();
      *(int *)local_170 = *(int *)local_170 + -1;
      UNLOCK();
      local_b0 = (undefined4 *)CONCAT71(local_b0._1_7_,*(int *)local_170 != 0);
      if (*(int *)local_170 != 0) goto LAB_100067f0f;
    }
    QArrayData::deallocate(local_170,2,8);
  }
LAB_100067f0f:
  if (*(int *)local_158 != -1) {
    if (*(int *)local_158 != 0) {
      LOCK();
      *(int *)local_158 = *(int *)local_158 + -1;
      UNLOCK();
      local_b0 = (undefined4 *)CONCAT71(local_b0._1_7_,*(int *)local_158 != 0);
      if (*(int *)local_158 != 0) {
        return;
      }
    }
    QArrayData::deallocate(local_158,2,8);
  }
  return;
}

