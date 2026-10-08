
/* Function Stack Size: 0x14 bytes */

void PDAccountTitleButton::setEnabled_(ID param_1,SEL param_2,char param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined7 in_register_00000011;
  ulong uVar3;
  
  puVar1 = PTR__objc_msgSend_1021e1c68;
  uVar3 = CONCAT71(in_register_00000011,param_3) & 0xffffffff;
  uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_nameButton_102269720);
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  (*(code *)puVar1)(uVar2,PTR_s_setEnabled__102268dc8,uVar3);
  (*(code *)PTR__objc_release_1021e1c70)(uVar2);
  uVar2 = (*(code *)puVar1)(param_1,PTR_s_arrowButton_102269728);
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  (*(code *)puVar1)(uVar2,PTR_s_setEnabled__102268dc8,(int)(char)uVar3);
  (*(code *)PTR__objc_release_1021e1c70)(uVar2);
  return;
}

