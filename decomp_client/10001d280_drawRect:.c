
/* Function Stack Size: 0x30 bytes */

void TitleBarButton::drawRect_(ID param_1,SEL param_2,CGRect param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  objc_super local_40;
  
  puVar1 = PTR__objc_msgSend_1021e1c68;
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_imageSet_102269278);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  puVar2 = PTR__OBJC_CLASS___NSNumber_10226a848;
  uVar4 = (*(code *)puVar1)(param_1,PTR_s_imageTypeForCurrentState_102269280);
  uVar4 = (*(code *)puVar1)(puVar2,PTR_s_numberWithUnsignedInteger__102269238,uVar4);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar5 = (*(code *)puVar1)(uVar3,PTR_s_objectForKeyedSubscript__102269240,uVar4);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  (*(code *)puVar1)(param_1,PTR_s_setImage__102268cd0,uVar5);
  puVar2 = PTR__objc_release_1021e1c70;
  (*(code *)PTR__objc_release_1021e1c70)(uVar5);
  (*(code *)puVar2)(uVar4);
  (*(code *)puVar2)(uVar3);
  uVar3 = (*(code *)puVar1)(param_1,PTR_s_imageSet_102269278);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  puVar2 = PTR__OBJC_CLASS___NSNumber_10226a848;
  uVar4 = (*(code *)puVar1)(param_1,PTR_s_alternateImageTypeForCurrentStat_102269288);
  uVar4 = (*(code *)puVar1)(puVar2,PTR_s_numberWithUnsignedInteger__102269238,uVar4);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar5 = (*(code *)puVar1)(uVar3,PTR_s_objectForKeyedSubscript__102269240,uVar4);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  (*(code *)puVar1)(param_1,PTR_s_setAlternateImage__102269290,uVar5);
  puVar1 = PTR__objc_release_1021e1c70;
  (*(code *)PTR__objc_release_1021e1c70)(uVar5);
  (*(code *)puVar1)(uVar4);
  (*(code *)puVar1)(uVar3);
  local_40.super_class = (class_t *)PTR_TitleBarButton_10226ab58;
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,PTR_s_drawRect__1022692c0);
  return;
}

