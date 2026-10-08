
/* Function Stack Size: 0x20 bytes */

void PDLFeedbackButtonDelegate::addFeedbackButton_identificator_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__objc_retain_1021e1c78;
  uVar2 = (*(code *)PTR__objc_retain_1021e1c78)(param_3);
  uVar3 = (*(code *)puVar1)(param_4);
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___PDFeedbackButton_10226a830,PTR_s_alloc_102268b58);
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_init_102268ca8);
  (*(code *)PTR__objc_msgSend_1021e1c68)
            (param_1,PTR_s_setupFeedbackButton_identificato_102269780,uVar4,uVar3);
  (*(code *)PTR__objc_msgSend_1021e1c68)
            (DAT_100e11040,uVar2,PTR_s_addAdditionalView_withWidth__102268d10,uVar4);
  puVar1 = PTR__objc_release_1021e1c70;
  (*(code *)PTR__objc_release_1021e1c70)(uVar4);
  (*(code *)puVar1)(uVar3);
  (*(code *)puVar1)(uVar2);
  return;
}

