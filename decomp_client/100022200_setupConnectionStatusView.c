
/* Function Stack Size: 0x10 bytes */

void PDBarButtonItem::setupConnectionStatusView(ID param_1,SEL param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  QArrayData *local_a0;
  QPixmap local_98 [32];
  QArrayData *local_78;
  QPixmap local_70 [39];
  undefined1 local_49;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  puVar2 = PTR__objc_msgSend_1021e1c68;
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR_PDDeviceStatusView_10226a8a0,PTR_s_alloc_102268b58);
  uVar4 = (*(code *)puVar2)(uVar4,PTR_s_init_102268ca8);
  (*(code *)puVar2)(param_1,PTR_s_setConnectionStatusView__102269608,uVar4);
  uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_connectionStatusView_102269610);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  puVar2 = PTR__OBJC_CLASS___NSImage_10226a7c0;
  local_78 = (QArrayData *)
             QString::fromAscii_helper(":/pixmaps/DeviceIcons/device_status_disabled.png",0x30);
  QPixmap::QPixmap(local_70,&local_78,0,0);
  uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)(puVar2,PTR_s_imageWithQPixmap__1022691f8,local_70);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar5,PTR_s_setImage__102268cd0,uVar6);
  (*(code *)PTR__objc_release_1021e1c70)(uVar6);
  QPixmap::~QPixmap(local_70);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_49 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_10002231a;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_10002231a:
  (*(code *)PTR__objc_release_1021e1c70)(uVar5);
  uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_connectionStatusView_102269610);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  puVar2 = PTR__OBJC_CLASS___NSImage_10226a7c0;
  local_a0 = (QArrayData *)
             QString::fromAscii_helper
                       (":/pixmaps/DeviceIcons/device_status_disabled_disabled.png",0x39);
  QPixmap::QPixmap(local_98,&local_a0,0,0);
  uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)(puVar2,PTR_s_imageWithQPixmap__1022691f8,local_98);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar5,PTR_s_setInactiveImage__102269558,uVar6);
  (*(code *)PTR__objc_release_1021e1c70)(uVar6);
  QPixmap::~QPixmap(local_98);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_49 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_1000223f4;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_1000223f4:
  (*(code *)PTR__objc_release_1021e1c70)(uVar5);
  uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_connectionStatusView_102269610);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar5,PTR_s_setTranslatesAutoresizingMaskInt_102268cf8,0);
  (*(code *)PTR__objc_release_1021e1c70)(uVar5);
  uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_connectionStatusView_102269610);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_addSubview__102268d70,uVar5);
  (*(code *)PTR__objc_release_1021e1c70)(uVar5);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_10226a7e0;
  uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_connectionStatusView_102269610);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_button_1022695f0);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  uVar7 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (DAT_100e11050,DAT_100e11050,puVar2,
                     PTR_s_constraintWithItem_attribute_rel_102268d78,uVar5,9,0,uVar6,9);
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
  puVar2 = PTR__objc_release_1021e1c70;
  (*(code *)PTR__objc_release_1021e1c70)(uVar6);
  (*(code *)puVar2)(uVar5);
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_10226a7e0;
  uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_connectionStatusView_102269610);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_button_1022695f0);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  uVar8 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (DAT_100e11050,DAT_100e11050,puVar3,
                     PTR_s_constraintWithItem_attribute_rel_102268d78,uVar5,10,0,uVar6,10);
  uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
  (*(code *)puVar2)(uVar6);
  (*(code *)puVar2)(uVar5);
  local_48 = uVar7;
  local_40 = uVar8;
  uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSArray_10226a818,PTR_s_arrayWithObjects_count__102268f00,
                     &local_48,2);
  (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_addConstraints__102268d98,uVar5);
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  (*(code *)puVar2)(uVar8);
  (*(code *)puVar2)(uVar7);
  (*(code *)puVar2)(uVar4);
  if (lVar1 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

