
void FUN_1000104d0(ID param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  ID IVar6;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_50 [32];
  
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (param_1,PTR_s_dynamicPropertyForKey__102268b28,&cf_childWindow);
  lVar4 = _objc_retainAutoreleasedReturnValue(uVar3);
  if (lVar4 == 0) {
    if (param_1 == 0) {
      local_68 = 0;
      uStack_60 = 0;
      local_78 = 0;
      uStack_70 = 0;
    }
    else {
      _objc_msgSend_stret((undefined *)&local_78,param_1,PTR_s_frame_102268b50);
    }
    _CGRectInset((int)DAT_100e11000,DAT_100e11000,local_50);
    puVar1 = PTR__objc_msgSend_1021e1c68;
    uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (PTR_ColorBorderWindow_10226a7a0,PTR_s_alloc_102268b58);
    lVar4 = (*(code *)puVar1)(uVar3,PTR_s_initWithContentRect_styleMask_ba_102268b60,0,2,0);
    (*(code *)puVar1)(lVar4,PTR_s_setOpaque__102268b68,0);
    (*(code *)puVar1)(lVar4,PTR_s_setIgnoresMouseEvents__102268b70,1);
    (*(code *)puVar1)((int)DAT_100e11008,lVar4,PTR_s_setAlphaValue__102268b78);
    uVar3 = (*(code *)puVar1)(lVar4,PTR_s_contentView_102268b80);
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    uVar5 = (*(code *)puVar1)(uVar3,PTR_s_superview_102268b88);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    puVar2 = PTR__objc_release_1021e1c70;
    (*(code *)PTR__objc_release_1021e1c70)(uVar3);
    (*(code *)puVar1)(uVar5,PTR_s_setWantsLayer__102268b90,1);
    uVar3 = (*(code *)puVar1)(uVar5,PTR_s_layer_102268b98);
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    (*(code *)puVar1)((int)DAT_100e11010,uVar3,PTR_s_setCornerRadius__102268ba0);
    (*(code *)puVar2)(uVar3);
    IVar6 = NSNotificationCenter::defaultCenter
                      ((ID)PTR__OBJC_CLASS___NSNotificationCenter_10226a7a8,
                       PTR_s_defaultCenter_102268ba8);
    uVar3 = _objc_retainAutoreleasedReturnValue(IVar6);
    (*(code *)puVar1)(uVar3,PTR_s_addObserver_selector_name_object_102268bb8,param_1,
                      PTR_s_onWindowDidResize__102268bb0,
                      *(undefined8 *)PTR__NSWindowDidResizeNotification_1021e1178,param_1);
    (*(code *)puVar2)(uVar3);
    IVar6 = NSNotificationCenter::defaultCenter
                      ((ID)PTR__OBJC_CLASS___NSNotificationCenter_10226a7a8,
                       PTR_s_defaultCenter_102268ba8);
    uVar3 = _objc_retainAutoreleasedReturnValue(IVar6);
    (*(code *)puVar1)(uVar3,PTR_s_addObserver_selector_name_object_102268bb8,param_1,
                      PTR_s_onWindowWillEnterFullScreen__102268bc0,
                      *(undefined8 *)PTR__NSWindowWillEnterFullScreenNotification_1021e1188,param_1)
    ;
    (*(code *)puVar2)(uVar3);
    IVar6 = NSNotificationCenter::defaultCenter
                      ((ID)PTR__OBJC_CLASS___NSNotificationCenter_10226a7a8,
                       PTR_s_defaultCenter_102268ba8);
    uVar3 = _objc_retainAutoreleasedReturnValue(IVar6);
    (*(code *)puVar1)(uVar3,PTR_s_addObserver_selector_name_object_102268bb8,param_1,
                      PTR_s_onWindowDidExitFullScreen__102268bc8,
                      *(undefined8 *)PTR__NSWindowDidExitFullScreenNotification_1021e1168,param_1);
    (*(code *)puVar2)(uVar3);
    (*(code *)puVar1)(param_1,PTR_s_addChildWindow_ordered__102268bd0,lVar4,0xffffffffffffffff);
    (*(code *)puVar1)(param_1,PTR_s_setDynamicProperty_forKey__102268b38,lVar4,&cf_childWindow);
    uVar3 = (*(code *)puVar1)(param_1,PTR_s_addDeallocHook__102268bd8,
                              &PTR___NSConcreteGlobalBlock_1021ecfe0);
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    (*(code *)puVar2)(uVar3);
    (*(code *)puVar2)(uVar5);
  }
  puVar1 = PTR__objc_msgSend_1021e1c68;
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_borderColor_102268be0);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)puVar1)(lVar4,PTR_s_setBackgroundColor__102268be8,uVar3);
  puVar1 = PTR__objc_release_1021e1c70;
  (*(code *)PTR__objc_release_1021e1c70)(uVar3);
  (*(code *)puVar1)(lVar4);
  return;
}

