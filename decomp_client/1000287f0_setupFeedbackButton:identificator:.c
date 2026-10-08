
/* Function Stack Size: 0x20 bytes */

void PDLFeedbackButtonDelegate::setupFeedbackButton_identificator_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__objc_retain_1021e1c78;
  uVar2 = (*(code *)PTR__objc_retain_1021e1c78)(param_3);
  uVar3 = (*(code *)puVar1)(param_4);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar2,PTR_s_setUp_102269788);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar2,PTR_s_setButtonIdentifier__102269790,uVar3);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar2,PTR_s_setDelegate__102268f50,param_1);
  puVar1 = PTR__objc_release_1021e1c70;
  (*(code *)PTR__objc_release_1021e1c70)(uVar3);
  (*(code *)puVar1)(uVar2);
  return;
}

