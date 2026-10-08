
/* Function Stack Size: 0x10 bytes */

void CControlCenterTitleBarController::setupButtons(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QPixmap local_80 [32];
  QArrayData *local_60;
  QPixmap local_58 [39];
  undefined1 local_31;
  
  puVar1 = PTR__objc_msgSend_1021e1c68;
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSSegmentedControl_10226aa68,PTR_s_alloc_102268b58);
  uVar3 = (*(code *)puVar1)(uVar3,PTR_s_init_102268ca8);
  uVar3 = (*(code *)puVar1)(uVar3,PTR_s_autorelease_102269a10);
  (*(code *)puVar1)(param_1,PTR_s_setSegmentedControl__10226a108,uVar3);
  uVar3 = (*(code *)puVar1)(param_1,PTR_s_segmentedControl_10226a110);
  (*(code *)puVar1)(uVar3,PTR_s_setSegmentCount__10226a118,2);
  uVar3 = (*(code *)puVar1)(param_1,PTR_s_segmentedControl_10226a110);
  puVar2 = PTR__OBJC_CLASS___NSImage_10226a7c0;
  local_60 = (QArrayData *)QString::fromAscii_helper(":/regular_mode.png",0x12);
  QPixmap::QPixmap(local_58,&local_60,0,0);
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (puVar2,PTR_s_imageTemplateWithQPixmap__102268cc8,local_58);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar3,PTR_s_setImage_forSegment__10226a120,uVar4,0);
  QPixmap::~QPixmap(local_58);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10008d8b4;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10008d8b4:
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_segmentedControl_10226a110);
  puVar2 = PTR__OBJC_CLASS___NSImage_10226a7c0;
  local_88 = (QArrayData *)QString::fromAscii_helper(":/compact_mode.png",0x12);
  QPixmap::QPixmap(local_80,&local_88,0,0);
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (puVar2,PTR_s_imageTemplateWithQPixmap__102268cc8,local_80);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar3,PTR_s_setImage_forSegment__10226a120,uVar4,1);
  QPixmap::~QPixmap(local_80);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10008d959;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_10008d959:
  uVar3 = (*(code *)puVar1)(param_1,PTR_s_segmentedControl_10226a110);
  (*(code *)puVar1)(uVar3,PTR_s_setTarget__102268cd8,param_1);
  uVar3 = (*(code *)puVar1)(param_1,PTR_s_segmentedControl_10226a110);
  (*(code *)puVar1)(uVar3,PTR_s_setAction__102268ce8,PTR_s_onSegmentControlClicked_10226a128);
  uVar3 = (*(code *)puVar1)(param_1,PTR_s_segmentedControl_10226a110);
  puVar2 = PTR__OBJC_CLASS___NSString_10226a7c8;
  QMetaObject::tr((char *)&local_90,PTR_staticMetaObject_1021e1520,
                  (int)PTR_s_Show_virtual_machines_in_expande_10226fd68);
  uVar4 = (*(code *)puVar1)(puVar2,PTR_s_stringWithQString__102268d00,&local_90);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar3,PTR_s_setToolTip__102268d08,uVar4);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10008da2f;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_10008da2f:
  uVar3 = (*(code *)puVar1)(param_1,PTR_s_segmentedControl_10226a110);
  (*(code *)puVar1)(uVar3,PTR_s_setTranslatesAutoresizingMaskInt_102268cf8,0);
  uVar3 = (*(code *)puVar1)(param_1,PTR_s_segmentedControl_10226a110);
  (*(code *)puVar1)(DAT_100e139b8,param_1,PTR_s_addAdditionalView_withWidth__102268d10,uVar3);
  (*(code *)puVar1)(param_1,PTR_s_addAdditionalViewSeparator_10226a130);
  uVar3 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSButton_10226a7b8,PTR_s_alloc_102268b58);
  uVar3 = (*(code *)puVar1)(uVar3,PTR_s_init_102268ca8);
  uVar3 = (*(code *)puVar1)(uVar3,PTR_s_autorelease_102269a10);
  (*(code *)puVar1)(param_1,PTR_s_setAddButton__10226a0e8,uVar3);
  uVar3 = (*(code *)puVar1)(param_1,PTR_s_addButton_10226a138);
  (*(code *)puVar1)(uVar3,PTR_s_setBordered__102268cb8,1);
  uVar3 = (*(code *)puVar1)(param_1,PTR_s_addButton_10226a138);
  (*(code *)puVar1)(uVar3,PTR_s_setBezelStyle__102268cc0,0xb);
  uVar3 = (*(code *)puVar1)(param_1,PTR_s_addButton_10226a138);
  uVar4 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSImage_10226a7c0,PTR_s_imageNamed__102269978,
                            *(undefined8 *)PTR__NSImageNameAddTemplate_1021e10f0);
  (*(code *)puVar1)(uVar3,PTR_s_setImage__102268cd0,uVar4);
  uVar3 = (*(code *)puVar1)(param_1,PTR_s_addButton_10226a138);
  (*(code *)puVar1)(uVar3,PTR_s_setTarget__102268cd8,param_1);
  uVar3 = (*(code *)puVar1)(param_1,PTR_s_addButton_10226a138);
  (*(code *)puVar1)(uVar3,PTR_s_setAction__102268ce8,PTR_s_onAddButtonClicked_10226a140);
  uVar3 = (*(code *)puVar1)(param_1,PTR_s_addButton_10226a138);
  puVar2 = PTR__OBJC_CLASS___NSString_10226a7c8;
  QMetaObject::tr((char *)&local_98,PTR_staticMetaObject_1021e1520,
                  (int)PTR_s_Create_a_virtual_machine_10226fd60);
  uVar4 = (*(code *)puVar1)(puVar2,PTR_s_stringWithQString__102268d00,&local_98);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar3,PTR_s_setToolTip__102268d08,uVar4);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10008dc07;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_10008dc07:
  uVar3 = (*(code *)puVar1)(param_1,PTR_s_addButton_10226a138);
  (*(code *)puVar1)(uVar3,PTR_s_setTranslatesAutoresizingMaskInt_102268cf8,0);
  uVar3 = (*(code *)puVar1)(param_1,PTR_s_addButton_10226a138);
  (*(code *)puVar1)(DAT_100e11070,param_1,PTR_s_addAdditionalView_withWidth__102268d10,uVar3);
  return;
}

