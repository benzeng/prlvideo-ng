
/* Function Stack Size: 0x10 bytes */

ID PDToolsBarButtonItem::image(ID param_1,SEL param_2)

{
  int iVar1;
  undefined *puVar2;
  char cVar3;
  undefined8 uVar4;
  ID IVar5;
  QArrayData *pQVar6;
  QArrayData *local_70;
  QPixmap local_68 [32];
  QArrayData *local_48;
  QPixmap local_40 [39];
  undefined1 local_19;
  
  puVar2 = PTR__objc_msgSend_1021e1c68;
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_window_102268c08);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  cVar3 = (*(code *)puVar2)(uVar4,PTR_s_isMainWindow_102269360);
  if (cVar3 == '\0') {
    (*(code *)PTR__objc_release_1021e1c70)(uVar4);
LAB_1000267ec:
    puVar2 = PTR__OBJC_CLASS___NSImage_10226a7c0;
    local_70 = (QArrayData *)QString::fromAscii_helper(":/pixmaps/title_warning_disabled.png",0x24);
    QPixmap::QPixmap(local_68,&local_70,0,0);
    uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (puVar2,PTR_s_imageWithQPixmap__1022691f8,local_68);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    QPixmap::~QPixmap(local_68);
    if (*(int *)local_70 == -1) goto LAB_10002686a;
    pQVar6 = local_70;
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      iVar1 = *(int *)local_70;
      UNLOCK();
joined_r0x000100026855:
      local_19 = iVar1 != 0;
      if ((bool)local_19) goto LAB_10002686a;
    }
  }
  else {
    cVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (*(undefined8 *)PTR__NSApp_1021e1070,PTR_s_isActive_102269578);
    (*(code *)PTR__objc_release_1021e1c70)(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSImage_10226a7c0;
    if (cVar3 == '\0') goto LAB_1000267ec;
    local_48 = (QArrayData *)QString::fromAscii_helper(":/pixmaps/title_warning.png",0x1b);
    QPixmap::QPixmap(local_40,&local_48,0,0);
    uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (puVar2,PTR_s_imageWithQPixmap__1022691f8,local_40);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    QPixmap::~QPixmap(local_40);
    if (*(int *)local_48 == -1) goto LAB_10002686a;
    pQVar6 = local_48;
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      iVar1 = *(int *)local_48;
      UNLOCK();
      goto joined_r0x000100026855;
    }
  }
  QArrayData::deallocate(pQVar6,2,8);
LAB_10002686a:
  IVar5 = _objc_autoreleaseReturnValue(uVar4);
  return IVar5;
}

