
void FUN_10001be50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  QArrayData *local_178;
  QPixmap local_170 [32];
  QArrayData *local_150;
  QPixmap local_148 [32];
  QArrayData *local_128;
  QPixmap local_120 [32];
  QArrayData *local_100;
  QPixmap local_f8 [32];
  QArrayData *local_d8;
  QPixmap local_d0 [32];
  QArrayData *local_b0;
  QPixmap local_a8 [32];
  QArrayData *local_88;
  QPixmap local_80 [32];
  QArrayData *local_60;
  QPixmap local_58 [39];
  undefined1 local_31;
  
  uVar3 = (*(code *)PTR__objc_retain_1021e1c78)(param_3);
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_coherenceButton_102268d20);
  lVar5 = _objc_retainAutoreleasedReturnValue(uVar4);
  if (lVar5 != 0) goto LAB_10001c733;
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSMutableDictionary_10226a878,PTR_s_new_102269070);
  puVar1 = PTR__OBJC_CLASS___NSImage_10226a7c0;
  local_60 = (QArrayData *)
             QString::fromAscii_helper(":/images/yosemite_titlebar_button_coherence.png",0x2f);
  QPixmap::QPixmap(local_58,&local_60,0,0);
  uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)(puVar1,PTR_s_imageWithQPixmap__1022691f8,local_58);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  uVar7 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSNumber_10226a848,PTR_s_numberWithUnsignedInt__102269200,0);
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_setObject_forKey__102269208,uVar6,uVar7);
  puVar1 = PTR__objc_release_1021e1c70;
  (*(code *)PTR__objc_release_1021e1c70)(uVar7);
  (*(code *)puVar1)(uVar6);
  QPixmap::~QPixmap(local_58);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10001bf99;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10001bf99:
  puVar2 = PTR__OBJC_CLASS___NSImage_10226a7c0;
  local_88 = (QArrayData *)
             QString::fromAscii_helper(":/images/yosemite_titlebar_button_graphite.png",0x2e);
  QPixmap::QPixmap(local_80,&local_88,0,0);
  uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)(puVar2,PTR_s_imageWithQPixmap__1022691f8,local_80);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  uVar7 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSNumber_10226a848,PTR_s_numberWithUnsignedInt__102269200,5);
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_setObject_forKey__102269208,uVar6,uVar7);
  (*(code *)puVar1)(uVar7);
  (*(code *)puVar1)(uVar6);
  QPixmap::~QPixmap(local_80);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10001c06e;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_10001c06e:
  puVar2 = PTR__OBJC_CLASS___NSImage_10226a7c0;
  local_b0 = (QArrayData *)
             QString::fromAscii_helper(":/images/yosemite_titlebar_button_inactive.png",0x2e);
  QPixmap::QPixmap(local_a8,&local_b0,0,0);
  uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)(puVar2,PTR_s_imageWithQPixmap__1022691f8,local_a8);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  uVar7 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSNumber_10226a848,PTR_s_numberWithUnsignedInt__102269200,1);
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_setObject_forKey__102269208,uVar6,uVar7);
  (*(code *)puVar1)(uVar7);
  (*(code *)puVar1)(uVar6);
  QPixmap::~QPixmap(local_a8);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_31 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10001c158;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_10001c158:
  puVar2 = PTR__OBJC_CLASS___NSImage_10226a7c0;
  local_d8 = (QArrayData *)
             QString::fromAscii_helper(":/images/yosemite_titlebar_button_disabled.png",0x2e);
  QPixmap::QPixmap(local_d0,&local_d8,0,0);
  uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)(puVar2,PTR_s_imageWithQPixmap__1022691f8,local_d0);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  uVar7 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSNumber_10226a848,PTR_s_numberWithUnsignedInt__102269200,2);
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_setObject_forKey__102269208,uVar6,uVar7);
  (*(code *)puVar1)(uVar7);
  (*(code *)puVar1)(uVar6);
  QPixmap::~QPixmap(local_d0);
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_31 = *(int *)local_d8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10001c242;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_10001c242:
  puVar2 = PTR__OBJC_CLASS___NSImage_10226a7c0;
  local_100 = (QArrayData *)
              QString::fromAscii_helper
                        (":/images/yosemite_titlebar_button_coherence_hovered.png",0x37);
  QPixmap::QPixmap(local_f8,&local_100,0,0);
  uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)(puVar2,PTR_s_imageWithQPixmap__1022691f8,local_f8);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  uVar7 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSNumber_10226a848,PTR_s_numberWithUnsignedInt__102269200,3);
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_setObject_forKey__102269208,uVar6,uVar7);
  (*(code *)puVar1)(uVar7);
  (*(code *)puVar1)(uVar6);
  QPixmap::~QPixmap(local_f8);
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_31 = *(int *)local_100 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10001c32c;
    }
    QArrayData::deallocate(local_100,2,8);
  }
