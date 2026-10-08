
void FUN_100010850(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  ID IVar5;
  
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (param_1,PTR_s_dynamicPropertyForKey__102268b28,&cf_childWindow);
  lVar4 = _objc_retainAutoreleasedReturnValue(uVar3);
  puVar1 = PTR__objc_msgSend_1021e1c68;
  if (lVar4 != 0) {
    (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_removeChildWindow__102268bf0,lVar4);
    (*(code *)puVar1)(param_1,PTR_s_setDynamicProperty_forKey__102268b38,0,&cf_childWindow);
    IVar5 = NSNotificationCenter::defaultCenter
                      ((ID)PTR__OBJC_CLASS___NSNotificationCenter_10226a7a8,
                       PTR_s_defaultCenter_102268ba8);
    uVar3 = _objc_retainAutoreleasedReturnValue(IVar5);
    (*(code *)puVar1)(uVar3,PTR_s_removeObserver_name_object__102268bf8,param_1,
                      *(undefined8 *)PTR__NSWindowDidResizeNotification_1021e1178,param_1);
    puVar2 = PTR__objc_release_1021e1c70;
    (*(code *)PTR__objc_release_1021e1c70)(uVar3);
    IVar5 = NSNotificationCenter::defaultCenter
                      ((ID)PTR__OBJC_CLASS___NSNotificationCenter_10226a7a8,
                       PTR_s_defaultCenter_102268ba8);
    uVar3 = _objc_retainAutoreleasedReturnValue(IVar5);
    (*(code *)puVar1)(uVar3,PTR_s_removeObserver_name_object__102268bf8,param_1,
                      *(undefined8 *)PTR__NSWindowWillEnterFullScreenNotification_1021e1188,param_1)
    ;
    (*(code *)puVar2)(uVar3);
    IVar5 = NSNotificationCenter::defaultCenter
                      ((ID)PTR__OBJC_CLASS___NSNotificationCenter_10226a7a8,
                       PTR_s_defaultCenter_102268ba8);
    uVar3 = _objc_retainAutoreleasedReturnValue(IVar5);
    (*(code *)puVar1)(uVar3,PTR_s_removeObserver_name_object__102268bf8,param_1,
                      *(undefined8 *)PTR__NSWindowDidExitFullScreenNotification_1021e1168,param_1);
    (*(code *)puVar2)(uVar3);
  }
  (*(code *)PTR__objc_release_1021e1c70)(lVar4);
  return;
}

