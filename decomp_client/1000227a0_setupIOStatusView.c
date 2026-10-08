
/* Function Stack Size: 0x10 bytes */

void PDBarButtonItem::setupIOStatusView(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  QArrayData *local_60;
  QPixmap local_58 [39];
  undefined1 local_31;
  
  puVar1 = PTR__objc_msgSend_1021e1c68;
  uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR_PDDeviceStatusView_10226a8a0,PTR_s_alloc_102268b58);
  uVar2 = (*(code *)puVar1)(uVar2,PTR_s_init_102268ca8);
  (*(code *)puVar1)(param_1,PTR_s_setIoStatusView__102269618,uVar2);
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_ioStatusView_102269620);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  puVar1 = PTR__OBJC_CLASS___NSImage_10226a7c0;
  local_60 = (QArrayData *)
             QString::fromAscii_helper
                       (":/pixmaps/DeviceIcons/device_status_read-write_alt.png",0x36);
  QPixmap::QPixmap(local_58,&local_60,0,0);
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(puVar1,PTR_s_imageWithQPixmap__1022691f8,local_58);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar3,PTR_s_setImage__102268cd0,uVar4);
  (*(code *)PTR__objc_release_1021e1c70)(uVar4);
  QPixmap::~QPixmap(local_58);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000228a5;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1000228a5:
  (*(code *)PTR__objc_release_1021e1c70)(uVar3);
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_ioStatusView_102269620);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar3,PTR_s_setTranslatesAutoresizingMaskInt_102268cf8,0);
  (*(code *)PTR__objc_release_1021e1c70)(uVar3);
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_ioStatusView_102269620);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_addSubview__102268d70,uVar3);
  (*(code *)PTR__objc_release_1021e1c70)(uVar3);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_10226a7e0;
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_ioStatusView_102269620);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (DAT_100e11050,0,puVar1,PTR_s_constraintWithItem_attribute_rel_102268d78,param_1
                     ,9,0,uVar3,9);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)PTR__objc_release_1021e1c70)(uVar3);
  (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_addConstraint__102268d80,uVar4);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_10226a7e0;
  uVar3 = _objc_loadWeakRetained(_ioStatusView + param_1);
  uVar5 = __NSDictionaryOfVariableBindings(&cf__ioStatusView,uVar3,0);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (puVar1,PTR_s_constraintsWithVisualFormat_opti_102268d90,&cf_V___ioStatusView__,
                     0,0,uVar5);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_addConstraints__102268d98,uVar6);
  puVar1 = PTR__objc_release_1021e1c70;
  (*(code *)PTR__objc_release_1021e1c70)(uVar6);
  (*(code *)puVar1)(uVar5);
  (*(code *)puVar1)(uVar3);
  (*(code *)puVar1)(uVar4);
  (*(code *)puVar1)(uVar2);
  return;
}

