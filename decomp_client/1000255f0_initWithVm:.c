
/* Function Stack Size: 0x18 bytes */

ID PDKeyboardBarButtonItem::initWithVm_(ID param_1,SEL param_2,CVmWrap *param_3)

{
  undefined *puVar1;
  ID IVar2;
  undefined8 uVar3;
  QArrayData *local_70;
  QArrayData *local_68;
  QPixmap local_60 [32];
  objc_super local_40;
  undefined1 local_29;
  
  local_40.super_class = (class_t *)PTR_PDKeyboardBarButtonItem_10226ab80;
  local_40.receiver = param_1;
  IVar2 = _objc_msgSendSuper2(&local_40,PTR_s_initWithVm__102268e40);
  puVar1 = PTR__OBJC_CLASS___NSImage_10226a7c0;
  if (IVar2 == 0) {
    return 0;
  }
  local_68 = (QArrayData *)
             QString::fromAscii_helper(":/pixmaps/DeviceIcons/keyboard_template.png",0x2b);
  QPixmap::QPixmap(local_60,&local_68,0,0);
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (puVar1,PTR_s_imageTemplateWithQPixmap__102268cc8,local_60);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)PTR__objc_msgSend_1021e1c68)(IVar2,PTR_s_setImage__102268cd0,uVar3);
  (*(code *)PTR__objc_release_1021e1c70)(uVar3);
  QPixmap::~QPixmap(local_60);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_29 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000256d4;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1000256d4:
  puVar1 = PTR__OBJC_CLASS___NSString_10226a7c8;
  FUN_1001a0d10(&local_70);
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (puVar1,PTR_s_stringWithQString__102268d00,&local_70);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)PTR__objc_msgSend_1021e1c68)(IVar2,PTR_s_setItemToolTip__1022695b0,uVar3);
  (*(code *)PTR__objc_release_1021e1c70)(uVar3);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      UNLOCK();
      if (*(int *)local_70 != 0) {
        return IVar2;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_70,2,8);
  }
  return IVar2;
}

