
/* Function Stack Size: 0x20 bytes */

ID TitleBarButton::initWithImageSet_position_(ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  ID IVar8;
  objc_super local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  uVar3 = (*(code *)PTR__objc_retain_1021e1c78)(param_3);
  puVar1 = PTR__objc_msgSend_1021e1c68;
  IVar8 = 0;
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSNumber_10226a848,PTR_s_numberWithUnsignedInteger__102269238
                     ,0);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar5 = (*(code *)puVar1)(uVar3,PTR_s_objectForKeyedSubscript__102269240,uVar4);
  lVar6 = _objc_retainAutoreleasedReturnValue(uVar5);
  (*(code *)PTR__objc_release_1021e1c70)(uVar4);
  if (lVar6 != 0) {
    uVar4 = (*(code *)puVar1)(lVar6,PTR_s_size_102268ef8);
    (*(code *)puVar1)(lVar6,PTR_s_size_102268ef8);
    local_58 = 0;
    uStack_50 = 0;
    local_68.super_class = (class_t *)PTR_TitleBarButton_10226ab58;
    local_68.receiver = param_1;
    local_48 = uVar4;
    param_1 = _objc_msgSendSuper2(&local_68,PTR_s_initWithFrame__102268f78);
    if (param_1 != 0) {
      (*(code *)puVar1)(param_1,PTR_s_setImageSet__102269248,uVar3);
      (*(code *)puVar1)(param_1,PTR_s_setPosition__102269250,param_4);
      uVar4 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSMutableArray_10226a840,PTR_s_new_102269070);
      (*(code *)puVar1)(param_1,PTR_s_setObservers__102269258,uVar4);
      puVar2 = PTR__objc_release_1021e1c70;
      (*(code *)PTR__objc_release_1021e1c70)(uVar4);
      (*(code *)puVar1)(param_1,PTR_s_setButtonType__102269260,5);
      (*(code *)puVar1)(param_1,PTR_s_setBordered__102268cb8,0);
      (*(code *)puVar1)(param_1,PTR_s_setTransparent__102269268,0);
      uVar4 = (*(code *)puVar1)(param_1,PTR_s_cell_1022690a8);
      uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
      (*(code *)puVar1)(uVar4,PTR_s_setImageDimsWhenDisabled__102269270,0);
      (*(code *)puVar2)(uVar4);
      uVar4 = (*(code *)puVar1)(param_1,PTR_s_imageSet_102269278);
      uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
      puVar2 = PTR__OBJC_CLASS___NSNumber_10226a848;
      uVar5 = (*(code *)puVar1)(param_1,PTR_s_imageTypeForCurrentState_102269280);
      uVar5 = (*(code *)puVar1)(puVar2,PTR_s_numberWithUnsignedInteger__102269238,uVar5);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      uVar7 = (*(code *)puVar1)(uVar4,PTR_s_objectForKeyedSubscript__102269240,uVar5);
      uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
      (*(code *)puVar1)(param_1,PTR_s_setImage__102268cd0,uVar7);
      puVar2 = PTR__objc_release_1021e1c70;
      (*(code *)PTR__objc_release_1021e1c70)(uVar7);
      (*(code *)puVar2)(uVar5);
      (*(code *)puVar2)(uVar4);
      uVar4 = (*(code *)puVar1)(param_1,PTR_s_imageSet_102269278);
      uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
      puVar2 = PTR__OBJC_CLASS___NSNumber_10226a848;
      uVar5 = (*(code *)puVar1)(param_1,PTR_s_alternateImageTypeForCurrentStat_102269288);
      uVar5 = (*(code *)puVar1)(puVar2,PTR_s_numberWithUnsignedInteger__102269238,uVar5);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      uVar7 = (*(code *)puVar1)(uVar4,PTR_s_objectForKeyedSubscript__102269240,uVar5);
      uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
      (*(code *)puVar1)(param_1,PTR_s_setAlternateImage__102269290,uVar7);
      puVar1 = PTR__objc_release_1021e1c70;
      (*(code *)PTR__objc_release_1021e1c70)(uVar7);
      (*(code *)puVar1)(uVar5);
      (*(code *)puVar1)(uVar4);
    }
    IVar8 = (*(code *)PTR__objc_retain_1021e1c78)(param_1);
  }
  puVar1 = PTR__objc_release_1021e1c70;
  (*(code *)PTR__objc_release_1021e1c70)(lVar6);
  (*(code *)puVar1)(uVar3);
  (*(code *)puVar1)(param_1);
  return IVar8;
}