LAB_10001c32c:
  puVar2 = PTR__OBJC_CLASS___NSImage_10226a7c0;
  local_128 = (QArrayData *)
              QString::fromAscii_helper
                        (":/images/yosemite_titlebar_button_coherence_hovered_graphite.png",0x40);
  QPixmap::QPixmap(local_120,&local_128,0,0);
  uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)(puVar2,PTR_s_imageWithQPixmap__1022691f8,local_120)
  ;
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  uVar7 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSNumber_10226a848,PTR_s_numberWithUnsignedInt__102269200,6);
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_setObject_forKey__102269208,uVar6,uVar7);
  (*(code *)puVar1)(uVar7);
  (*(code *)puVar1)(uVar6);
  QPixmap::~QPixmap(local_120);
  if (*(int *)local_128 != -1) {
    if (*(int *)local_128 != 0) {
      LOCK();
      *(int *)local_128 = *(int *)local_128 + -1;
      local_31 = *(int *)local_128 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10001c416;
    }
    QArrayData::deallocate(local_128,2,8);
  }
LAB_10001c416:
  puVar2 = PTR__OBJC_CLASS___NSImage_10226a7c0;
  local_150 = (QArrayData *)
              QString::fromAscii_helper
                        (":/images/yosemite_titlebar_button_coherence_pressed.png",0x37);
  QPixmap::QPixmap(local_148,&local_150,0,0);
  uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)(puVar2,PTR_s_imageWithQPixmap__1022691f8,local_148)
  ;
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  uVar7 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSNumber_10226a848,PTR_s_numberWithUnsignedInt__102269200,4);
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_setObject_forKey__102269208,uVar6,uVar7);
  (*(code *)puVar1)(uVar7);
  (*(code *)puVar1)(uVar6);
  QPixmap::~QPixmap(local_148);
  if (*(int *)local_150 != -1) {
    if (*(int *)local_150 != 0) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + -1;
      local_31 = *(int *)local_150 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10001c500;
    }
    QArrayData::deallocate(local_150,2,8);
  }
LAB_10001c500:
  puVar2 = PTR__OBJC_CLASS___NSImage_10226a7c0;
  local_178 = (QArrayData *)
              QString::fromAscii_helper
                        (":/images/yosemite_titlebar_button_coherence_pressed_graphite.png",0x40);
  QPixmap::QPixmap(local_170,&local_178,0,0);
  uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)(puVar2,PTR_s_imageWithQPixmap__1022691f8,local_170)
  ;
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  uVar7 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSNumber_10226a848,PTR_s_numberWithUnsignedInt__102269200,7);
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_setObject_forKey__102269208,uVar6,uVar7);
  (*(code *)puVar1)(uVar7);
  (*(code *)puVar1)(uVar6);
  QPixmap::~QPixmap(local_170);
  if (*(int *)local_178 != -1) {
    if (*(int *)local_178 != 0) {
      LOCK();
      *(int *)local_178 = *(int *)local_178 + -1;
      local_31 = *(int *)local_178 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10001c5ea;
    }
    QArrayData::deallocate(local_178,2,8);
  }
LAB_10001c5ea:
  uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)(PTR_TitleBarButton_10226a880,PTR_s_alloc_102268b58)
  ;
  lVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (uVar6,PTR_s_initWithImageSet_position__102269210,uVar4,3);
  (*(code *)PTR__objc_release_1021e1c70)(0);
  (*(code *)PTR__objc_msgSend_1021e1c68)(lVar5,PTR_s_setTarget__102268cd8,param_1);
  (*(code *)PTR__objc_msgSend_1021e1c68)
            (lVar5,PTR_s_setAction__102268ce8,PTR_s_onCoherenceButtonClicked__102269218);
  (*(code *)PTR__objc_msgSend_1021e1c68)
            (param_1,PTR_s_setDynamicProperty_forKey__102268b38,lVar5,&cf_coherenceButton);
  uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar3,PTR_s_copy_102269220);
  (*(code *)PTR__objc_msgSend_1021e1c68)
            (param_1,PTR_s_setDynamicProperty_forKey__102268b38,uVar6,&cf_coherenceButtonHandler);
  (*(code *)PTR__objc_release_1021e1c70)(uVar6);
  uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_standardWindowButton__102269228,0);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  uVar7 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar6,PTR_s_superview_102268b88);
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar7,PTR_s_addSubview__102268d70,lVar5);
  (*(code *)puVar1)(uVar7);
  (*(code *)puVar1)(uVar6);
  (*(code *)puVar1)(uVar4);
LAB_10001c733:
  (*(code *)PTR__objc_release_1021e1c70)(uVar3);
  _objc_autoreleaseReturnValue(lVar5);
  return;
}

