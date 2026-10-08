
/* Function Stack Size: 0x18 bytes */

void PDDevelopBarButtonItem::setVm_(ID param_1,SEL param_2,CVmWrap *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  QArrayData *local_58;
  QPixmap local_50 [32];
  objc_super local_30;
  undefined1 local_19;
  
  local_30.super_class = (class_t *)PTR_PDDevelopBarButtonItem_10226ab90;
  local_30.receiver = param_1;
  _objc_msgSendSuper2(&local_30,PTR_s_setVm__102268e58);
  puVar1 = PTR__OBJC_CLASS___NSImage_10226a7c0;
  local_58 = (QArrayData *)
             QString::fromAscii_helper(":/pixmaps/MacButtons/Templates/develop_template.png",0x33);
  QPixmap::QPixmap(local_50,&local_58,0,0);
  uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (puVar1,PTR_s_imageTemplateWithQPixmap__102268cc8,local_50);
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_setImage__102268cd0,uVar2);
  (*(code *)PTR__objc_release_1021e1c70)(uVar2);
  QPixmap::~QPixmap(local_50);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_19 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10002639e;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10002639e:
  (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_setDropType__1022695a8,0);
  return;
}

