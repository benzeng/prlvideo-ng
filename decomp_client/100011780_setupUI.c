
/* Function Stack Size: 0x10 bytes */

void CVmConsoleWindowTitleBarController::setupUI(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  ID IVar4;
  ID IVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  void *pvVar8;
  ID IVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  QArrayData *local_68;
  QArrayData *local_60;
  QPixmap local_58 [39];
  undefined1 local_31;
  
  (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_setStackContainerHidden__102268ca0,0);
  IVar4 = NSButton::alloc((ID)PTR__OBJC_CLASS___NSButton_10226a7b8,PTR_s_alloc_102268b58);
  IVar4 = NSButton::init(IVar4,PTR_s_init_102268ca8);
  setEditVmButton_(param_1,PTR_s_setEditVmButton__102268c38,IVar4);
  IVar5 = editVmButton(param_1,PTR_s_editVmButton_102268cb0);
  uVar6 = _objc_retainAutoreleasedReturnValue(IVar5);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar6,PTR_s_setBordered__102268cb8,0);
  (*(code *)PTR__objc_release_1021e1c70)(uVar6);
  IVar5 = editVmButton(param_1,PTR_s_editVmButton_102268cb0);
  uVar6 = _objc_retainAutoreleasedReturnValue(IVar5);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar6,PTR_s_setBezelStyle__102268cc0,0xb);
  (*(code *)PTR__objc_release_1021e1c70)(uVar6);
  IVar5 = editVmButton(param_1,PTR_s_editVmButton_102268cb0);
  uVar6 = _objc_retainAutoreleasedReturnValue(IVar5);
  puVar1 = PTR__OBJC_CLASS___NSImage_10226a7c0;
  local_60 = (QArrayData *)
             QString::fromAscii_helper(":/pixmaps/MacButtons/Templates/action_template.png",0x32);
  QPixmap::QPixmap(local_58,&local_60,0,0);
  IVar5 = NSImage::imageTemplateWithQPixmap_
                    ((ID)puVar1,PTR_s_imageTemplateWithQPixmap__102268cc8,local_58);
  uVar7 = _objc_retainAutoreleasedReturnValue(IVar5);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar6,PTR_s_setImage__102268cd0,uVar7);
  (*(code *)PTR__objc_release_1021e1c70)(uVar7);
  QPixmap::~QPixmap(local_58);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000118ff;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1000118ff:
  (*(code *)PTR__objc_release_1021e1c70)(uVar6);
  IVar5 = editVmButton(param_1,PTR_s_editVmButton_102268cb0);
  uVar6 = _objc_retainAutoreleasedReturnValue(IVar5);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar6,PTR_s_setTarget__102268cd8,param_1);
  (*(code *)PTR__objc_release_1021e1c70)(uVar6);
  IVar5 = editVmButton(param_1,PTR_s_editVmButton_102268cb0);
  uVar6 = _objc_retainAutoreleasedReturnValue(IVar5);
  (*(code *)PTR__objc_msgSend_1021e1c68)
            (uVar6,PTR_s_setAction__102268ce8,PTR_s_onEditVmButtonClicked_102268ce0);
  (*(code *)PTR__objc_release_1021e1c70)(uVar6);
  IVar5 = editVmButton(param_1,PTR_s_editVmButton_102268cb0);
  uVar6 = _objc_retainAutoreleasedReturnValue(IVar5);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar6,PTR_s_setRefusesFirstResponder__102268cf0,1);
  (*(code *)PTR__objc_release_1021e1c70)(uVar6);
  IVar5 = editVmButton(param_1,PTR_s_editVmButton_102268cb0);
  uVar6 = _objc_retainAutoreleasedReturnValue(IVar5);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar6,PTR_s_setTranslatesAutoresizingMaskInt_102268cf8,0);
  (*(code *)PTR__objc_release_1021e1c70)(uVar6);
  IVar5 = editVmButton(param_1,PTR_s_editVmButton_102268cb0);
  uVar6 = _objc_retainAutoreleasedReturnValue(IVar5);
  puVar1 = PTR__OBJC_CLASS___NSString_10226a7c8;
  QMetaObject::tr((char *)&local_68,PTR_staticMetaObject_1021e1520,(int)PTR_s_Configure____10226dfc8
                 );
  IVar5 = NSString::stringWithQString_((ID)puVar1,PTR_s_stringWithQString__102268d00,&local_68);
  uVar7 = _objc_retainAutoreleasedReturnValue(IVar5);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar6,PTR_s_setToolTip__102268d08,uVar7);
  (*(code *)PTR__objc_release_1021e1c70)(uVar7);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100011a98;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100011a98:
  (*(code *)PTR__objc_release_1021e1c70)(uVar6);
  (*(code *)PTR__objc_msgSend_1021e1c68)
            (DAT_100e11040,param_1,PTR_s_addAdditionalView_withWidth__102268d10,IVar4);
  cVar3 = FUN_100124f70();
  if (cVar3 != '\0') {
    IVar5 = window(param_1,PTR_s_window_102268c08);
    uVar6 = _objc_retainAutoreleasedReturnValue(IVar5);
    uVar7 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar6,PTR_s_addCoherenceButton__102268d18,0);
    IVar5 = _objc_retainAutoreleasedReturnValue(uVar7);
    setCoherenceButton_(param_1,PTR_s_setCoherenceButton__102268c50,IVar5);
    puVar1 = PTR__objc_release_1021e1c70;
    (*(code *)PTR__objc_release_1021e1c70)(IVar5);
    (*(code *)puVar1)(uVar6);
    IVar5 = coherenceButton(param_1,PTR_s_coherenceButton_102268d20);
    uVar6 = _objc_retainAutoreleasedReturnValue(IVar5);
    (*(code *)PTR__objc_msgSend_1021e1c68)(uVar6,PTR_s_setTarget__102268cd8,param_1);
    (*(code *)PTR__objc_release_1021e1c70)(uVar6);
    IVar5 = coherenceButton(param_1,PTR_s_coherenceButton_102268d20);
    uVar6 = _objc_retainAutoreleasedReturnValue(IVar5);
    (*(code *)PTR__objc_msgSend_1021e1c68)
              (uVar6,PTR_s_setAction__102268ce8,PTR_s_onCoherenceButtonClicked_102268d28);
    (*(code *)PTR__objc_release_1021e1c70)(uVar6);
    updateCoherenceButtonState(param_1,PTR_s_updateCoherenceButtonState_102268c98);
  }
  if (DAT_102310820 == (void *)0x0) {
    pvVar8 = operator_new(0x18);
    FUN_10002bc90(pvVar8);
    DAT_10226c0b0 = 1;
    DAT_102310820 = pvVar8;
  }
  FUN_10002be80(DAT_102310820,param_1,1);
  updateBuyButton(param_1,PTR_s_updateBuyButton_102268c70);
  IVar5 = CTitleBarTextField::alloc
                    ((ID)PTR__OBJC_CLASS___CTitleBarTextField_10226a7d0,PTR_s_alloc_102268b58);
  IVar5 = CTitleBarTextField::initWithTitle_(IVar5,PTR_s_initWithTitle__102268d30,&cf___);
  setTextTitleMessage_(param_1,PTR_s_setTextTitleMessage__102268c58,IVar5);
  IVar9 = textTitleMessage(param_1,PTR_s_textTitleMessage_102268d38);
  uVar6 = _objc_retainAutoreleasedReturnValue(IVar9);
  uVar7 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (DAT_100e11048,PTR__OBJC_CLASS___NSFont_10226a7d8,
                     PTR_s_fontWithName_size__102268d40,&cf_HelveticaNeue);
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar6,PTR_s_setTitleFont__102268d48,uVar7);
  puVar1 = PTR__objc_release_1021e1c70;
  (*(code *)PTR__objc_release_1021e1c70)(uVar7);
  (*(code *)puVar1)(uVar6);
  IVar9 = textTitleMessage(param_1,PTR_s_textTitleMessage_102268d38);
  uVar6 = _objc_retainAutoreleasedReturnValue(IVar9);
  uVar7 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar6,PTR_s_titleFont_102268d50);
  lVar10 = _objc_retainAutoreleasedReturnValue(uVar7);
  (*(code *)puVar1)(lVar10);
  (*(code *)puVar1)(uVar6);
  if (lVar10 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!) Can\'t create Helvetica Neue font");
    IVar9 = textTitleMessage(param_1,PTR_s_textTitleMessage_102268d38);
    uVar6 = _objc_retainAutoreleasedReturnValue(IVar9);
    uVar7 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (DAT_100e11048,PTR__OBJC_CLASS___NSFont_10226a7d8,
                       PTR_s_titleBarFontOfSize__102268d58);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    (*(code *)PTR__objc_msgSend_1021e1c68)(uVar6,PTR_s_setTitleFont__102268d48,uVar7);
    (*(code *)puVar1)(uVar7);
    (*(code *)puVar1)(uVar6);
  }
  IVar9 = textTitleMessage(param_1,PTR_s_textTitleMessage_102268d38);
  uVar6 = _objc_retainAutoreleasedReturnValue(IVar9);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar6,PTR_s_setTranslatesAutoresizingMaskInt_102268cf8,0);
  (*(code *)PTR__objc_release_1021e1c70)(uVar6);
  IVar9 = textTitleMessage(param_1,PTR_s_textTitleMessage_102268d38);
  uVar6 = _objc_retainAutoreleasedReturnValue(IVar9);
  (*(code *)PTR__objc_msgSend_1021e1c68)
            (DAT_100e11060,uVar6,PTR_s_setContentCompressionResistanceP_102268d60,0);
  (*(code *)PTR__objc_release_1021e1c70)(uVar6);
  uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_leftViewContainer_102268d68);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  IVar9 = textTitleMessage(param_1,PTR_s_textTitleMessage_102268d38);
  uVar7 = _objc_retainAutoreleasedReturnValue(IVar9);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar6,PTR_s_addSubview__102268d70,uVar7);
  (*(code *)puVar1)(uVar7);
  (*(code *)puVar1)(uVar6);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_10226a7e0;
  uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_leftViewContainer_102268d68);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  IVar9 = textTitleMessage(param_1,PTR_s_textTitleMessage_102268d38);
  uVar7 = _objc_retainAutoreleasedReturnValue(IVar9);
  uVar11 = (*(code *)PTR__objc_msgSend_1021e1c68)
                     (DAT_100e11050,DAT_100e11050,puVar2,
                      PTR_s_constraintWithItem_attribute_rel_102268d78,uVar6,10,0,uVar7,10);
  uVar11 = _objc_retainAutoreleasedReturnValue(uVar11);
  (*(code *)puVar1)(uVar7);
  (*(code *)puVar1)(uVar6);
  uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_leftViewContainer_102268d68);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar6,PTR_s_addConstraint__102268d80,uVar11);
  (*(code *)PTR__objc_release_1021e1c70)(uVar6);
  uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_leftViewContainer_102268d68);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_10226a7e0;
  IVar9 = NSString::stringWithFormat_
                    ((ID)PTR__OBJC_CLASS___NSString_10226a7c8,PTR_s_stringWithFormat__102268d88,
                     &cf_H____d___textTitleMessage_>_10___>_0__,0x10);
  uVar7 = _objc_retainAutoreleasedReturnValue(IVar9);
  uVar12 = _objc_loadWeakRetained(_textTitleMessage + param_1);
  uVar13 = __NSDictionaryOfVariableBindings(&cf__textTitleMessage,uVar12,0);
  uVar13 = _objc_retainAutoreleasedReturnValue(uVar13);
  IVar9 = NSLayoutConstraint::constraintsWithVisualFormat_options_metrics_views_
                    ((ID)puVar1,PTR_s_constraintsWithVisualFormat_opti_102268d90,uVar7,0,0,uVar13);
  uVar14 = _objc_retainAutoreleasedReturnValue(IVar9);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar6,PTR_s_addConstraints__102268d98,uVar14);
  puVar1 = PTR__objc_release_1021e1c70;
  (*(code *)PTR__objc_release_1021e1c70)(uVar14);
  (*(code *)puVar1)(uVar13);
  (*(code *)puVar1)(uVar12);
  (*(code *)puVar1)(uVar7);
  (*(code *)puVar1)(uVar6);
  IVar9 = NSNotificationCenter::defaultCenter
                    ((ID)PTR__OBJC_CLASS___NSNotificationCenter_10226a7a8,
                     PTR_s_defaultCenter_102268ba8);
  uVar6 = _objc_retainAutoreleasedReturnValue(IVar9);
  (*(code *)PTR__objc_msgSend_1021e1c68)
            (uVar6,PTR_s_addObserver_selector_name_object_102268bb8,param_1,
             PTR_s_updateTitleMessage_102268da0,
             *(undefined8 *)PTR__NSWindowDidBecomeKeyNotification_1021e1158,0);
  (*(code *)PTR__objc_msgSend_1021e1c68)
            (uVar6,PTR_s_addObserver_selector_name_object_102268bb8,param_1,
             PTR_s_updateTitleMessage_102268da0,
             *(undefined8 *)PTR__NSWindowDidBecomeMainNotification_1021e1160,0);
  (*(code *)PTR__objc_msgSend_1021e1c68)
            (uVar6,PTR_s_addObserver_selector_name_object_102268bb8,param_1,
             PTR_s_updateTitleMessage_102268da0,
             *(undefined8 *)PTR__NSApplicationDidBecomeActiveNotification_1021e1078,0);
  (*(code *)PTR__objc_msgSend_1021e1c68)
            (uVar6,PTR_s_addObserver_selector_name_object_102268bb8,param_1,
             PTR_s_updateTitleMessage_102268da0,
             *(undefined8 *)PTR__NSApplicationDidResignActiveNotification_1021e1088,0);
  (*(code *)puVar1)(uVar6);
  (*(code *)puVar1)(uVar11);
  (*(code *)puVar1)(IVar5);
  (*(code *)puVar1)(IVar4);
  return;
}

