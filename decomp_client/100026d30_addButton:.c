
/* Function Stack Size: 0x18 bytes */

void PDAccountTitleButton::addButton_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  QArrayData *local_60;
  QPixmap local_58 [39];
  undefined1 local_31;
  
  uVar2 = (*(code *)PTR__objc_retain_1021e1c78)(param_3);
  if ((((*(long *)(param_1 + _controller) == 0) ||
       (*(int *)(*(long *)(param_1 + _controller) + 4) == 0)) ||
      (lVar4 = *(long *)(_controller + 8 + param_1), lVar4 == 0)) || (*(long *)(lVar4 + 0x18) == 0))
  goto LAB_10002713b;
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_nameButton_102269720);
  lVar4 = _objc_retainAutoreleasedReturnValue(uVar3);
  if (lVar4 == 0) {
    uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_arrowButton_102269728);
    lVar4 = _objc_retainAutoreleasedReturnValue(uVar3);
    puVar1 = PTR__objc_release_1021e1c70;
    (*(code *)PTR__objc_release_1021e1c70)(lVar4);
    (*(code *)puVar1)(0);
    if (lVar4 == 0) {
      uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                        (PTR__OBJC_CLASS___NSButton_10226a7b8,PTR_s_alloc_102268b58);
      uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar3,PTR_s_init_102268ca8);
      (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_setNameButton__102269730,uVar3);
      (*(code *)PTR__objc_msgSend_1021e1c68)(uVar3,PTR_s_setBordered__102268cb8,0);
      (*(code *)PTR__objc_msgSend_1021e1c68)(uVar3,PTR_s_setBezelStyle__102268cc0,0xb);
      (*(code *)PTR__objc_msgSend_1021e1c68)(uVar3,PTR_s_setTitle__102268ee8,uVar2);
      (*(code *)PTR__objc_msgSend_1021e1c68)(uVar3,PTR_s_setTarget__102268cd8,param_1);
      (*(code *)PTR__objc_msgSend_1021e1c68)
                (uVar3,PTR_s_setAction__102268ce8,PTR_s_buttonDidClick_102269738);
      (*(code *)PTR__objc_msgSend_1021e1c68)(uVar3,PTR_s_setRefusesFirstResponder__102268cf0,1);
      (*(code *)PTR__objc_msgSend_1021e1c68)
                (uVar3,PTR_s_setTranslatesAutoresizingMaskInt_102268cf8,0);
      uVar5 = CTitleBarControllerQt::nativeTitleBarController();
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      (*(code *)PTR__objc_msgSend_1021e1c68)(0,uVar5,PTR_s_addAdditionalView_withWidth__102268d10);
      (*(code *)PTR__objc_release_1021e1c70)(uVar5);
      uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                        (PTR__OBJC_CLASS___NSButton_10226a7b8,PTR_s_alloc_102268b58);
      uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar5,PTR_s_init_102268ca8);
      (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_setArrowButton__102269740,uVar5);
      (*(code *)PTR__objc_msgSend_1021e1c68)(uVar5,PTR_s_setBordered__102268cb8,0);
      (*(code *)PTR__objc_msgSend_1021e1c68)(uVar5,PTR_s_setBezelStyle__102268cc0,0xb);
      uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar5,PTR_s_cell_1022690a8);
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      (*(code *)PTR__objc_msgSend_1021e1c68)(uVar6,PTR_s_setImageScaling__102269748,3);
      puVar1 = PTR__OBJC_CLASS___NSImage_10226a7c0;
      local_60 = (QArrayData *)QString::fromAscii_helper(":/pixmaps/Title_arrows.png",0x1a);
      QPixmap::QPixmap(local_58,&local_60,0,0);
      uVar7 = (*(code *)PTR__objc_msgSend_1021e1c68)
                        (puVar1,PTR_s_imageTemplateWithQPixmap__102268cc8,local_58);
      uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
      (*(code *)PTR__objc_msgSend_1021e1c68)(uVar5,PTR_s_setImage__102268cd0,uVar7);
      (*(code *)PTR__objc_release_1021e1c70)(uVar7);
      QPixmap::~QPixmap(local_58);
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_31 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100027093;
        }
        QArrayData::deallocate(local_60,2,8);
      }
LAB_100027093:
      (*(code *)PTR__objc_msgSend_1021e1c68)(uVar5,PTR_s_setTarget__102268cd8,param_1);
      (*(code *)PTR__objc_msgSend_1021e1c68)
                (uVar5,PTR_s_setAction__102268ce8,PTR_s_buttonDidClick_102269738);
      (*(code *)PTR__objc_msgSend_1021e1c68)(uVar5,PTR_s_setRefusesFirstResponder__102268cf0,1);
      (*(code *)PTR__objc_msgSend_1021e1c68)
                (uVar5,PTR_s_setTranslatesAutoresizingMaskInt_102268cf8,0);
      uVar7 = CTitleBarControllerQt::nativeTitleBarController();
      uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
      (*(code *)PTR__objc_msgSend_1021e1c68)
                (DAT_100e11090,uVar7,PTR_s_addAdditionalView_withWidth__102268d10,uVar5);
      puVar1 = PTR__objc_release_1021e1c70;
      (*(code *)PTR__objc_release_1021e1c70)(uVar7);
      (*(code *)puVar1)(uVar6);
      (*(code *)puVar1)(uVar5);
      (*(code *)puVar1)(uVar3);
      goto LAB_10002713b;
    }
  }
  else {
    (*(code *)PTR__objc_release_1021e1c70)(lVar4);
  }
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_nameButton_102269720);
  lVar4 = _objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)PTR__objc_release_1021e1c70)(lVar4);
  if (lVar4 != 0) {
    uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_nameButton_102269720);
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    (*(code *)PTR__objc_msgSend_1021e1c68)(uVar3,PTR_s_setTitle__102268ee8,uVar2);
    (*(code *)PTR__objc_release_1021e1c70)(uVar3);
  }
LAB_10002713b:
  (*(code *)PTR__objc_release_1021e1c70)(uVar2);
  return;
}

