
/* Function Stack Size: 0x10 bytes */

void PDBarButtonItem::updateImage(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__objc_msgSend_1021e1c68;
  uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_button_1022695f0);
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  uVar3 = (*(code *)puVar1)(param_1,PTR_s_image_102269560);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar2,PTR_s_setImage__102268cd0,uVar3);
  puVar1 = PTR__objc_release_1021e1c70;
  (*(code *)PTR__objc_release_1021e1c70)(uVar3);
  (*(code *)puVar1)(uVar2);
  return;
}

