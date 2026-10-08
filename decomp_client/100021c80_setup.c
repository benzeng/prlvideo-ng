
/* Function Stack Size: 0x10 bytes */

void PDBarButtonItem::setup(ID param_1,SEL param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 local_38;
  long local_30;
  
  puVar2 = PTR__objc_msgSend_1021e1c68;
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = *(undefined8 *)PTR__NSFilenamesPboardType_1021e10c8;
  local_30 = lVar1;
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSArray_10226a818,PTR_s_arrayWithObjects_count__102268f00,
                     &local_38,1);
  (*(code *)puVar2)(param_1,PTR_s_registerForDraggedTypes__1022695b8,uVar3);
  (*(code *)puVar2)(param_1,PTR_s_setupButton_1022695c0);
  (*(code *)puVar2)(param_1,PTR_s_setupConnectionStatusView_1022695c8);
  (*(code *)puVar2)(param_1,PTR_s_setupIOStatusView_1022695d0);
  (*(code *)puVar2)(param_1,PTR_s_setupDnDView_1022695d8);
  (*(code *)puVar2)(param_1,PTR_s_updateImage_1022695e0);
  uVar3 = (*(code *)puVar2)(PTR__OBJC_CLASS___NSNotificationCenter_10226a7a8,
                            PTR_s_defaultCenter_102268ba8);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)puVar2)(uVar3,PTR_s_addObserver_selector_name_object_102268bb8,param_1,
                    PTR_s_updateImage_1022695e0,
                    *(undefined8 *)PTR__NSWindowDidBecomeKeyNotification_1021e1158,0);
  (*(code *)PTR__objc_msgSend_1021e1c68)
            (uVar3,PTR_s_addObserver_selector_name_object_102268bb8,param_1,
             PTR_s_updateImage_1022695e0,
             *(undefined8 *)PTR__NSWindowDidBecomeMainNotification_1021e1160,0);
  (*(code *)PTR__objc_msgSend_1021e1c68)
            (uVar3,PTR_s_addObserver_selector_name_object_102268bb8,param_1,
             PTR_s_updateImage_1022695e0,
             *(undefined8 *)PTR__NSApplicationDidBecomeActiveNotification_1021e1078,0);
  (*(code *)PTR__objc_msgSend_1021e1c68)
            (uVar3,PTR_s_addObserver_selector_name_object_102268bb8,param_1,
             PTR_s_updateImage_1022695e0,
             *(undefined8 *)PTR__NSApplicationDidResignActiveNotification_1021e1088,0);
  (*(code *)PTR__objc_release_1021e1c70)(uVar3);
  if (lVar1 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

